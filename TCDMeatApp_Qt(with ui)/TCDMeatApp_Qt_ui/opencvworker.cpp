#include "opencvworker.h"

OpenCvWorker::OpenCvWorker(QObject *parent) : QThread(parent)
{    
    stop = true;
//    filename = "/Volumes/YINGHANUSB/TCD Project (meatsensor)/Yinghan/Video/convey_dataset3(MT2_L-3)_withScratch.mov";
//    filename = "D:/TCD Project (meatsensor)/Yinghan/Video/convey_dataset3(MT2_L-3)_withScratch.mov";
//    filename = "D:/TCD Project (meatsensor)/Yinghan/Video/convey_dataset3(MT2_L-3)_withScratch_vibrate.mov";
    filename = "D:/TCD Project (meatsensor)/Yinghan/Video/convey_dataset3(MT3_R-1)_withScratch.mov";
//    filename = "C:/Users/Soumyajyoti Maji/Videos/RECentral/Standard Environment2 Zoom6_Brightness4(20171205).mp4";
//    filename = "D:/TCD Project (meatsensor)/TCD_MacMini/RECentral/1st/2017082111155957.mp4";

    webcam.open(0);
    cap.open(filename);
    if (cap.isOpened())
    {
        frameRate = (int) cap.get(CV_CAP_PROP_FPS);
        cout<<"frame rate: "<<frameRate<<endl;
    }

    p = strip.getParameters(colorspace, method, sensor); // recover curve a,b,c,d settings
//    p =
    panelMat =  Mat(300, 250, CV_8UC3, Scalar(113, 117, 122));

    // Get the MT#3 trial images' path
//    directory = "D:/TCD Project (meatsensor)/Yinghan/Dataset_3_copy/MT#3 R-1";
    directory = "D:/TCD Project (meatsensor)/Yinghan/MT3_R-1/Images";
    QDir dir(directory);
    if (!dir.exists()) {
      qWarning("The directory does not exist");
    }
    dir.setFilter(QDir::Files | QDir::AllDirs);
    dir.setSorting(QDir::Size | QDir::Reversed);
    list = dir.entryInfoList();
    for (int i = 2; i < list.size(); ++i) {
        QFileInfo fileInfo = list.at(i);
        QString str = fileInfo.fileName();
//        cout<<i<<" "<<str.toLocal8Bit().constData()<<endl;
        string p = (directory+"/"+str).toLocal8Bit().constData();
//        if(str.toLocal8Bit().constData()!="."&&str.toLocal8Bit().constData()!=".."){
            paths.push_back(p);
//        }
//        cout<<str.toLocal8Bit().constData()<<endl;
    }
    cout<<"files size: "<<paths.size()<<endl;
}

OpenCvWorker::~OpenCvWorker(){
    webcam.release();
    mutex.lock();
    stop = true;
    cap.release();
    condition.wakeOne();
    mutex.unlock();
    wait();
}

bool OpenCvWorker::loadVideo(String filename) {
    this->filename = filename;
    cap.open(filename);
    if (cap.isOpened())
    {
        frameRate = (int) cap.get(CV_CAP_PROP_FPS);
        cout<<"frame rate: "<<frameRate<<endl;
        return true;
    }
    else
        return false;
//    frame = imread(filename);
//    if(!frame.empty()){
//        return true;
//    }else{
//        return false;
//    }
}

void OpenCvWorker::Play()
{
    if (!isRunning()) {
        if (isStopped()){
            stop = false;
        }
        start(LowPriority);
    }
}

void OpenCvWorker::run()
{
    int delay = (1000/frameRate);

    while(!stop){
        if(isWebcam){
            webcam >> frame;
            if(frame.empty()){
                cout<<"error: capWebcam not accessed successfully\n\n";
                return;
            }
        }else{
            if (!cap.read(frame))
            {
                cap.open(filename);
                cout<<"stop"<<endl;
                emit sendVideoFinished();
                return;
            }
        }
//         Test trial data
//        frame = imread("D:/TCD Project (meatsensor)/Yinghan/Dataset_3_copy/MT#3 R-1/IMG-05042017-161019.bmp");

//        frame = imread(paths.at(next));

        // Find the roi and calculate oxygen contents
        processFrame();

        if (processedFrame.channels()== 3){
            cv::cvtColor(processedFrame, RGBframe, CV_BGR2RGB);
            img = QImage((const unsigned char*)(RGBframe.data),
                              RGBframe.cols,RGBframe.rows,QImage::Format_RGB888);
        }
        else
        {
            img = QImage((const unsigned char*)(processedFrame.data),
                                 processedFrame.cols,processedFrame.rows,QImage::Format_Indexed8);
        }
        QString O2_qstr = QString::fromUtf8(O2_str.data(), O2_str.size());
        emit sendFrame(img);
        emit sendO2Value(O2_qstr);
        emit sendPrompt(roiImg.empty());
        this->msleep(delay);
    }
}

