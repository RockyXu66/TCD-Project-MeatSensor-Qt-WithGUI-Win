#ifndef SETTINGDIALOG_H
#define SETTINGDIALOG_H

#include <QDialog>
#include <iostream>

using namespace std;

namespace Ui {
class settingDialog;
}

class settingDialog : public QDialog
{
    Q_OBJECT

public:
    explicit settingDialog(QWidget *parent = 0);
    ~settingDialog();

signals:
    void sendCurvePara(float,float,float,float);

private slots:
    void on_buttonBox_accepted();
    void receiveUpdateCurvePara(float,float, float, float);

private:
    Ui::settingDialog *ui;
};

#endif // SETTINGDIALOG_H
