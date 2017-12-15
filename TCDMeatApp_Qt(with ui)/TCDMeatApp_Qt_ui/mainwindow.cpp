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

    // Load config file
    configFile = QApplication::applicationDirPath() + "/config.ini";


    connect(worker, SIGNAL(sendFrame(QImage)), this, SLOT(receiveProcessedFrame(QImage)));
    connect(worker, SIGNAL(sendBinFrame(QImage)), this, SLOT(receiveBinFrame(QImage)));
    connect(worker, SIGNAL(sendVideoFinished()), this, SLOT(on_pushButtonPlay_clicked()));
    connect(worker, SIGNAL(sendO2Value(QString)), this, SLOT(receiveO2Value(QString)));
    connect(worker, SIGNAL(sendPrompt(bool)), this, SLOT(receivePrompt(bool)));
    connect(this, SIGNAL(sendLeftAreaValue(int)), worker, SLOT(receiveLeftArea(int)));
    connect(this, SIGNAL(sendRightAreaValue(int)), worker, SLOT(receiveRightArea(int)));

    connect(setting_dialog, SIGNAL(sendCurvePara(QVector<double>,QString)), worker, SLOT(receiveCurvePara(QVector<double>,QString)));
    connect(this, SIGNAL(sendUpdateCurvePara(QVector<double>,QVector<double>,QVector<double>,QVector<double>,QVector<double>,QString)), setting_dialog, SLOT(receiveUpdateCurvePara(QVector<double>,QVector<double>,QVector<double>,QVector<double>,QVector<double>,QString)));
    connect(worker, SIGNAL(sendUpdateCurveSettings(QVector<double>,QVector<double>,QVector<double>,QVector<double>,QVector<double>,QString)), SLOT(receiveUpdateCurveSettings(QVector<double>,QVector<double>,QVector<double>,QVector<double>,QVector<double>,QString)));

    connect(this, SIGNAL(sendCurrentImage(QImage)), cropping_dialog, SLOT(receiveCroppingImage(QImage)));
    connect(cropping_dialog, SIGNAL(sendCroppedStripArea(float)), worker, SLOT(receiveCroppedStripArea(float)));
    connect(cropping_dialog, SIGNAL(sendStripAdjustedFlag(float)), this, SLOT(receiveStripAdjustedFlag(float)));
    connect(this, SIGNAL(sendStripRatio(float)), worker, SLOT(receiveStripRatio(float)));
    connect(this, SIGNAL(sendThresholdValue(int)), worker, SLOT(receiveThresholdValue(int)));
    connect(this, SIGNAL(sendThresholdValue_2(int)), worker, SLOT(receiveThresholdValue_2(int)));
    connect(this, SIGNAL(sendThresholdValue_3(int)), worker, SLOT(receiveThresholdValue_3(int)));
    connect(this, SIGNAL(sendThresholdValue_4(int)), worker, SLOT(receiveThresholdValue_4(int)));
    connect(this, SIGNAL(sendThresholdValue_5(int)), worker, SLOT(receiveThresholdValue_5(int)));
    connect(this, SIGNAL(sendThresholdValue_6(int)), worker, SLOT(receiveThresholdValue_6(int)));
    connect(worker, SIGNAL(sendUpdateThresholdSettings(QVector<int>)), this, SLOT(receiveUpdateThresholdSettings(QVector<int>)));
    connect(worker, SIGNAL(sendUpdateRatioSettings(float)), this, SLOT(receiveUpdateRatioSettings(float)));

    connect(this, SIGNAL(sendNextFlag()), worker, SLOT(receiveNextFlag()));
    connect(this, SIGNAL(sendPrintO2()), worker, SLOT(receivePrintO2()));

    // Set up ui after initialized
    ui->setupUi(this);
    // Hide threshold setting panel
    on_pushButtonThresholdSetting_clicked();

    // Load config file settings into application
    loadSettings();
}

