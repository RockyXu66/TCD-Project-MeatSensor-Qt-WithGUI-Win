#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QThread>
#include "opencvworker.h"
#include <QMainWindow>
#include <QFileDialog>
#include <QMessageBox>

#include <opencv2/highgui/highgui.hpp>
#include <opencv2/core/core.hpp>
#include <qpixmap>
#include <QTimer>

#include "settingdialog.h"
#include "dialogcroppinghint.h"
#include "croppingdialog.h"

#include "imagecropper.h"
#include <QLabel>
#include <QCheckBox>
#include <QPushButton>
#include <QVBoxLayout>

using namespace cv;

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

private:
    Ui::MainWindow *ui;

    OpenCvWorker *worker;

    settingDialog *setting_dialog;

    DialogCroppingHint *croppingHint_dialog;

    CroppingDialog *cropping_dialog;

    // Variables used for crop strip
    ImageCropper* m_imageCropper;
    QLabel* m_croppedImage;
    QPushButton* cropBtn;
    QPushButton* cropCancelBtn;
    QImage currentImage;
    QPixmap croppedStrip;



public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

signals:
    void sendSetup(int device);
    void sendToggleStream();
    void sendLeftAreaValue(int num);
    void sendRightAreaValue(int num);
    void sendUpdateCurvePara(float, float, float, float);
    void sendCurrentImage(QImage);
    void sendStripRatio(float);

private slots:
    //Display video frame in player UI
    void receiveProcessedFrame(QImage img);

    // Display O2 value in UI
    void receiveO2Value(QString content);

    // Display prompt if oxygen is not calculated
    void receivePrompt(bool isOxygenCalculated);

    // Display "Strip Adjusted" label if cropped
    void receiveStripAdjustedFlag();

    // If video is finished, reset play button
//    void receiveVideoFinished();

    //Slot for the load video push button.
    void on_pushButtonLoad_clicked();

    // Slot for the play push button.
    void on_pushButtonPlay_clicked();

    void on_horizontalSliderLeftArea_valueChanged(int num);

    void on_horizontalSliderRightArea_valueChanged(int num);

    void on_pushButtonSetting_clicked();
    void on_pushButtonOpenCamera_clicked();
    void on_pushButtonCrop_clicked();
    void on_lineEditRatio_textChanged(const QString &arg1);
};

#endif // MAINWINDOW_H