void OpenCvWorker::Stop(){
    stop = true;
}

void OpenCvWorker::msleep(int ms){
    struct timespec ts = { ms / 1000, (ms % 1000) * 1000 * 1000 };
    nanosleep(&ts, NULL);
}

bool OpenCvWorker::isStopped() const{
    return this->stop;
}

void OpenCvWorker::processFrame(){

    processedFrame = frame.clone();

    int frameWidth = processedFrame.cols;
    int frameHeight = processedFrame.rows;
    int xLeft = frameWidth/2*strip.getLeftLine();
    int xRight = frameWidth/2+((frameWidth/2)*strip.getRightLine());
    // Crop to interested part by user
    Mat croppedFrame = processedFrame(Rect(xLeft, 0, xRight-xLeft, frameHeight));

    roiImg = strip.getROI(croppedFrame, colorspace, DEBUG, p1, p2);
    p1.x += xLeft;
    p2.x += xLeft;    

    if(!roiImg.empty()){
        estimated = strip.avgHue(roiImg, colorspace);
        O2 = strip.computeOxygen(estimated, p, curveType);

        // Draw ROI rectangle on the frame
        rectangle( processedFrame, p1, p2, Scalar( 0, 255, 0 ), 2 );

        // Draw O2 contents text on the frame
        O2_str = strip.formate(O2)+"%";

        // Draw center point of roi
        circle(processedFrame, (p1+p2)/2, 4, Scalar(255,255,255),CV_FILLED, 8,0);
    }

    // Draw lines for the region of interest
    line(processedFrame, Point(xLeft,0), Point(xLeft,frameHeight), Scalar(113, 117, 122), 2, LINE_8, 0);
    line(processedFrame, Point(xRight,0), Point(xRight,frameHeight), Scalar(113, 117, 122), 2, LINE_8, 0);
}

void OpenCvWorker::receiveLeftArea(int num){
    strip.setLeftLine(float(num/100.0f));
}

void OpenCvWorker::receiveRightArea(int num){
    strip.setRightLine(float(num/100.0f));
}

void OpenCvWorker::receiveCurvePara(float para_a, float para_b, float para_c, float para_d, QString curve_type){
    p[0] = para_a;
    p[1] = para_b;
    p[2] = para_c;
    p[3] = para_d;
    curveType = curve_type.toLocal8Bit().constData();
}

void OpenCvWorker::receiveCroppedStripArea(float area){
    strip.stripArea = area;
}

void OpenCvWorker::receiveStripRatio(float r){
    strip.ratio = r;
}

void OpenCvWorker::receiveThresholdValue(int value){
    strip.thresh[0] = value;
}

void OpenCvWorker::receiveThresholdValue_2(int value){
    strip.thresh[1] = value;
}

void OpenCvWorker::receiveThresholdValue_3(int value){
    strip.thresh[2] = value;
}

void OpenCvWorker::receiveThresholdValue_4(int value){
    strip.thresh[3] = value;
}
void OpenCvWorker::receiveThresholdValue_5(int value){
    strip.thresh[4] = value;
}
void OpenCvWorker::receiveThresholdValue_6(int value){
    strip.thresh[5] = value;
}

void OpenCvWorker::receiveNextFlag(){
//    cout<<next<<endl;
    if(next<paths.size()-1){
        next++;
//        cout<<paths.at(next)<<endl;
    }
}

void OpenCvWorker::receiveThreshRequest(){
    QVector<int> thresh;
    for(int i=0; i<sizeof(strip.thresh)/sizeof(strip.thresh[0]); i++){
        thresh.push_back(strip.thresh[i]);
    }
    emit(sendUpdateThresh(thresh));
}

void OpenCvWorker::receivePrintO2(){
    cout<<O2<<endl;
}




























