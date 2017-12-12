#ifndef STRIPS_H
#define STRIPS_H

#define _USE_MATH_DEFINES
#include <cmath>
#include <ctime>

#include <opencv2/core/core.hpp>
#include <opencv2/imgcodecs/imgcodecs.hpp>
#include <opencv2/highgui/highgui.hpp>
#include <opencv2/imgproc/imgproc.hpp>
#include <opencv2/core/mat.hpp>
#include <opencv/cv.h>
#include <opencv2/opencv.hpp>

#include <opencv2/tracking.hpp>
#include <opencv2/videoio.hpp>
#include <opencv2/core/utility.hpp>
#include <opencv2/video/tracking.hpp>
#include <opencv2/video/background_segm.hpp>
#include <opencv2/imgcodecs.hpp>

#include <iostream>
#include <string>

using namespace cv;
using namespace std;

#include <vector>
#include <math.h>
#include <time.h>


Mat visuColorspace(Mat img, int Colorspace, int ThresholdMethod, int DEBUG);
void gradientProcess(Mat img, int Colorspace, int DEBUG);
Mat getBoundingBox(Mat img, int ThresholdMethod, int Colorspace, int DEBUG);
//float avgHue(Mat img, int curveColorSpace);
float findMedian(Mat img, int curveColorSpace);
//float computeOxygen(float estimated, float parameters[]);
//float* getParameters(int colorspace, int method, int sensor);

Mat BgSubtraction(Mat img);
Mat GetBoundingBoxByBgSub(Mat img, int Colorspace, int DEBUG, Point2f & p1, Point2f & p2, Mat & roiMat);
Mat GetBoundingBoxByBgSub2(Mat img, int Colorspace, int DEBUG, Point2f & p1, Point2f & p2);

class Strip{
public:

    int areaSpace = 0; // When the ROI is larger than this areaSpace, we will calculate the oxygen value

    float stripArea = 5000; // Cropped strip area
    float ratio = 0.8f;     // Ratio that used to determine if we need to compute the O2.

    // There are six threshold value in this vector.
    // The sequence is lowHue, lowSaturation, lowValue, highHue, highSaturation, highValue
//    int thresh[6] = {125, 120, 100, 160, 255, 255};
    vector<int> thresh;

    Strip(){
        thresh.push_back(125);
        thresh.push_back(120);
        thresh.push_back(100);
        thresh.push_back(160);
        thresh.push_back(255);
        thresh.push_back(255);
        leftLine = 0.8f;
        rightLine = 0.3f;
    }
    void setLeftLine(float num){
        leftLine = num;
    }
    void setRightLine(float num){
        rightLine = num;
    }
    float getLeftLine(){
        return leftLine;
    }
    float getRightLine(){
        return rightLine;
    }

    Mat getROI(Mat img, int Colorspace, int DEBUG, Point2f & p1, Point2f & p2);

    float avgHue(Mat img, int curveColorSpace);

    float* getParameters(int colorspace, int method, int sensor);

    float computeOxygen(float estimated, vector<float> parameters, string curveType);

    string formate(float O2);
private:
    float leftLine;
    float rightLine;
    int scalar = 35;
};

#endif // STRIPS_H
