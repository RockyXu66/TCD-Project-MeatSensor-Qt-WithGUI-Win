#-------------------------------------------------
#
# Project created by QtCreator 2017-11-08T11:45:41
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = TCDMeatApp_Qt_ui
TEMPLATE = app

# The following define makes your compiler emit warnings if you use
# any feature of Qt which has been marked as deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if you use deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0


SOURCES += \
        main.cpp \
        mainwindow.cpp \
    opencvworker.cpp \
    strips.cpp \
    settingdialog.cpp \
    imagecropper.cpp \
    dialogcroppinghint.cpp \
    croppingdialog.cpp

HEADERS += \
        mainwindow.h \
    opencvworker.h \
    strips.h \
    settingdialog.h \
    imagecropper.h \
    imagecropper_e.h \
    imagecropper_p.h \
    dialogcroppinghint.h \
    croppingdialog.h

FORMS += \
        mainwindow.ui \
    settingdialog.ui \
    dialogcroppinghint.ui

#INCLUDEPATH += /usr/local/include

#LIBS += -L/usr/local/lib -lopencv_stitching -lopencv_superres -lopencv_videostab -lopencv_photo -lopencv_aruco -lopencv_bgsegm -lopencv_bioinspired -lopencv_ccalib -lopencv_dpm -lopencv_face -lopencv_fuzzy -lopencv_hdf -lopencv_line_descriptor -lopencv_optflow -lopencv_reg -lopencv_rgbd -lopencv_saliency -lopencv_stereo -lopencv_structured_light -lopencv_phase_unwrapping -lopencv_surface_matching -lopencv_tracking -lopencv_datasets -lopencv_text -lopencv_dnn -lopencv_plot -lopencv_ml -lopencv_xfeatures2d -lopencv_shape -lopencv_video -lopencv_ximgproc -lopencv_calib3d -lopencv_features2d -lopencv_highgui -lopencv_videoio -lopencv_flann -lopencv_xobjdetect -lopencv_imgcodecs -lopencv_objdetect -lopencv_xphoto -lopencv_imgproc -lopencv_core

#INCLUDEPATH +=$$(OPENCV320_DIR)\..\..\include \

#LIBS += -L$$(OPENCV320_DIR)\lib \
#    -lopencv_core320 \
#    -lopencv_highgui320 \
#    -lopencv_imgproc320 \
#    -lopencv_imgcodecs320 \
#    -lopencv_videoio320 \
#    -lopencv_features2d320 \
#    -lopencv_calib3d320

INCLUDEPATH += C:\opencv\build\include
INCLUDEPATH += C:\Qt_OpenCV\opencv-build\install\include


LIBS += C:\opencv-build\bin\libopencv_core320.dll
LIBS += C:\opencv-build\bin\libopencv_highgui320.dll
LIBS += C:\opencv-build\bin\libopencv_imgcodecs320.dll
LIBS += C:\opencv-build\bin\libopencv_imgproc320.dll
LIBS += C:\opencv-build\bin\libopencv_features2d320.dll
LIBS += C:\opencv-build\bin\libopencv_calib3d320.dll

LIBS += C:\opencv-build\bin\libopencv_video320.dll
LIBS += C:\opencv-build\bin\libopencv_videoio320.dll

#LIBS += C:\Qt_OpenCV\opencv-build\install\x64\vc15\bin\opencv_video331.dll
#LIBS += C:\Qt_OpenCV\opencv-build\install\x64\vc15\bin\opencv_videoio331.dll
#LIBS += C:\Qt_OpenCV\opencv-build\install\x64\vc15\bin\opencv_videostab331.dll
#LIBS += C:\Qt_OpenCV\opencv-build\install\x64\vc15\bin\opencv_tracking331.dll













