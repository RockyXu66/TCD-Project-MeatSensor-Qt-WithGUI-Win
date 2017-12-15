#ifndef SETTINGDIALOG_H
#define SETTINGDIALOG_H

#include <QDialog>
#include <iostream>
#include <QFile>
#include <QTextStream>
#include <QDebug>
#include <QMessageBox>

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
    void sendCurvePara(QVector<float>, QString);

private slots:
    void on_buttonBox_accepted();
    void receiveUpdateCurvePara(QVector<float>,QVector<float>,QString);

    void on_comboBoxCurveType_currentIndexChanged(const QString &arg1);

    void on_pushButtonImportCurvePara_clicked();

private:
    Ui::settingDialog *ui;
    QVector<float> exp_para;
    QVector<float> cubic_para;

    void setCurveParameters(QVector<float> para);
};

#endif // SETTINGDIALOG_H
