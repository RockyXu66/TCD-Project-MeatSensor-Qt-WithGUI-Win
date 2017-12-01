#include "opencvworker.h"

OpenCvWorker::OpenCvWorker(QObject *parent) : QThread(parent)
{    
    stop = true;
//    filename = "/Volumes/YINGHANUSB/TCD Project (meatsensor)/Yinghan/Video/convey_dataset3(MT2_L-3)_withScratch.mov";
//    filename = "D:/TCD Project (meatsensor)/Yinghan/Video/convey_dataset3(MT2_L-3)_withScratch.mov";
    filename = "D:/TCD Project (meatsensor)/Yinghan/Video/convey_dataset3(MT2_L-3)_withScratch_vibrate.mov";
//    filename = "D:/TCD Project (meatsensor)/TCD_MacMini/RECentral/1st/2017082111155957.mp4";

    webcam.open(0);
    cap.open(filename);
    if (cap.isOpened())
    {
        frameRate = (int) cap.get(CV_CAP_PROP_FPS);
        cout<<"frame rate: "<<frameRate<<endl;
    }

//    // Setup the initial image when opening the app
//    if(cap.read(frame)){
//        if (frame.channels()== 3){
//            cvtColor(frame, RGBframe, CV_BGR2RGB);
//            initialImg = QImage((const unsigned char*)(RGBframe.data),
//                              RGBframe.cols,RGBframe.rows,QImage::Format_RGB888);
//        }
//        else
//        {
//            initialImg = QImage((const unsigned char*)(frame.data),
//                                 frame.cols,frame.rows,QImage::Format_Indexed8);
//        }
//    }

    p = getParameters(colorspace, method, sensor); // recover curve a,b,c,d settings
    panelMat =  Mat(300, 250, CV_8UC3, Scalar(113, 117, 122));
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
    //            stop = true;
                cap.open(filename);
                cout<<"stop"<<endl;
                emit sendVideoFinished();
                return;
            }
        }

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

void OpenCvWorker::Stop()
{
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

    // Yinghan's solution to get bouding box
    // By using background subtraction and threshold & finding largest contours
    processedFrame = frame.clone();

    int frameWidth = processedFrame.cols;
    int frameHeight = processedFrame.rows;
    int xLeft = frameWidth/2*para.getLeftLine();
    int xRight = frameWidth/2+((frameWidth/2)*para.getRightLine());
    // Crop to interested part by user
    Mat croppedFrame = processedFrame(Rect(xLeft, 0, xRight-xLeft, frameHeight));

//    foregroundImg = BgSubtraction(processedFrame);
//    foregroundImg = BgSubtraction(croppedFrame);
//    roiImg = para.GetBoundingBoxByBgSub2(foregroundImg, colorspace, DEBUG, p1, p2);
    roiImg = para.GetBoundingBoxByBgSub2(croppedFrame, colorspace, DEBUG, p1, p2);
    p1.x += xLeft;
    p2.x += xLeft;

    // Draw panel on the frame
//    panelMat.copyTo(processedFrame(Rect(0, 0, panelMat.cols, panelMat.rows)));

    if(!roiImg.empty()){
        estimated = avgHue(roiImg, colorspace);
        O2 = computeOxygen(estimated, p);

//      cout << " Hue " << estimated << endl;
//      cout << "O2 : " << O2 << "%" << endl;

        // Draw ROI rectangle on the frame
        rectangle( processedFrame, p1, p2, Scalar( 0, 255, 0 ), 2 );

        // Draw O2 contents text on the frame
        O2_str = Formate(O2)+"%";
//        putText(processedFrame, "O2: "+O2_str, cvPoint(10,80), CV_FONT_HERSHEY_SIMPLEX, 1, cvScalar(255,255,255), 1, CV_AA);

        // Draw region of interest on the frame
//        putText(processedFrame, "Region of interest", cvPoint(10, 130), CV_FONT_HERSHEY_SIMPLEX, 0.8, cvScalar(255,255,255), 1, CV_AA);
//        roiImg.copyTo(processedFrame(Rect(70, 160,roiImg.cols, roiImg.rows)));

        // Draw center point of roi
        circle(processedFrame, (p1+p2)/2, 4, Scalar(255,255,255),CV_FILLED, 8,0);
    }else{
//        putText(processedFrame, "No strip detected", cvPoint(10,80), CV_FONT_HERSHEY_SIMPLEX, 0.8, cvScalar(255,255,255), 1, CV_AA);
    }

    // Draw lines for the region of interest
    line(processedFrame, Point(xLeft,0), Point(xLeft,frameHeight), Scalar(113, 117, 122), 2, LINE_8, 0);
    line(processedFrame, Point(xRight,0), Point(xRight,frameHeight), Scalar(113, 117, 122), 2, LINE_8, 0);
}

void OpenCvWorker::receiveLeftArea(int num){

//    cout<<"Here is in OpenCvWorker: "<<num<<endl;
    para.setLeftLine(float(num/100.0f));

}

void OpenCvWorker::receiveRightArea(int num){

//    cout<<"Here is in OpenCvWorker: "<<num<<endl;
    para.setRightLine(float(num/100.0f));

}

void OpenCvWorker::receiveCurvePara(float para_a, float para_b, float para_c, float para_d){
    p[0] = para_a;
    p[1] = para_b;
    p[2] = para_c;
    p[3] = para_d;
//    cout<<"a: "<<para<<endl;
}

void OpenCvWorker::receiveCroppedStripArea(float area){
    para.stripArea = area;
}

void OpenCvWorker::receiveStripRatio(float r){
    para.ratio = r;
}






























