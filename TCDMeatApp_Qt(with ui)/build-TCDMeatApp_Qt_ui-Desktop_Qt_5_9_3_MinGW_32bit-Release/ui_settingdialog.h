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
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_settingDialog
{
public:
    QGridLayout *gridLayout;
    QLabel *labelCurveEquation;
    QComboBox *comboBoxCurveType;
    QHBoxLayout *horizontalLayout;
    QLabel *label_2;
    QLineEdit *lineEditCurveFilePath;
    QPushButton *pushButtonImportCurvePara;
    QFormLayout *formLayout;
    QLabel *label_setting_a;
    QLineEdit *lineEdit_setting_a;
    QLabel *label_setting_b;
    QLineEdit *lineEdit_setting_b;
    QLabel *label_setting_c;
    QLineEdit *lineEdit_setting_c;
    QLabel *label_setting_d;
    QLineEdit *lineEdit_setting_d;
    QLabel *label_setting_e;
    QLineEdit *lineEdit_setting_e;
    QLabel *label_setting_f;
    QLineEdit *lineEdit_setting_f;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *settingDialog)
    {
        if (settingDialog->objectName().isEmpty())
            settingDialog->setObjectName(QStringLiteral("settingDialog"));
        settingDialog->resize(745, 268);
        gridLayout = new QGridLayout(settingDialog);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        labelCurveEquation = new QLabel(settingDialog);
        labelCurveEquation->setObjectName(QStringLiteral("labelCurveEquation"));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(labelCurveEquation->sizePolicy().hasHeightForWidth());
        labelCurveEquation->setSizePolicy(sizePolicy);
        QFont font;
        font.setPointSize(10);
        labelCurveEquation->setFont(font);

        gridLayout->addWidget(labelCurveEquation, 0, 0, 1, 1);

        comboBoxCurveType = new QComboBox(settingDialog);
        comboBoxCurveType->setObjectName(QStringLiteral("comboBoxCurveType"));
        comboBoxCurveType->setEditable(false);

        gridLayout->addWidget(comboBoxCurveType, 0, 1, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label_2 = new QLabel(settingDialog);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setFont(font);

        horizontalLayout->addWidget(label_2);

        lineEditCurveFilePath = new QLineEdit(settingDialog);
        lineEditCurveFilePath->setObjectName(QStringLiteral("lineEditCurveFilePath"));

        horizontalLayout->addWidget(lineEditCurveFilePath);


        gridLayout->addLayout(horizontalLayout, 2, 0, 1, 1);

        pushButtonImportCurvePara = new QPushButton(settingDialog);
        pushButtonImportCurvePara->setObjectName(QStringLiteral("pushButtonImportCurvePara"));
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(pushButtonImportCurvePara->sizePolicy().hasHeightForWidth());
        pushButtonImportCurvePara->setSizePolicy(sizePolicy1);
        pushButtonImportCurvePara->setMinimumSize(QSize(10, 5));

        gridLayout->addWidget(pushButtonImportCurvePara, 2, 1, 1, 1);

        formLayout = new QFormLayout();
        formLayout->setObjectName(QStringLiteral("formLayout"));
        formLayout->setContentsMargins(250, -1, 250, -1);
        label_setting_a = new QLabel(settingDialog);
        label_setting_a->setObjectName(QStringLiteral("label_setting_a"));
        label_setting_a->setFont(font);
        label_setting_a->setAlignment(Qt::AlignCenter);

        formLayout->setWidget(0, QFormLayout::LabelRole, label_setting_a);

        lineEdit_setting_a = new QLineEdit(settingDialog);
        lineEdit_setting_a->setObjectName(QStringLiteral("lineEdit_setting_a"));
        QSizePolicy sizePolicy2(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(40);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(lineEdit_setting_a->sizePolicy().hasHeightForWidth());
        lineEdit_setting_a->setSizePolicy(sizePolicy2);

        formLayout->setWidget(0, QFormLayout::FieldRole, lineEdit_setting_a);

        label_setting_b = new QLabel(settingDialog);
        label_setting_b->setObjectName(QStringLiteral("label_setting_b"));
        label_setting_b->setFont(font);
        label_setting_b->setAlignment(Qt::AlignCenter);

        formLayout->setWidget(1, QFormLayout::LabelRole, label_setting_b);

        lineEdit_setting_b = new QLineEdit(settingDialog);
        lineEdit_setting_b->setObjectName(QStringLiteral("lineEdit_setting_b"));
        sizePolicy2.setHeightForWidth(lineEdit_setting_b->sizePolicy().hasHeightForWidth());
        lineEdit_setting_b->setSizePolicy(sizePolicy2);

        formLayout->setWidget(1, QFormLayout::FieldRole, lineEdit_setting_b);

        label_setting_c = new QLabel(settingDialog);
        label_setting_c->setObjectName(QStringLiteral("label_setting_c"));
        label_setting_c->setFont(font);
        label_setting_c->setAlignment(Qt::AlignCenter);

        formLayout->setWidget(2, QFormLayout::LabelRole, label_setting_c);

        lineEdit_setting_c = new QLineEdit(settingDialog);
        lineEdit_setting_c->setObjectName(QStringLiteral("lineEdit_setting_c"));
        sizePolicy2.setHeightForWidth(lineEdit_setting_c->sizePolicy().hasHeightForWidth());
        lineEdit_setting_c->setSizePolicy(sizePolicy2);

        formLayout->setWidget(2, QFormLayout::FieldRole, lineEdit_setting_c);

        label_setting_d = new QLabel(settingDialog);
        label_setting_d->setObjectName(QStringLiteral("label_setting_d"));
        label_setting_d->setFont(font);
        label_setting_d->setAlignment(Qt::AlignCenter);

        formLayout->setWidget(3, QFormLayout::LabelRole, label_setting_d);

        lineEdit_setting_d = new QLineEdit(settingDialog);
        lineEdit_setting_d->setObjectName(QStringLiteral("lineEdit_setting_d"));
        sizePolicy2.setHeightForWidth(lineEdit_setting_d->sizePolicy().hasHeightForWidth());
        lineEdit_setting_d->setSizePolicy(sizePolicy2);
        lineEdit_setting_d->setMinimumSize(QSize(40, 0));

        formLayout->setWidget(3, QFormLayout::FieldRole, lineEdit_setting_d);

        label_setting_e = new QLabel(settingDialog);
        label_setting_e->setObjectName(QStringLiteral("label_setting_e"));
        label_setting_e->setFont(font);
        label_setting_e->setAlignment(Qt::AlignCenter);

        formLayout->setWidget(4, QFormLayout::LabelRole, label_setting_e);

        lineEdit_setting_e = new QLineEdit(settingDialog);
        lineEdit_setting_e->setObjectName(QStringLiteral("lineEdit_setting_e"));
        sizePolicy2.setHeightForWidth(lineEdit_setting_e->sizePolicy().hasHeightForWidth());
        lineEdit_setting_e->setSizePolicy(sizePolicy2);
        lineEdit_setting_e->setMinimumSize(QSize(40, 0));

        formLayout->setWidget(4, QFormLayout::FieldRole, lineEdit_setting_e);

        label_setting_f = new QLabel(settingDialog);
        label_setting_f->setObjectName(QStringLiteral("label_setting_f"));
        label_setting_f->setFont(font);
        label_setting_f->setAlignment(Qt::AlignCenter);

        formLayout->setWidget(5, QFormLayout::LabelRole, label_setting_f);

        lineEdit_setting_f = new QLineEdit(settingDialog);
        lineEdit_setting_f->setObjectName(QStringLiteral("lineEdit_setting_f"));
        sizePolicy2.setHeightForWidth(lineEdit_setting_f->sizePolicy().hasHeightForWidth());
        lineEdit_setting_f->setSizePolicy(sizePolicy2);
        lineEdit_setting_f->setMinimumSize(QSize(40, 0));

        formLayout->setWidget(5, QFormLayout::FieldRole, lineEdit_setting_f);


        gridLayout->addLayout(formLayout, 1, 0, 1, 1);

        buttonBox = new QDialogButtonBox(settingDialog);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        gridLayout->addWidget(buttonBox, 3, 0, 1, 1);


        retranslateUi(settingDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), settingDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), settingDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(settingDialog);
    } // setupUi

    void retranslateUi(QDialog *settingDialog)
    {
        settingDialog->setWindowTitle(QApplication::translate("settingDialog", "Setting", Q_NULLPTR));
        labelCurveEquation->setText(QApplication::translate("settingDialog", "Curve Equations: ", Q_NULLPTR));
        comboBoxCurveType->setCurrentText(QString());
        label_2->setText(QApplication::translate("settingDialog", "Curve file path", Q_NULLPTR));
        pushButtonImportCurvePara->setText(QApplication::translate("settingDialog", "Import", Q_NULLPTR));
        label_setting_a->setText(QApplication::translate("settingDialog", "a", Q_NULLPTR));
        label_setting_b->setText(QApplication::translate("settingDialog", "b", Q_NULLPTR));
        label_setting_c->setText(QApplication::translate("settingDialog", "c", Q_NULLPTR));
        label_setting_d->setText(QApplication::translate("settingDialog", "d", Q_NULLPTR));
        label_setting_e->setText(QApplication::translate("settingDialog", "e", Q_NULLPTR));
        label_setting_f->setText(QApplication::translate("settingDialog", "f", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class settingDialog: public Ui_settingDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SETTINGDIALOG_H
