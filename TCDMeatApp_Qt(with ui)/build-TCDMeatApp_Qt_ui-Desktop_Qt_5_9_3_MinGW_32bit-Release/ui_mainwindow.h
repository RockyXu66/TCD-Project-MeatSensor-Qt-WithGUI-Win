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
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QLabel *labelWebcam;
    QHBoxLayout *horizontalLayout_3;
    QSlider *horizontalSliderLeftArea;
    QSlider *horizontalSliderRightArea;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *verticalSpacer;
    QWidget *layoutWidget1;
    QVBoxLayout *verticalLayout_2;
    QLabel *labelPrompt;
    QHBoxLayout *horizontalLayout;
    QLabel *labelO2;
    QLabel *labelO2Value;
    QWidget *layoutWidget2;
    QVBoxLayout *verticalLayout_3;
    QPushButton *pushButtonSetting;
    QPushButton *pushButtonCrop;
    QPushButton *pushButtonOpenCamera;
    QPushButton *pushButtonLoad;
    QPushButton *pushButtonPlay;
    QPushButton *pushButtonExit;
    QLabel *labelStripAdjusted;
    QWidget *layoutWidget3;
    QHBoxLayout *horizontalLayout_4;
    QLabel *labelRatio;
    QLineEdit *lineEditRatio;
    QPushButton *pushButtonNext;
    QWidget *layoutWidget4;
    QGridLayout *gridLayout;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label;
    QLabel *label_HL;
    QSlider *horizontalSliderThresh;
    QLabel *label_HH;
    QSlider *horizontalSliderThresh_4;
    QLabel *label_2;
    QLabel *label_SL;
    QSlider *horizontalSliderThresh_2;
    QLabel *label_SH;
    QSlider *horizontalSliderThresh_5;
    QLabel *label_3;
    QLabel *label_VL;
    QSlider *horizontalSliderThresh_3;
    QLabel *label_VH;
    QSlider *horizontalSliderThresh_6;
    QPushButton *pushButtonPrintO2;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(1166, 751);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        layoutWidget = new QWidget(centralWidget);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(10, 0, 951, 591));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        labelWebcam = new QLabel(layoutWidget);
        labelWebcam->setObjectName(QStringLiteral("labelWebcam"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(labelWebcam->sizePolicy().hasHeightForWidth());
        labelWebcam->setSizePolicy(sizePolicy);
        labelWebcam->setAutoFillBackground(false);
        labelWebcam->setStyleSheet(QLatin1String("border: 1px solid;\n"
"Background-color: #000;"));
        labelWebcam->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(labelWebcam);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalSliderLeftArea = new QSlider(layoutWidget);
        horizontalSliderLeftArea->setObjectName(QStringLiteral("horizontalSliderLeftArea"));
        horizontalSliderLeftArea->setValue(80);
        horizontalSliderLeftArea->setOrientation(Qt::Horizontal);

        horizontalLayout_3->addWidget(horizontalSliderLeftArea);

        horizontalSliderRightArea = new QSlider(layoutWidget);
        horizontalSliderRightArea->setObjectName(QStringLiteral("horizontalSliderRightArea"));
        horizontalSliderRightArea->setValue(30);
        horizontalSliderRightArea->setOrientation(Qt::Horizontal);

        horizontalLayout_3->addWidget(horizontalSliderRightArea);


        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));

        verticalLayout->addLayout(horizontalLayout_2);

        verticalSpacer = new QSpacerItem(0, 0, QSizePolicy::Minimum, QSizePolicy::Minimum);

        verticalLayout->addItem(verticalSpacer);

        layoutWidget1 = new QWidget(centralWidget);
        layoutWidget1->setObjectName(QStringLiteral("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(970, 10, 171, 101));
        verticalLayout_2 = new QVBoxLayout(layoutWidget1);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        labelPrompt = new QLabel(layoutWidget1);
        labelPrompt->setObjectName(QStringLiteral("labelPrompt"));
        QFont font;
        font.setPointSize(15);
        labelPrompt->setFont(font);
        labelPrompt->setAlignment(Qt::AlignCenter);

        verticalLayout_2->addWidget(labelPrompt);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        labelO2 = new QLabel(layoutWidget1);
        labelO2->setObjectName(QStringLiteral("labelO2"));
        QFont font1;
        font1.setPointSize(20);
        labelO2->setFont(font1);
        labelO2->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout->addWidget(labelO2);

        labelO2Value = new QLabel(layoutWidget1);
        labelO2Value->setObjectName(QStringLiteral("labelO2Value"));
        labelO2Value->setFont(font1);
        labelO2Value->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        horizontalLayout->addWidget(labelO2Value);


        verticalLayout_2->addLayout(horizontalLayout);

        layoutWidget2 = new QWidget(centralWidget);
        layoutWidget2->setObjectName(QStringLiteral("layoutWidget2"));
        layoutWidget2->setGeometry(QRect(990, 350, 141, 241));
        verticalLayout_3 = new QVBoxLayout(layoutWidget2);
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setContentsMargins(11, 11, 11, 11);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        pushButtonSetting = new QPushButton(layoutWidget2);
        pushButtonSetting->setObjectName(QStringLiteral("pushButtonSetting"));

        verticalLayout_3->addWidget(pushButtonSetting);

        pushButtonCrop = new QPushButton(layoutWidget2);
        pushButtonCrop->setObjectName(QStringLiteral("pushButtonCrop"));

        verticalLayout_3->addWidget(pushButtonCrop);

        pushButtonOpenCamera = new QPushButton(layoutWidget2);
        pushButtonOpenCamera->setObjectName(QStringLiteral("pushButtonOpenCamera"));

        verticalLayout_3->addWidget(pushButtonOpenCamera);

        pushButtonLoad = new QPushButton(layoutWidget2);
        pushButtonLoad->setObjectName(QStringLiteral("pushButtonLoad"));

        verticalLayout_3->addWidget(pushButtonLoad);

        pushButtonPlay = new QPushButton(layoutWidget2);
        pushButtonPlay->setObjectName(QStringLiteral("pushButtonPlay"));

        verticalLayout_3->addWidget(pushButtonPlay);

        pushButtonExit = new QPushButton(layoutWidget2);
        pushButtonExit->setObjectName(QStringLiteral("pushButtonExit"));

        verticalLayout_3->addWidget(pushButtonExit);

        labelStripAdjusted = new QLabel(centralWidget);
        labelStripAdjusted->setObjectName(QStringLiteral("labelStripAdjusted"));
        labelStripAdjusted->setGeometry(QRect(980, 300, 151, 31));
        QFont font2;
        font2.setPointSize(12);
        labelStripAdjusted->setFont(font2);
        labelStripAdjusted->setStyleSheet(QStringLiteral("color: red"));
        labelStripAdjusted->setAlignment(Qt::AlignCenter);
        layoutWidget3 = new QWidget(centralWidget);
        layoutWidget3->setObjectName(QStringLiteral("layoutWidget3"));
        layoutWidget3->setGeometry(QRect(1000, 270, 101, 29));
        horizontalLayout_4 = new QHBoxLayout(layoutWidget3);
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(0, 0, 0, 0);
        labelRatio = new QLabel(layoutWidget3);
        labelRatio->setObjectName(QStringLiteral("labelRatio"));
        labelRatio->setFont(font2);

        horizontalLayout_4->addWidget(labelRatio);

        lineEditRatio = new QLineEdit(layoutWidget3);
        lineEditRatio->setObjectName(QStringLiteral("lineEditRatio"));
        lineEditRatio->setFont(font2);
        lineEditRatio->setAlignment(Qt::AlignCenter);

        horizontalLayout_4->addWidget(lineEditRatio);

        pushButtonNext = new QPushButton(centralWidget);
        pushButtonNext->setObjectName(QStringLiteral("pushButtonNext"));
        pushButtonNext->setGeometry(QRect(980, 230, 80, 21));
        layoutWidget4 = new QWidget(centralWidget);
        layoutWidget4->setObjectName(QStringLiteral("layoutWidget4"));
        layoutWidget4->setGeometry(QRect(62, 590, 311, 91));
        gridLayout = new QGridLayout(layoutWidget4);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        label_4 = new QLabel(layoutWidget4);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_4, 0, 1, 1, 2);

        label_5 = new QLabel(layoutWidget4);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_5, 0, 3, 1, 2);

        label = new QLabel(layoutWidget4);
        label->setObjectName(QStringLiteral("label"));
        label->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label, 1, 0, 1, 1);

        label_HL = new QLabel(layoutWidget4);
        label_HL->setObjectName(QStringLiteral("label_HL"));
        label_HL->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_HL, 1, 1, 1, 1);

        horizontalSliderThresh = new QSlider(layoutWidget4);
        horizontalSliderThresh->setObjectName(QStringLiteral("horizontalSliderThresh"));
        horizontalSliderThresh->setMaximum(179);
        horizontalSliderThresh->setOrientation(Qt::Horizontal);

        gridLayout->addWidget(horizontalSliderThresh, 1, 2, 1, 1);

        label_HH = new QLabel(layoutWidget4);
        label_HH->setObjectName(QStringLiteral("label_HH"));
        label_HH->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_HH, 1, 3, 1, 1);

        horizontalSliderThresh_4 = new QSlider(layoutWidget4);
        horizontalSliderThresh_4->setObjectName(QStringLiteral("horizontalSliderThresh_4"));
        horizontalSliderThresh_4->setMaximum(179);
        horizontalSliderThresh_4->setOrientation(Qt::Horizontal);

        gridLayout->addWidget(horizontalSliderThresh_4, 1, 4, 1, 1);

        label_2 = new QLabel(layoutWidget4);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_2, 2, 0, 1, 1);

        label_SL = new QLabel(layoutWidget4);
        label_SL->setObjectName(QStringLiteral("label_SL"));
        label_SL->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_SL, 2, 1, 1, 1);

        horizontalSliderThresh_2 = new QSlider(layoutWidget4);
        horizontalSliderThresh_2->setObjectName(QStringLiteral("horizontalSliderThresh_2"));
        horizontalSliderThresh_2->setMaximum(255);
        horizontalSliderThresh_2->setOrientation(Qt::Horizontal);

        gridLayout->addWidget(horizontalSliderThresh_2, 2, 2, 1, 1);

        label_SH = new QLabel(layoutWidget4);
        label_SH->setObjectName(QStringLiteral("label_SH"));
        label_SH->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_SH, 2, 3, 1, 1);

        horizontalSliderThresh_5 = new QSlider(layoutWidget4);
        horizontalSliderThresh_5->setObjectName(QStringLiteral("horizontalSliderThresh_5"));
        horizontalSliderThresh_5->setMaximum(255);
        horizontalSliderThresh_5->setOrientation(Qt::Horizontal);

        gridLayout->addWidget(horizontalSliderThresh_5, 2, 4, 1, 1);

        label_3 = new QLabel(layoutWidget4);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_3, 3, 0, 1, 1);

        label_VL = new QLabel(layoutWidget4);
        label_VL->setObjectName(QStringLiteral("label_VL"));
        label_VL->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_VL, 3, 1, 1, 1);

        horizontalSliderThresh_3 = new QSlider(layoutWidget4);
        horizontalSliderThresh_3->setObjectName(QStringLiteral("horizontalSliderThresh_3"));
        horizontalSliderThresh_3->setMaximum(255);
        horizontalSliderThresh_3->setOrientation(Qt::Horizontal);

        gridLayout->addWidget(horizontalSliderThresh_3, 3, 2, 1, 1);

        label_VH = new QLabel(layoutWidget4);
        label_VH->setObjectName(QStringLiteral("label_VH"));
        label_VH->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_VH, 3, 3, 1, 1);

        horizontalSliderThresh_6 = new QSlider(layoutWidget4);
        horizontalSliderThresh_6->setObjectName(QStringLiteral("horizontalSliderThresh_6"));
        horizontalSliderThresh_6->setMaximum(255);
        horizontalSliderThresh_6->setOrientation(Qt::Horizontal);

        gridLayout->addWidget(horizontalSliderThresh_6, 3, 4, 1, 1);

        pushButtonPrintO2 = new QPushButton(centralWidget);
        pushButtonPrintO2->setObjectName(QStringLiteral("pushButtonPrintO2"));
        pushButtonPrintO2->setGeometry(QRect(1070, 230, 80, 21));
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 1166, 20));
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
        labelWebcam->setText(QString());
        labelPrompt->setText(QString());
        labelO2->setText(QApplication::translate("MainWindow", "O2: ", Q_NULLPTR));
        labelO2Value->setText(QString());
        pushButtonSetting->setText(QApplication::translate("MainWindow", "Setting", Q_NULLPTR));
        pushButtonCrop->setText(QApplication::translate("MainWindow", "Crop Strip", Q_NULLPTR));
        pushButtonOpenCamera->setText(QApplication::translate("MainWindow", "Open Webcam", Q_NULLPTR));
        pushButtonLoad->setText(QApplication::translate("MainWindow", "Choose Video", Q_NULLPTR));
        pushButtonPlay->setText(QApplication::translate("MainWindow", "Play", Q_NULLPTR));
        pushButtonExit->setText(QApplication::translate("MainWindow", "Exit", Q_NULLPTR));
        labelStripAdjusted->setText(QApplication::translate("MainWindow", "Strip unadjusted", Q_NULLPTR));
        labelRatio->setText(QApplication::translate("MainWindow", "Ratio:", Q_NULLPTR));
        lineEditRatio->setText(QApplication::translate("MainWindow", "0.8", Q_NULLPTR));
        pushButtonNext->setText(QApplication::translate("MainWindow", "Next one", Q_NULLPTR));
        label_4->setText(QApplication::translate("MainWindow", "Low", Q_NULLPTR));
        label_5->setText(QApplication::translate("MainWindow", "High", Q_NULLPTR));
        label->setText(QApplication::translate("MainWindow", "Hue", Q_NULLPTR));
        label_HL->setText(QApplication::translate("MainWindow", "0", Q_NULLPTR));
        label_HH->setText(QApplication::translate("MainWindow", "0", Q_NULLPTR));
        label_2->setText(QApplication::translate("MainWindow", "Saturation", Q_NULLPTR));
        label_SL->setText(QApplication::translate("MainWindow", "0", Q_NULLPTR));
        label_SH->setText(QApplication::translate("MainWindow", "0", Q_NULLPTR));
        label_3->setText(QApplication::translate("MainWindow", "Value", Q_NULLPTR));
        label_VL->setText(QApplication::translate("MainWindow", "0", Q_NULLPTR));
        label_VH->setText(QApplication::translate("MainWindow", "0", Q_NULLPTR));
        pushButtonPrintO2->setText(QApplication::translate("MainWindow", "PrintO2", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
