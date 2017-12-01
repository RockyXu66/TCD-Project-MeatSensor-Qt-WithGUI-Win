/********************************************************************************
** Form generated from reading UI file 'widgetcropping.ui'
**
** Created by: Qt User Interface Compiler version 5.9.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGETCROPPING_H
#define UI_WIDGETCROPPING_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_WidgetCropping
{
public:
    QLabel *label;

    void setupUi(QWidget *WidgetCropping)
    {
        if (WidgetCropping->objectName().isEmpty())
            WidgetCropping->setObjectName(QStringLiteral("WidgetCropping"));
        WidgetCropping->resize(400, 300);
        label = new QLabel(WidgetCropping);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(190, 90, 47, 13));

        retranslateUi(WidgetCropping);

        QMetaObject::connectSlotsByName(WidgetCropping);
    } // setupUi

    void retranslateUi(QWidget *WidgetCropping)
    {
        WidgetCropping->setWindowTitle(QApplication::translate("WidgetCropping", "Form", Q_NULLPTR));
        label->setText(QApplication::translate("WidgetCropping", "test", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class WidgetCropping: public Ui_WidgetCropping {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGETCROPPING_H
