#include "dialogcroppinghint.h"
#include "ui_dialogcroppinghint.h"

#include <QLabel>
#include <QCheckBox>
#include <QPushButton>
#include <QVBoxLayout>

DialogCroppingHint::DialogCroppingHint(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::DialogCroppingHint)
{
    ui->setupUi(this);
    this->setWindowTitle("Warning");
}

DialogCroppingHint::~DialogCroppingHint()
{
    delete ui;
}
