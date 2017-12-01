#include "mainwindow.h"
#include "ui_mainwindow.h"


MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    worker = new OpenCvWorker();
    setting_dialog = new settingDialog();
    croppingHint_dialog = new DialogCroppingHint();
    cropping_dialog = new CroppingDialog();

    connect(worker, SIGNAL(sendFrame(QImage)), this, SLOT(receiveProcessedFrame(QImage)));
    connect(worker, SIGNAL(sendVideoFinished()), this, SLOT(on_pushButtonPlay_clicked()));
    connect(worker, SIGNAL(sendO2Value(QString)), this, SLOT(receiveO2Value(QString)));
    connect(worker, SIGNAL(sendPrompt(bool)), this, SLOT(receivePrompt(bool)));
    connect(this, SIGNAL(sendLeftAreaValue(int)), worker, SLOT(receiveLeftArea(int)));
    connect(this, SIGNAL(sendRightAreaValue(int)), worker, SLOT(receiveRightArea(int)));
    connect(setting_dialog, SIGNAL(sendCurvePara(float,float,float,float)), worker, SLOT(receiveCurvePara(float,float,float,float)));
    connect(this, SIGNAL(sendUpdateCurvePara(float,float,float,float)), setting_dialog, SLOT(receiveUpdateCurvePara(float,float, float, float)));

    connect(this, SIGNAL(sendCurrentImage(QImage)), cropping_dialog, SLOT(receiveCroppingImage(QImage)));
    connect(cropping_dialog, SIGNAL(sendCroppedStripArea(float)), worker, SLOT(receiveCroppedStripArea(float)));
    connect(cropping_dialog, SIGNAL(sendStripAdjustedFlag()), this, SLOT(receiveStripAdjustedFlag()));
    connect(this, SIGNAL(sendStripRatio(float)), worker, SLOT(receiveStripRatio(float)));
//    setup();

//    Mat img = imread("/Users/yinghanxu/Desktop/IMG_8483.jpg");

    // Set up ui at last when initializing

    ui->setupUi(this);


//    if (!worker->initialImg.isNull())
//    {
////        ui->labelWebcam->setAlignment(Qt::AlignCenter);
//        ui->labelWebcam->setPixmap(QPixmap::fromImage(worker->initialImg).scaled(ui->labelWebcam->size() ,Qt::KeepAspectRatio, Qt::FastTransformation));
//    }

}

void MainWindow::receiveProcessedFrame(QImage img)
{
    currentImage = img;
    if (!img.isNull())
    {
        ui->labelWebcam->setAlignment(Qt::AlignCenter);
        ui->labelWebcam->setPixmap(QPixmap::fromImage(img).scaled(ui->labelWebcam->size()
                                           ,Qt::KeepAspectRatio, Qt::FastTransformation));
    }
}

void MainWindow::receiveO2Value(QString content){
    ui->labelO2Value->setText(content);
}

void MainWindow::receivePrompt(bool isOxygenCalculated){
    if(isOxygenCalculated){
        ui->labelPrompt->setText("No strip detected");
        ui->labelO2->setText("");
        ui->labelO2Value->setText("");
    }else{
        ui->labelO2->setText("O2:");
        ui->labelPrompt->setText("");
    }
}

void MainWindow::receiveStripAdjustedFlag(){
    ui->labelStripAdjusted->setStyleSheet("QLabel { color : black; }");
    ui->labelStripAdjusted->setText("Strip Adjusted");
}

void MainWindow::on_pushButtonLoad_clicked(){
    // Stop the video if the dialog is open
    worker->Stop();
    ui->pushButtonPlay->setText(tr("Play"));

    QString filename = QFileDialog::getOpenFileName(this,
                                              tr("Open Video"), ".",
                                              tr("Video Files (*.avi *.mpg *.mp4 *.mov)"));
    if (!filename.isEmpty()){
        if (!worker->loadVideo(filename.toLatin1().data()))
        {
            QMessageBox msgBox;
            msgBox.setText("The selected video could not be opened!");
            msgBox.exec();
        }
    }
}

void MainWindow::on_pushButtonPlay_clicked()
{
    if (worker->isStopped())
    {
        worker->Play();
        ui->pushButtonPlay->setText(tr("Pause"));
    }else
    {
        worker->Stop();
        ui->pushButtonPlay->setText(tr("Play"));
    }
}

void MainWindow::on_horizontalSliderLeftArea_valueChanged(int num){
//    cout<<num<<endl;
    emit sendLeftAreaValue(num);
}
void MainWindow::on_horizontalSliderRightArea_valueChanged(int num){
//    cout<<num<<endl;
    emit sendRightAreaValue(num);
}

//void MainWindow::receiveVideoFinished(){

//}

MainWindow::~MainWindow()
{
    delete ui;

    delete worker;

    delete setting_dialog;

    delete croppingHint_dialog;

    delete cropping_dialog;
}

void MainWindow::on_pushButtonSetting_clicked()
{
    emit(sendUpdateCurvePara(worker->p[0], worker->p[1], worker->p[2], worker->p[3]));
    setting_dialog->setModal(true);
    setting_dialog->exec();
}

void MainWindow::on_pushButtonOpenCamera_clicked()
{
    worker->isWebcam = !worker->isWebcam;
    if(worker->isWebcam){
        worker->webcam.open(0);
        ui->pushButtonOpenCamera->setText("Close Webcam");
    }else{
        worker->webcam.release();
        ui->pushButtonOpenCamera->setText("Open Webcam");
    }

}

void MainWindow::on_pushButtonCrop_clicked()
{
    if(currentImage.isNull()){
        croppingHint_dialog->setModal(true);
        croppingHint_dialog->exec();
        return;
    }


    emit(sendCurrentImage(currentImage));
    cropping_dialog->show();
}

void MainWindow::on_lineEditRatio_textChanged(const QString &arg1)
{
    float ratio = arg1.toFloat();
    if(ratio<0||ratio>1){
        ratio = 1.0f;
        ui->lineEditRatio->setText("1.0");
    }
    emit(sendStripRatio(ratio));
}
