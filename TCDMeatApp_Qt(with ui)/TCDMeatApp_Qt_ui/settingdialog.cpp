#include "settingdialog.h"
#include "ui_settingdialog.h"

settingDialog::settingDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::settingDialog)
{
    ui->setupUi(this);
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

//    float curve_para[4] = {curve_para_a, curve_para_b, curve_para_c, curve_para_d};

    emit(sendCurvePara(curve_para_a, curve_para_b, curve_para_c, curve_para_d));
    cout<<"test"<<endl;
}

void settingDialog::receiveUpdateCurvePara(float para_a, float para_b, float para_c, float para_d){
    cout<<"123"<<endl;
    ui->lineEdit_setting_a->setText(QString::number(para_a));
    ui->lineEdit_setting_b->setText(QString::number(para_b));
    ui->lineEdit_setting_c->setText(QString::number(para_c));
    ui->lineEdit_setting_d->setText(QString::number(para_d));
}

//void settingDialog::sendCurvePara(float para[]){

//}
