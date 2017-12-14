/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.9.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QGridLayout *gridLayout_2;
    QLabel *labelBinaryImage;
    QVBoxLayout *verticalLayout;
    QLabel *labelWebcam;
    QHBoxLayout *horizontalLayout_2;
    QSlider *horizontalSliderLeftArea;
    QSlider *horizontalSliderRightArea;
    QVBoxLayout *verticalLayout_2;
    QLabel *labelPrompt;
    QHBoxLayout *horizontalLayout;
    QLabel *labelO2;
    QLabel *labelO2Value;
    QHBoxLayout *horizontalLayout_4;
    QLabel *labelRatio;
    QLineEdit *lineEditRatio;
    QLabel *labelStripAdjusted;
    QVBoxLayout *verticalLayout_3;
    QPushButton *pushButtonSetting;
    QPushButton *pushButtonThresholdSetting;
    QPushButton *pushButtonCrop;
    QPushButton *pushButtonOpenCamera;
    QPushButton *pushButtonLoad;
    QPushButton *pushButtonPlay;
    QPushButton *pushButtonExit;
    QGridLayout *gridLayout;
    QLabel *label_HL;
    QSlider *horizontalSliderThresh;
    QLabel *label_4;
    QLabel *label;
    QLabel *label_5;
    QLabel *label_2;
    QLabel *label_SL;
    QSlider *horizontalSliderThresh_2;
    QLabel *label_HH;
    QSlider *horizontalSliderThresh_4;
    QLabel *label_VL;
    QLabel *label_3;
    QSlider *horizontalSliderThresh_5;
    QLabel *label_SH;
    QSlider *horizontalSliderThresh_3;
    QLabel *label_VH;
    QSlider *horizontalSliderThresh_6;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(1118, 680);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(MainWindow->sizePolicy().hasHeightForWidth());
        MainWindow->setSizePolicy(sizePolicy);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        gridLayout_2 = new QGridLayout(centralWidget);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        labelBinaryImage = new QLabel(centralWidget);
        labelBinaryImage->setObjectName(QStringLiteral("labelBinaryImage"));
        QSizePolicy sizePolicy1(QSizePolicy::Minimum, QSizePolicy::Ignored);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(1);
        sizePolicy1.setHeightForWidth(labelBinaryImage->sizePolicy().hasHeightForWidth());
        labelBinaryImage->setSizePolicy(sizePolicy1);
        labelBinaryImage->setMinimumSize(QSize(300, 500));
        labelBinaryImage->setAutoFillBackground(false);
        labelBinaryImage->setStyleSheet(QLatin1String("border: 1px solid;\n"
"Background-color: #000;"));
        labelBinaryImage->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(labelBinaryImage, 0, 0, 4, 1);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        labelWebcam = new QLabel(centralWidget);
        labelWebcam->setObjectName(QStringLiteral("labelWebcam"));
        sizePolicy1.setHeightForWidth(labelWebcam->sizePolicy().hasHeightForWidth());
        labelWebcam->setSizePolicy(sizePolicy1);
        labelWebcam->setMinimumSize(QSize(900, 500));
        labelWebcam->setAutoFillBackground(false);
        labelWebcam->setStyleSheet(QLatin1String("border: 1px solid;\n"
"Background-color: #000;"));
        labelWebcam->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(labelWebcam);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalSliderLeftArea = new QSlider(centralWidget);
        horizontalSliderLeftArea->setObjectName(QStringLiteral("horizontalSliderLeftArea"));
        QSizePolicy sizePolicy2(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(horizontalSliderLeftArea->sizePolicy().hasHeightForWidth());
        horizontalSliderLeftArea->setSizePolicy(sizePolicy2);
        horizontalSliderLeftArea->setValue(80);
        horizontalSliderLeftArea->setOrientation(Qt::Horizontal);

        horizontalLayout_2->addWidget(horizontalSliderLeftArea);

        horizontalSliderRightArea = new QSlider(centralWidget);
        horizontalSliderRightArea->setObjectName(QStringLiteral("horizontalSliderRightArea"));
        sizePolicy2.setHeightForWidth(horizontalSliderRightArea->sizePolicy().hasHeightForWidth());
        horizontalSliderRightArea->setSizePolicy(sizePolicy2);
        horizontalSliderRightArea->setValue(30);
        horizontalSliderRightArea->setOrientation(Qt::Horizontal);

        horizontalLayout_2->addWidget(horizontalSliderRightArea);


        verticalLayout->addLayout(horizontalLayout_2);


        gridLayout_2->addLayout(verticalLayout, 0, 1, 4, 1);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        labelPrompt = new QLabel(centralWidget);
        labelPrompt->setObjectName(QStringLiteral("labelPrompt"));
        QFont font;
        font.setPointSize(15);
        labelPrompt->setFont(font);
        labelPrompt->setAlignment(Qt::AlignCenter);

        verticalLayout_2->addWidget(labelPrompt);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        labelO2 = new QLabel(centralWidget);
        labelO2->setObjectName(QStringLiteral("labelO2"));
        QFont font1;
        font1.setPointSize(20);
        labelO2->setFont(font1);
        labelO2->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout->addWidget(labelO2);

        labelO2Value = new QLabel(centralWidget);
        labelO2Value->setObjectName(QStringLiteral("labelO2Value"));
        labelO2Value->setFont(font1);
        labelO2Value->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        horizontalLayout->addWidget(labelO2Value);


        verticalLayout_2->addLayout(horizontalLayout);


        gridLayout_2->addLayout(verticalLayout_2, 0, 2, 1, 1);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(0);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(0, -1, 0, -1);
        labelRatio = new QLabel(centralWidget);
        labelRatio->setObjectName(QStringLiteral("labelRatio"));
        QFont font2;
        font2.setPointSize(12);
        labelRatio->setFont(font2);
        labelRatio->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_4->addWidget(labelRatio);

        lineEditRatio = new QLineEdit(centralWidget);
        lineEditRatio->setObjectName(QStringLiteral("lineEditRatio"));
        QSizePolicy sizePolicy3(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(lineEditRatio->sizePolicy().hasHeightForWidth());
        lineEditRatio->setSizePolicy(sizePolicy3);
        lineEditRatio->setMinimumSize(QSize(10, 3));
        lineEditRatio->setFont(font2);
        lineEditRatio->setAlignment(Qt::AlignCenter);

        horizontalLayout_4->addWidget(lineEditRatio);


        gridLayout_2->addLayout(horizontalLayout_4, 1, 2, 1, 1);

        labelStripAdjusted = new QLabel(centralWidget);
        labelStripAdjusted->setObjectName(QStringLiteral("labelStripAdjusted"));
        sizePolicy3.setHeightForWidth(labelStripAdjusted->sizePolicy().hasHeightForWidth());
        labelStripAdjusted->setSizePolicy(sizePolicy3);
        labelStripAdjusted->setFont(font2);
        labelStripAdjusted->setStyleSheet(QStringLiteral("color: red"));
        labelStripAdjusted->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(labelStripAdjusted, 2, 2, 1, 1);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(40, -1, 40, -1);
        pushButtonSetting = new QPushButton(centralWidget);
        pushButtonSetting->setObjectName(QStringLiteral("pushButtonSetting"));
        sizePolicy3.setHeightForWidth(pushButtonSetting->sizePolicy().hasHeightForWidth());
        pushButtonSetting->setSizePolicy(sizePolicy3);
        QFont font3;
        font3.setPointSize(10);
        pushButtonSetting->setFont(font3);
        pushButtonSetting->setLayoutDirection(Qt::LeftToRight);

        verticalLayout_3->addWidget(pushButtonSetting);

        pushButtonThresholdSetting = new QPushButton(centralWidget);
        pushButtonThresholdSetting->setObjectName(QStringLiteral("pushButtonThresholdSetting"));
        sizePolicy3.setHeightForWidth(pushButtonThresholdSetting->sizePolicy().hasHeightForWidth());
        pushButtonThresholdSetting->setSizePolicy(sizePolicy3);
        pushButtonThresholdSetting->setFont(font3);

        verticalLayout_3->addWidget(pushButtonThresholdSetting);

        pushButtonCrop = new QPushButton(centralWidget);
        pushButtonCrop->setObjectName(QStringLiteral("pushButtonCrop"));
        sizePolicy3.setHeightForWidth(pushButtonCrop->sizePolicy().hasHeightForWidth());
        pushButtonCrop->setSizePolicy(sizePolicy3);
        pushButtonCrop->setFont(font3);

        verticalLayout_3->addWidget(pushButtonCrop);

        pushButtonOpenCamera = new QPushButton(centralWidget);
        pushButtonOpenCamera->setObjectName(QStringLiteral("pushButtonOpenCamera"));
        sizePolicy3.setHeightForWidth(pushButtonOpenCamera->sizePolicy().hasHeightForWidth());
        pushButtonOpenCamera->setSizePolicy(sizePolicy3);
        pushButtonOpenCamera->setFont(font3);

        verticalLayout_3->addWidget(pushButtonOpenCamera);

        pushButtonLoad = new QPushButton(centralWidget);
        pushButtonLoad->setObjectName(QStringLiteral("pushButtonLoad"));
        sizePolicy3.setHeightForWidth(pushButtonLoad->sizePolicy().hasHeightForWidth());
        pushButtonLoad->setSizePolicy(sizePolicy3);
        pushButtonLoad->setFont(font3);

        verticalLayout_3->addWidget(pushButtonLoad);

        pushButtonPlay = new QPushButton(centralWidget);
        pushButtonPlay->setObjectName(QStringLiteral("pushButtonPlay"));
        sizePolicy3.setHeightForWidth(pushButtonPlay->sizePolicy().hasHeightForWidth());
        pushButtonPlay->setSizePolicy(sizePolicy3);
        pushButtonPlay->setFont(font3);

        verticalLayout_3->addWidget(pushButtonPlay);

        pushButtonExit = new QPushButton(centralWidget);
        pushButtonExit->setObjectName(QStringLiteral("pushButtonExit"));
        sizePolicy3.setHeightForWidth(pushButtonExit->sizePolicy().hasHeightForWidth());
        pushButtonExit->setSizePolicy(sizePolicy3);
        pushButtonExit->setFont(font3);

        verticalLayout_3->addWidget(pushButtonExit);


        gridLayout_2->addLayout(verticalLayout_3, 3, 2, 1, 1);

        gridLayout = new QGridLayout();
        gridLayout->setSpacing(6);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        label_HL = new QLabel(centralWidget);
        label_HL->setObjectName(QStringLiteral("label_HL"));
        QSizePolicy sizePolicy4(QSizePolicy::Fixed, QSizePolicy::Preferred);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(label_HL->sizePolicy().hasHeightForWidth());
        label_HL->setSizePolicy(sizePolicy4);
        label_HL->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_HL, 1, 1, 1, 1);

        horizontalSliderThresh = new QSlider(centralWidget);
        horizontalSliderThresh->setObjectName(QStringLiteral("horizontalSliderThresh"));
        QSizePolicy sizePolicy5(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy5.setHorizontalStretch(0);
        sizePolicy5.setVerticalStretch(0);
        sizePolicy5.setHeightForWidth(horizontalSliderThresh->sizePolicy().hasHeightForWidth());
        horizontalSliderThresh->setSizePolicy(sizePolicy5);
        horizontalSliderThresh->setMaximum(179);
        horizontalSliderThresh->setOrientation(Qt::Horizontal);

        gridLayout->addWidget(horizontalSliderThresh, 1, 2, 1, 1);

        label_4 = new QLabel(centralWidget);
        label_4->setObjectName(QStringLiteral("label_4"));
        sizePolicy2.setHeightForWidth(label_4->sizePolicy().hasHeightForWidth());
        label_4->setSizePolicy(sizePolicy2);
        label_4->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_4, 0, 1, 1, 2);

        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));
        QSizePolicy sizePolicy6(QSizePolicy::Minimum, QSizePolicy::Preferred);
        sizePolicy6.setHorizontalStretch(0);
        sizePolicy6.setVerticalStretch(0);
        sizePolicy6.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy6);
        label->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label, 1, 0, 1, 1);

        label_5 = new QLabel(centralWidget);
        label_5->setObjectName(QStringLiteral("label_5"));
        sizePolicy2.setHeightForWidth(label_5->sizePolicy().hasHeightForWidth());
        label_5->setSizePolicy(sizePolicy2);
        label_5->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_5, 0, 3, 1, 2);

        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        sizePolicy6.setHeightForWidth(label_2->sizePolicy().hasHeightForWidth());
        label_2->setSizePolicy(sizePolicy6);
        label_2->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_2, 2, 0, 1, 1);

        label_SL = new QLabel(centralWidget);
        label_SL->setObjectName(QStringLiteral("label_SL"));
        label_SL->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_SL, 2, 1, 1, 1);

        horizontalSliderThresh_2 = new QSlider(centralWidget);
        horizontalSliderThresh_2->setObjectName(QStringLiteral("horizontalSliderThresh_2"));
        sizePolicy5.setHeightForWidth(horizontalSliderThresh_2->sizePolicy().hasHeightForWidth());
        horizontalSliderThresh_2->setSizePolicy(sizePolicy5);
        horizontalSliderThresh_2->setMaximum(255);
        horizontalSliderThresh_2->setOrientation(Qt::Horizontal);

        gridLayout->addWidget(horizontalSliderThresh_2, 2, 2, 1, 1);

        label_HH = new QLabel(centralWidget);
        label_HH->setObjectName(QStringLiteral("label_HH"));
        label_HH->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_HH, 1, 3, 1, 1);

        horizontalSliderThresh_4 = new QSlider(centralWidget);
        horizontalSliderThresh_4->setObjectName(QStringLiteral("horizontalSliderThresh_4"));
        sizePolicy5.setHeightForWidth(horizontalSliderThresh_4->sizePolicy().hasHeightForWidth());
        horizontalSliderThresh_4->setSizePolicy(sizePolicy5);
        horizontalSliderThresh_4->setMaximum(179);
        horizontalSliderThresh_4->setOrientation(Qt::Horizontal);

        gridLayout->addWidget(horizontalSliderThresh_4, 1, 4, 1, 1);

        label_VL = new QLabel(centralWidget);
        label_VL->setObjectName(QStringLiteral("label_VL"));
        label_VL->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_VL, 3, 1, 1, 1);

        label_3 = new QLabel(centralWidget);
        label_3->setObjectName(QStringLiteral("label_3"));
        sizePolicy6.setHeightForWidth(label_3->sizePolicy().hasHeightForWidth());
        label_3->setSizePolicy(sizePolicy6);
        label_3->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_3, 3, 0, 1, 1);

        horizontalSliderThresh_5 = new QSlider(centralWidget);
        horizontalSliderThresh_5->setObjectName(QStringLiteral("horizontalSliderThresh_5"));
        sizePolicy5.setHeightForWidth(horizontalSliderThresh_5->sizePolicy().hasHeightForWidth());
        horizontalSliderThresh_5->setSizePolicy(sizePolicy5);
        horizontalSliderThresh_5->setMaximum(255);
        horizontalSliderThresh_5->setOrientation(Qt::Horizontal);

        gridLayout->addWidget(horizontalSliderThresh_5, 2, 4, 1, 1);

        label_SH = new QLabel(centralWidget);
        label_SH->setObjectName(QStringLiteral("label_SH"));
        label_SH->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_SH, 2, 3, 1, 1);

        horizontalSliderThresh_3 = new QSlider(centralWidget);
        horizontalSliderThresh_3->setObjectName(QStringLiteral("horizontalSliderThresh_3"));
        sizePolicy5.setHeightForWidth(horizontalSliderThresh_3->sizePolicy().hasHeightForWidth());
        horizontalSliderThresh_3->setSizePolicy(sizePolicy5);
        horizontalSliderThresh_3->setMaximum(255);
        horizontalSliderThresh_3->setOrientation(Qt::Horizontal);

        gridLayout->addWidget(horizontalSliderThresh_3, 3, 2, 1, 1);

        label_VH = new QLabel(centralWidget);
        label_VH->setObjectName(QStringLiteral("label_VH"));
        label_VH->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_VH, 3, 3, 1, 1);

        horizontalSliderThresh_6 = new QSlider(centralWidget);
        horizontalSliderThresh_6->setObjectName(QStringLiteral("horizontalSliderThresh_6"));
        sizePolicy5.setHeightForWidth(horizontalSliderThresh_6->sizePolicy().hasHeightForWidth());
        horizontalSliderThresh_6->setSizePolicy(sizePolicy5);
        horizontalSliderThresh_6->setMaximum(255);
        horizontalSliderThresh_6->setOrientation(Qt::Horizontal);

        gridLayout->addWidget(horizontalSliderThresh_6, 3, 4, 1, 1);


        gridLayout_2->addLayout(gridLayout, 4, 0, 1, 2);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 1118, 20));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);
        QObject::connect(pushButtonExit, SIGNAL(clicked()), MainWindow, SLOT(close()));

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MeatSensor", Q_NULLPTR));
        labelBinaryImage->setText(QString());
        labelWebcam->setText(QString());
        labelPrompt->setText(QString());
        labelO2->setText(QApplication::translate("MainWindow", "O2: ", Q_NULLPTR));
        labelO2Value->setText(QString());
        labelRatio->setText(QApplication::translate("MainWindow", "Ratio:", Q_NULLPTR));
        lineEditRatio->setText(QApplication::translate("MainWindow", "0.8", Q_NULLPTR));
        labelStripAdjusted->setText(QApplication::translate("MainWindow", "Strip unadjusted", Q_NULLPTR));
        pushButtonSetting->setText(QApplication::translate("MainWindow", "Setting", Q_NULLPTR));
        pushButtonThresholdSetting->setText(QApplication::translate("MainWindow", "Show threshold panel", Q_NULLPTR));
        pushButtonCrop->setText(QApplication::translate("MainWindow", "Crop Strip", Q_NULLPTR));
        pushButtonOpenCamera->setText(QApplication::translate("MainWindow", "Open Webcam", Q_NULLPTR));
        pushButtonLoad->setText(QApplication::translate("MainWindow", "Choose Video", Q_NULLPTR));
        pushButtonPlay->setText(QApplication::translate("MainWindow", "Play", Q_NULLPTR));
        pushButtonExit->setText(QApplication::translate("MainWindow", "Exit", Q_NULLPTR));
        label_HL->setText(QApplication::translate("MainWindow", "0", Q_NULLPTR));
        label_4->setText(QApplication::translate("MainWindow", "Low", Q_NULLPTR));
        label->setText(QApplication::translate("MainWindow", "Hue", Q_NULLPTR));
        label_5->setText(QApplication::translate("MainWindow", "High", Q_NULLPTR));
        label_2->setText(QApplication::translate("MainWindow", "Saturation", Q_NULLPTR));
        label_SL->setText(QApplication::translate("MainWindow", "0", Q_NULLPTR));
        label_HH->setText(QApplication::translate("MainWindow", "0", Q_NULLPTR));
        label_VL->setText(QApplication::translate("MainWindow", "0", Q_NULLPTR));
        label_3->setText(QApplication::translate("MainWindow", "Value", Q_NULLPTR));
        label_SH->setText(QApplication::translate("MainWindow", "0", Q_NULLPTR));
        label_VH->setText(QApplication::translate("MainWindow", "0", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
