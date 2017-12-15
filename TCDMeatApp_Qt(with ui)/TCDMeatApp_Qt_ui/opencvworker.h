#ifndef OPENCVWORKER_H
#define OPENCVWORKER_H

#include <QMutex>
#include <QThread>
#include <QImage>
#include <QWaitCondition>
#include <QTextStream>
#include <QFileInfo>
#include <QDir>

//#include <opencv2/core/core.hpp>
//#include <opencv2/highgui/highgui.hpp>
//#include <opencv2/imgproc/imgproc.hpp>
#include <iostream>

#include "strips.h"

using namespace std;
using namespace cv;

class OpenCvWorker : public QThread
{
    Q_OBJECT

private:
    bool stop;
    QMutex mutex;
    QWaitCondition condition;
    Mat processedFrame;
    Mat binFrame;   // binary image after thresholded
    Mat frame;
    int frameRate;
    VideoCapture cap;
    Mat RGBframe, RGBBinframe;
    QImage img;
    QImage binImg;
    string filename;

    // Variables used in Crop Strip function
    Mat cs_cloneImg;

    Strip strip;



    // ------------------------------meat sensor parameters start-------------------------------------
    int colorspace = 0; // 0 for HSV --- 1 for L*a*b
    int method = 0; // 0 for Average --- 1 for Median
    int sensor = 0; // 0 for MT2_L-3 sensor --- 1 for old sensor

    float O2, estimated;
    string O2_str;
    // 1st thresholding method simply adds threshold; 2nd thresholding method adds specific value of boundary and also adds dilate function
    int threshMethod = 1;
    int DEBUG = 1;  // 1 = verbose mode


    Mat roiImg;         // Region of interest mat
    Mat foregroundImg;

    Point2f p1;     // left top point for roi in original frame
    Point2f p2;     // right bottom point for roi in original frame
    Point2f boundingBoxP1, boundingBoxP2;

    Mat panelMat;    // Create panel for text
    // ------------------------------meat sensor parameters end-------------------------------------

    int next = 0; // used to mark the image index
    QFileInfoList list;
    QString directory;
    vector<string> paths;

    QVector<int> thresh;

    float ratioForComputingO2, ratioForROI;
    float stripSize;

public:
    explicit OpenCvWorker(QObject *parent = nullptr);

    ~OpenCvWorker();

    // Initial image when opening the app
    QImage initialImg;

    bool isWebcam = false;  // is webcam open flag
    VideoCapture webcam;

    vector<double> current_para;       // parameters variable
    string curveType = "Exponential";
    QVector<double> exp_para;
    QVector<double> cubic_para;
    QVector<double> poly_para;
    QVector<double> gauss2_para;
    QVector<double> fou2_para;

    bool isThreshPanelVisible = true;

    //Load a video from memory
    bool loadVideo(String filename);

    //Play the video
    void Play();

    //Stop the video
    void Stop();

    //check if the player has been stopped
    bool isStopped() const;

    void init(QVector<int>, float, float, float);

    QVector<int> saveToQVector(vector<int>);

protected:

    // Run the video
    void run();

    void msleep(int ms);

    // Process each frame
    void processFrame();

signals:
    //Signal to output frame to be displayed
    void sendFrame(const QImage &frameProcessed);

    // send binary image after thresholding
    void sendBinFrame(const QImage &binFrame);

    // If video is finished, restart the video
    void sendVideoFinished();

    // Send O2 value to ui to be display
    void sendO2Value(QString content);

    // Send isOxygenCalculated to ui to be display
    void sendPrompt(bool isOxygenCalculated);

    // Update curve parameters and curve type in settings (config) file
    void sendUpdateCurveSettings(QVector<double>, QVector<double>, QVector<double>,QVector<double>,QVector<double>, QString);

    // Update threshold value for hsv channels in settings (config) file
    void sendUpdateThresholdSettings(QVector<int>);

    // Update ratio value in config file
    void sendUpdateRatioSettings(float);

private slots:
    void receiveLeftArea(int num);
    void receiveRightArea(int num);
    void receiveCurvePara(QVector<double>, QString);
    void receiveCroppedStripArea(float);
    void receiveStripRatio(float);
    void receiveThresholdValue(int value);
    void receiveThresholdValue_2(int value);
    void receiveThresholdValue_3(int value);
    void receiveThresholdValue_4(int value);
    void receiveThresholdValue_5(int value);
    void receiveThresholdValue_6(int value);
    void receiveNextFlag();
    void receivePrintO2();
};

#endif // OPENCVWORKER_H
