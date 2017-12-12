#include "settingdialog.h"
#include "ui_settingdialog.h"

settingDialog::settingDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::settingDialog)
{

    ui->setupUi(this);
    ui->comboBoxCurveType->addItem("Exponential");
    ui->comboBoxCurveType->addItem("Cubic");
}

settingDialog::~settingDialog()
{
    delete ui;
}

void settingDialog::on_buttonBox_accepted()
{
    float curve_para_a = ui->lineEdit_setting_a->text().toFloat();
    float curve_para_b = ui->lineEdit_setting_b->text().toFloat();
    float curve_para_c = ui->lineEdit_setting_c->text().toFloat();
    float curve_para_d = ui->lineEdit_setting_d->text().toFloat();
    QString curve_type = ui->comboBoxCurveType->currentText();
//    float curve_para[4] = {curve_para_a, curve_para_b, curve_para_c, curve_para_d};

    emit(sendCurvePara(curve_para_a, curve_para_b, curve_para_c, curve_para_d, curve_type));
}

void settingDialog::receiveUpdateCurvePara(float para_a, float para_b, float para_c, float para_d, QString curveType){
    cout<<"receiveUpdateCurvePara"<<endl;
    if (curveType == "Exponential") {
        ui->comboBoxCurveType->setCurrentIndex(0);
    } else if (curveType == "Cubic") {
        ui->comboBoxCurveType->setCurrentIndex(1);
    }

    ui->lineEdit_setting_a->setText(QString::number(para_a));
    ui->lineEdit_setting_b->setText(QString::number(para_b));
    ui->lineEdit_setting_c->setText(QString::number(para_c));
    ui->lineEdit_setting_d->setText(QString::number(para_d));
}

//void settingDialog::sendCurvePara(float para[]){

//}
