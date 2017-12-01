/********************************************************************************
** Form generated from reading UI file 'dialogcroppinghint.ui'
**
** Created by: Qt User Interface Compiler version 5.9.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOGCROPPINGHINT_H
#define UI_DIALOGCROPPINGHINT_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>

QT_BEGIN_NAMESPACE

class Ui_DialogCroppingHint
{
public:
    QDialogButtonBox *buttonBox;
    QLabel *label;

    void setupUi(QDialog *DialogCroppingHint)
    {
        if (DialogCroppingHint->objectName().isEmpty())
            DialogCroppingHint->setObjectName(QStringLiteral("DialogCroppingHint"));
        DialogCroppingHint->resize(400, 276);
        buttonBox = new QDialogButtonBox(DialogCroppingHint);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setGeometry(QRect(30, 200, 341, 32));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        label = new QLabel(DialogCroppingHint);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(60, 70, 241, 71));
        QFont font;
        font.setPointSize(12);
        label->setFont(font);
        label->setLineWidth(1);
        label->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        label->setWordWrap(true);

        retranslateUi(DialogCroppingHint);
        QObject::connect(buttonBox, SIGNAL(accepted()), DialogCroppingHint, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), DialogCroppingHint, SLOT(reject()));

        QMetaObject::connectSlotsByName(DialogCroppingHint);
    } // setupUi

    void retranslateUi(QDialog *DialogCroppingHint)
    {
        DialogCroppingHint->setWindowTitle(QApplication::translate("DialogCroppingHint", "Dialog", Q_NULLPTR));
        label->setText(QApplication::translate("DialogCroppingHint", "No frame found. Please play the video or open the webcam first.", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class DialogCroppingHint: public Ui_DialogCroppingHint {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOGCROPPINGHINT_H
