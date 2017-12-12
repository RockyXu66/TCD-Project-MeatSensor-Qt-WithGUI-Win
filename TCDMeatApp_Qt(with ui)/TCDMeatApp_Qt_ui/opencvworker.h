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
    Mat frame;
    int frameRate;
    VideoCapture cap;
    Mat RGBframe;
    QImage img;
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

    Mat panelMat;    // Create panel for text
    // ------------------------------meat sensor parameters end-------------------------------------

    int next = 0; // used to mark the image index
    QFileInfoList list;
    QString directory;
    vector<string> paths;

    QVector<int> thresh;

public:
    explicit OpenCvWorker(QObject *parent = nullptr);

    ~OpenCvWorker();

    // Initial image when opening the app
    QImage initialImg;

    bool isWebcam = false;  // is webcam open flag
    VideoCapture webcam;

    vector<float> current_para;       // parameters variable
    string curveType = "Exponential";
    QVector<float> exp_para;
    QVector<float> cubic_para;

    //Load a video from memory
    bool loadVideo(String filename);

    //Play the video
    void Play();

    //Stop the video
    void Stop();

    //check if the player has been stopped
    bool isStopped() const;

    void initThreshold(QVector<int>);

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

    // If video is finished, restart the video
    void sendVideoFinished();

    // Send O2 value to ui to be display
    void sendO2Value(QString content);

    // Send isOxygenCalculated to ui to be display
    void sendPrompt(bool isOxygenCalculated);

    // Update curve parameters and curve type in settings (config) file
    void sendUpdateCurveSettings(QVector<float>, QVector<float>, QString);

    // Update threshold value for hsv channels in settings (config) file
    void sendUpdateThresholdSettings(QVector<int>);

private slots:
    void receiveLeftArea(int num);
    void receiveRightArea(int num);
    void receiveCurvePara(QVector<float>, QString);
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
