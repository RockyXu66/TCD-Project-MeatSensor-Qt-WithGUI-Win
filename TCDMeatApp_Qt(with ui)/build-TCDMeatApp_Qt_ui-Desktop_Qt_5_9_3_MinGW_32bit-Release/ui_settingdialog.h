/********************************************************************************
** Form generated from reading UI file 'settingdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.9.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SETTINGDIALOG_H
#define UI_SETTINGDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_settingDialog
{
public:
    QDialogButtonBox *buttonBox;
    QLabel *label;
    QWidget *widget;
    QFormLayout *formLayout;
    QLabel *label_setting_a;
    QLineEdit *lineEdit_setting_a;
    QLabel *label_setting_b;
    QLineEdit *lineEdit_setting_b;
    QLabel *label_setting_c;
    QLabel *label_setting_d;
    QLineEdit *lineEdit_setting_d;
    QLineEdit *lineEdit_setting_c;

    void setupUi(QDialog *settingDialog)
    {
        if (settingDialog->objectName().isEmpty())
            settingDialog->setObjectName(QStringLiteral("settingDialog"));
        settingDialog->resize(415, 306);
        buttonBox = new QDialogButtonBox(settingDialog);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setGeometry(QRect(30, 240, 341, 32));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        label = new QLabel(settingDialog);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(20, 10, 111, 31));
        widget = new QWidget(settingDialog);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(70, 60, 281, 131));
        formLayout = new QFormLayout(widget);
        formLayout->setObjectName(QStringLiteral("formLayout"));
        formLayout->setContentsMargins(0, 0, 0, 0);
        label_setting_a = new QLabel(widget);
        label_setting_a->setObjectName(QStringLiteral("label_setting_a"));
        label_setting_a->setAlignment(Qt::AlignCenter);

        formLayout->setWidget(0, QFormLayout::LabelRole, label_setting_a);

        lineEdit_setting_a = new QLineEdit(widget);
        lineEdit_setting_a->setObjectName(QStringLiteral("lineEdit_setting_a"));

        formLayout->setWidget(0, QFormLayout::FieldRole, lineEdit_setting_a);

        label_setting_b = new QLabel(widget);
        label_setting_b->setObjectName(QStringLiteral("label_setting_b"));
        label_setting_b->setAlignment(Qt::AlignCenter);

        formLayout->setWidget(1, QFormLayout::LabelRole, label_setting_b);

        lineEdit_setting_b = new QLineEdit(widget);
        lineEdit_setting_b->setObjectName(QStringLiteral("lineEdit_setting_b"));

        formLayout->setWidget(1, QFormLayout::FieldRole, lineEdit_setting_b);

        label_setting_c = new QLabel(widget);
        label_setting_c->setObjectName(QStringLiteral("label_setting_c"));
        label_setting_c->setAlignment(Qt::AlignCenter);

        formLayout->setWidget(2, QFormLayout::LabelRole, label_setting_c);

        label_setting_d = new QLabel(widget);
        label_setting_d->setObjectName(QStringLiteral("label_setting_d"));
        label_setting_d->setAlignment(Qt::AlignCenter);

        formLayout->setWidget(3, QFormLayout::LabelRole, label_setting_d);

        lineEdit_setting_d = new QLineEdit(widget);
        lineEdit_setting_d->setObjectName(QStringLiteral("lineEdit_setting_d"));

        formLayout->setWidget(3, QFormLayout::FieldRole, lineEdit_setting_d);

        lineEdit_setting_c = new QLineEdit(widget);
        lineEdit_setting_c->setObjectName(QStringLiteral("lineEdit_setting_c"));

        formLayout->setWidget(2, QFormLayout::FieldRole, lineEdit_setting_c);


        retranslateUi(settingDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), settingDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), settingDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(settingDialog);
    } // setupUi

    void retranslateUi(QDialog *settingDialog)
    {
        settingDialog->setWindowTitle(QApplication::translate("settingDialog", "Setting", Q_NULLPTR));
        label->setText(QApplication::translate("settingDialog", "Curve Parameters", Q_NULLPTR));
        label_setting_a->setText(QApplication::translate("settingDialog", "a", Q_NULLPTR));
        label_setting_b->setText(QApplication::translate("settingDialog", "b", Q_NULLPTR));
        label_setting_c->setText(QApplication::translate("settingDialog", "c", Q_NULLPTR));
        label_setting_d->setText(QApplication::translate("settingDialog", "d", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class settingDialog: public Ui_settingDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SETTINGDIALOG_H