void MainWindow::loadSettings()
{
//    QCoreApplication::setOrganizationName("TCD");
//    QCoreApplication::setOrganizationDomain("TCD.com");
//    QCoreApplication::setApplicationName("MeatSensor");

    QSettings settings(configFile, QSettings::IniFormat);

    string curveType = settings.value("curveType", "Exponential2").toString().toLocal8Bit().constData();
    double exp2_a = settings.value("exp2_a", "0.456375").toFloat();
    double exp2_b = settings.value("exp2_b", "-0.011537").toFloat();
    double exp2_c = settings.value("exp2_c", "0.000374").toFloat();
    double exp2_d = settings.value("exp2_d", "0.049049").toFloat();
    double cubic_a = settings.value("cubic_a", "0.004172").toFloat();
    double cubic_b = settings.value("cubic_b", "0.024304").toFloat();
    double cubic_c = settings.value("cubic_c", "-0.089222").toFloat();
    double cubic_d = settings.value("cubic_d", "0.259458").toFloat();
    double poly4_p1 = settings.value("poly4_p1", "0").toFloat();
    double poly4_p2 = settings.value("poly4_p2", "0").toFloat();
    double poly4_p3 = settings.value("poly4_p3", "0").toFloat();
    double poly4_p4 = settings.value("poly4_p4", "0").toFloat();
    double poly4_p5 = settings.value("poly4_p5", "0").toFloat();
    double gauss2_a1 = settings.value("gauss2_a1", "0").toFloat();
    double gauss2_b1 = settings.value("gauss2_b1", "0").toFloat();
    double gauss2_c1 = settings.value("gauss2_c1", "0").toFloat();
    double gauss2_a2 = settings.value("gauss2_a2", "0").toFloat();
    double gauss2_b2 = settings.value("gauss2_b2", "0").toFloat();
    double gauss2_c2 = settings.value("gauss2_c2", "0").toFloat();
    double fou2_a0 = settings.value("fou2_a0", "0").toFloat();
    double fou2_a1 = settings.value("fou2_a1", "0").toFloat();
    double fou2_b1 = settings.value("fou2_b1", "0").toFloat();
    double fou2_a2 = settings.value("fou2_a2", "0").toFloat();
    double fou2_b2 = settings.value("fou2_b2", "0").toFloat();
    double fou2_w = settings.value("fou2_w", "0").toFloat();

    int thresh_LH = settings.value("thresh_LowHue", "23").toInt();
    int thresh_HH = settings.value("thresh_HighHue", "179").toInt();
    int thresh_LS = settings.value("thresh_LowSaturation", "0").toInt();
    int thresh_HS = settings.value("thresh_HighSaturation", "255").toInt();
    int thresh_LV = settings.value("thresh_LowValue", "71").toInt();
    int thresh_HV = settings.value("thresh_HighValue", "255").toInt();

    float ratio_IsComputingO2 = settings.value("ratioForComputingO2", "0.5").toFloat();
    if (ratio_IsComputingO2 < 0) {
        ratio_IsComputingO2 = 0;
    } else if (ratio_IsComputingO2 > 1) {
        ratio_IsComputingO2 = 1;
    }
    float ratio_ROI = settings.value("ratioForROI", "0.08").toFloat();

    float stripSize = settings.value("stripSize", "50000").toFloat();

    worker->curveType = curveType;

    if (curveType == "Exponential2") {
        worker->current_para[0] = exp2_a;
        worker->current_para[1] = exp2_b;
        worker->current_para[2] = exp2_c;
        worker->current_para[3] = exp2_d;
    } else if (curveType == "Cubic") {
        worker->current_para[0] = cubic_a;
        worker->current_para[1] = cubic_b;
        worker->current_para[2] = cubic_c;
        worker->current_para[3] = cubic_d;
    } else if (curveType == "Polynomial4") {
        worker->current_para[0] = poly4_p1;
        worker->current_para[1] = poly4_p2;
        worker->current_para[2] = poly4_p3;
        worker->current_para[3] = poly4_p4;
        worker->current_para[4] = poly4_p5;
    }  else if (curveType == "Gaussian2") {
        worker->current_para[0] = gauss2_a1;
        worker->current_para[1] = gauss2_b1;
        worker->current_para[2] = gauss2_c1;
        worker->current_para[3] = gauss2_a2;
        worker->current_para[4] = gauss2_b2;
        worker->current_para[5] = gauss2_c2;
    }  else if (curveType == "Fourier2") {
        worker->current_para[0] = fou2_a0;
        worker->current_para[1] = fou2_a1;
        worker->current_para[2] = fou2_b1;
        worker->current_para[3] = fou2_a2;
        worker->current_para[4] = fou2_b2;
        worker->current_para[5] = fou2_w;
    }

    worker->exp_para.append(exp2_a);
    worker->exp_para.append(exp2_b);
    worker->exp_para.append(exp2_c);
    worker->exp_para.append(exp2_d);

    worker->cubic_para.append(cubic_a);
    worker->cubic_para.append(cubic_b);
    worker->cubic_para.append(cubic_c);
    worker->cubic_para.append(cubic_d);

    worker->poly_para.append(poly4_p1);
    worker->poly_para.append(poly4_p2);
    worker->poly_para.append(poly4_p3);
    worker->poly_para.append(poly4_p4);
    worker->poly_para.append(poly4_p5);

    worker->gauss2_para.append(gauss2_a1);
    worker->gauss2_para.append(gauss2_b1);
    worker->gauss2_para.append(gauss2_c1);
    worker->gauss2_para.append(gauss2_a2);
    worker->gauss2_para.append(gauss2_b2);
    worker->gauss2_para.append(gauss2_c2);

    worker->fou2_para.append(fou2_a0);
    worker->fou2_para.append(fou2_a1);
    worker->fou2_para.append(fou2_b1);
    worker->fou2_para.append(fou2_a2);
    worker->fou2_para.append(fou2_b2);
    worker->fou2_para.append(fou2_w);

    QVector<int> thresh;
    thresh.append(thresh_LH);
    thresh.append(thresh_LS);
    thresh.append(thresh_LV);
    thresh.append(thresh_HH);
    thresh.append(thresh_HS);
    thresh.append(thresh_HV);
    worker->init(thresh, ratio_IsComputingO2, ratio_ROI, stripSize);
    initThreshUI(thresh);
    ui->lineEditRatio->setText(QString::number(ratio_IsComputingO2));
}

