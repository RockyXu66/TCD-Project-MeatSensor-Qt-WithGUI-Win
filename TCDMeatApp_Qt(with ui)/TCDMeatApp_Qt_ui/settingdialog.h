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
    void sendCurvePara(QVector<double>, QString);

private slots:
    void on_buttonBox_accepted();
    void receiveUpdateCurvePara(QVector<double>,QVector<double>,QVector<double>,QVector<double>,QVector<double>,QString);

    void on_comboBoxCurveType_currentIndexChanged(const QString &arg1);

    void on_pushButtonImportCurvePara_clicked();

private:
    Ui::settingDialog *ui;
    QVector<double> exp2_para;
    QVector<double> cubic_para;
    QVector<double> poly4_para;
    QVector<double> gauss2_para;
    QVector<double> fou2_para;

    void setCurveParameters(QVector<double> para, QString curveType);

    void updateUI(QString);
};

#endif // SETTINGDIALOG_H