void MainWindow::initThreshUI(QVector<int> thresh) {
    cout<<"initThresh UI"<<endl;
    ui->label_HL->setText(QString::number(thresh[0]));
    ui->horizontalSliderThresh->setValue(thresh[0]);
    ui->label_SL->setText(QString::number(thresh[1]));
    ui->horizontalSliderThresh_2->setValue(thresh[1]);
    ui->label_VL->setText(QString::number(thresh[2]));
    ui->horizontalSliderThresh_3->setValue(thresh[2]);
    ui->label_HH->setText(QString::number(thresh[3]));
    ui->horizontalSliderThresh_4->setValue(thresh[3]);
    ui->label_SH->setText(QString::number(thresh[4]));
    ui->horizontalSliderThresh_5->setValue(thresh[4]);
    ui->label_VH->setText(QString::number(thresh[5]));
    ui->horizontalSliderThresh_6->setValue(thresh[5]);
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

void MainWindow::receiveBinFrame(QImage img)
{
    binImage = img;
    if(!img.isNull()){
        ui->labelBinaryImage->setAlignment(Qt::AlignCenter);
        ui->labelBinaryImage->setPixmap(QPixmap::fromImage(img).scaled(ui->labelBinaryImage->size()
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

void MainWindow::receiveStripAdjustedFlag(float stripSize){
    ui->labelStripAdjusted->setStyleSheet("QLabel { color : black; }");
    ui->labelStripAdjusted->setText("Strip Adjusted");
    // Save strip size to config file
    QSettings settings(configFile, QSettings::IniFormat);
    settings.setValue("stripSize", QString::number(stripSize));
}

void MainWindow::receiveUpdateCurveSettings(QVector<double> exp_para, QVector<double> cubic_para,
                                            QVector<double> poly4_para, QVector<double> gauss2_para,
                                            QVector<double> fou2_para, QString curveType){

    QSettings settings(configFile, QSettings::IniFormat);

    settings.setValue("curveType", curveType);
    settings.setValue("exp2_a", QString::number(exp_para[0]));
    settings.setValue("exp2_b", QString::number(exp_para[1]));
    settings.setValue("exp2_c", QString::number(exp_para[2]));
    settings.setValue("exp2_d", QString::number(exp_para[3]));

    settings.setValue("cubic_a", QString::number(cubic_para[0]));
    settings.setValue("cubic_b", QString::number(cubic_para[1]));
    settings.setValue("cubic_c", QString::number(cubic_para[2]));
    settings.setValue("cubic_d", QString::number(cubic_para[3]));

    settings.setValue("poly4_p1", QString::number(poly4_para[0]));
    settings.setValue("poly4_p2", QString::number(poly4_para[1]));
    settings.setValue("poly4_p3", QString::number(poly4_para[2]));
    settings.setValue("poly4_p4", QString::number(poly4_para[3]));
    settings.setValue("poly4_p5", QString::number(poly4_para[4]));

    settings.setValue("gauss2_a1", QString::number(gauss2_para[0]));
    settings.setValue("gauss2_b1", QString::number(gauss2_para[1]));
    settings.setValue("gauss2_c1", QString::number(gauss2_para[2]));
    settings.setValue("gauss2_a2", QString::number(gauss2_para[3]));
    settings.setValue("gauss2_b2", QString::number(gauss2_para[4]));
    settings.setValue("gauss2_c2", QString::number(gauss2_para[5]));

    settings.setValue("fou2_a0", QString::number(fou2_para[0]));
    settings.setValue("fou2_a1", QString::number(fou2_para[1]));
    settings.setValue("fou2_b1", QString::number(fou2_para[2]));
    settings.setValue("fou2_a2", QString::number(fou2_para[3]));
    settings.setValue("fou2_b2", QString::number(fou2_para[4]));
    settings.setValue("fou2_w", QString::number(fou2_para[5]));
}

void MainWindow::receiveUpdateThresholdSettings(QVector<int> thresh) {

    QSettings settings(configFile, QSettings::IniFormat);

    settings.setValue("thresh_LowHue", QString::number(thresh[0]));
    settings.setValue("thresh_LowSaturation", QString::number(thresh[1]));
    settings.setValue("thresh_LowValue", QString::number(thresh[2]));
    settings.setValue("thresh_HighHue", QString::number(thresh[3]));
    settings.setValue("thresh_HighSaturation", QString::number(thresh[4]));
    settings.setValue("thresh_HighValue", QString::number(thresh[5]));
}

void MainWindow::receiveUpdateRatioSettings(float ratioForComputingO2) {
    QSettings settings(configFile, QSettings::IniFormat);

    settings.setValue("ratioForComputingO2", QString::number(ratioForComputingO2));
}

void MainWindow::on_pushButtonLoad_clicked(){
    // Stop the video if the dialog is open
    worker->Stop();
    ui->pushButtonPlay->setText(tr("Play"));

    QString filename = QFileDialog::getOpenFileName(this,
                                              tr("Open Video"), ".",
                                              tr("Video Files (*.avi *.mpg *.mp4 *.mov)"));
//    QString filename  = QFileDialog::getOpenFileName(this,
//                                                     tr("Open image"), ",",
//                                                     tr("Image Files (*.png *.jpg *.bmp)"));
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
        ui->pushButtonPlay->setText("Pause");
    }else
    {
        worker->Stop();
        ui->pushButtonPlay->setText("Play");
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

    emit(sendUpdateCurvePara(worker->exp_para, worker->cubic_para,
                             worker->poly_para, worker->gauss2_para,
                             worker->fou2_para, QString::fromStdString(worker->curveType)));
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
    // Stop the video if the dialog is open
    worker->Stop();
    ui->pushButtonPlay->setText("Play");

    // If there is no image loaded, Popup
    if(currentImage.isNull()){
//        croppingHint_dialog->setModal(true);
//        croppingHint_dialog->exec();
        QMessageBox msgBox;
        msgBox.setWindowTitle("Notification");
        msgBox.setText("No frame found. Please play the video or open the webcam first.");
        msgBox.exec();
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

void MainWindow::on_horizontalSliderThresh_valueChanged(int value)
{
    ui->label_HL->setText(QString::number(value));
    emit(sendThresholdValue(value));
}

void MainWindow::on_horizontalSliderThresh_2_valueChanged(int value)
{
    ui->label_SL->setText(QString::number(value));
    emit(sendThresholdValue_2(value));
}

void MainWindow::on_horizontalSliderThresh_3_valueChanged(int value)
{
    ui->label_VL->setText(QString::number(value));
    emit(sendThresholdValue_3(value));
}

void MainWindow::on_horizontalSliderThresh_4_valueChanged(int value)
{
    ui->label_HH->setText(QString::number(value));
    emit(sendThresholdValue_4(value));
}

void MainWindow::on_horizontalSliderThresh_5_valueChanged(int value)
{
    ui->label_SH->setText(QString::number(value));
    emit(sendThresholdValue_5(value));
}

void MainWindow::on_horizontalSliderThresh_6_valueChanged(int value)
{
    ui->label_VH->setText(QString::number(value));
    emit(sendThresholdValue_6(value));
}

void MainWindow::on_pushButtonThresholdSetting_clicked()
{
    if (worker->isThreshPanelVisible) {
        int num = ui->gridLayout->count();
        for (int i = 0; i < num; i++) {
            ui->gridLayout->itemAt(i)->widget()->hide();
        }
        for (int i = 0; i < ui->horizontalLayout_2->count(); i++) {
            ui->horizontalLayout_2->itemAt(i)->widget()->show();
        }
        ui->labelBinaryImage->hide();
        ui->pushButtonThresholdSetting->setText("Show threshold panel");
        worker->isThreshPanelVisible = false;
    } else {
        int num = ui->gridLayout->count();
        for (int i = 0; i < num; i++) {
            ui->gridLayout->itemAt(i)->widget()->show();
        }
        for (int i = 0; i < ui->horizontalLayout_2->count(); i++) {
            ui->horizontalLayout_2->itemAt(i)->widget()->hide();
        }
        ui->labelBinaryImage->show();
        ui->pushButtonThresholdSetting->setText("Hide threshold panel");
        worker->isThreshPanelVisible = true;
    }
}

