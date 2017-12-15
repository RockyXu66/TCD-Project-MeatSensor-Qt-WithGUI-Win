#include "settingdialog.h"
#include "ui_settingdialog.h"

settingDialog::settingDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::settingDialog)
{

    ui->setupUi(this);
    // index => value
    //     0 => Exponential
    //     1 => Cubic
    ui->comboBoxCurveType->addItem("Exponential");
    ui->comboBoxCurveType->addItem("Cubic");

    exp_para.append(0);
    exp_para.append(0);
    exp_para.append(0);
    exp_para.append(0);

    cubic_para.append(0);
    cubic_para.append(0);
    cubic_para.append(0);
    cubic_para.append(0);

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

    QVector<float> current_para;
    current_para.append(curve_para_a);
    current_para.append(curve_para_b);
    current_para.append(curve_para_c);
    current_para.append(curve_para_d);

    emit(sendCurvePara(current_para, curve_type));
}

void settingDialog::receiveUpdateCurvePara(QVector<float> exp_para, QVector<float> cubic_para, QString curveType){
    cout<<"receiveUpdateCurvePara: "<<endl;

    this->exp_para = exp_para;
    this->cubic_para = cubic_para;

    if (curveType == "Exponential") {
        ui->comboBoxCurveType->setCurrentIndex(0);
        setCurveParameters(this->exp_para);
    } else if (curveType == "Cubic") {
        ui->comboBoxCurveType->setCurrentIndex(1);
        setCurveParameters(this->cubic_para);
    }
}

void settingDialog::on_comboBoxCurveType_currentIndexChanged(const QString &arg1)
{
    if (arg1 == "Exponential") {
        setCurveParameters(this->exp_para);
    } else if (arg1 == "Cubic") {
        setCurveParameters(this->cubic_para);
    }
}

void settingDialog::setCurveParameters(QVector<float> para){
    ui->lineEdit_setting_a->setText(QString::number(para[0]));
    ui->lineEdit_setting_b->setText(QString::number(para[1]));
    ui->lineEdit_setting_c->setText(QString::number(para[2]));
    ui->lineEdit_setting_d->setText(QString::number(para[3]));
}

void settingDialog::on_pushButtonImportCurvePara_clicked()
{
    QString path = ui->lineEditCurveFilePath->text();
    path.replace(QString("\\"), QString("/"));
    QString curveType;

    if (path == "") {
        QMessageBox msgBox;
        msgBox.setWindowTitle("Notification");
        msgBox.setText("Please insert file path.");
        msgBox.exec();
        return;
    }

    if (path.contains("exp_parameters.txt")) {
        curveType = "exponential curve";
        ui->comboBoxCurveType->setCurrentIndex(0);
//        qDebug()<<"exp";
    } else if (path.contains("cubic_parameters.txt")) {
        curveType = "cubic curve";
        ui->comboBoxCurveType->setCurrentIndex(1);
//        qDebug()<<"cubic";
    } else {
        QMessageBox msgBox;
        msgBox.setWindowTitle("Notification");
        msgBox.setText("Could not load this file.");
        msgBox.exec();
        return;
    }

    QFile file(path);
   if (!file.open(QIODevice::ReadOnly | QIODevice::Text))
       return;

   // Get parameters from file
   QVector<QString> paras;
   QTextStream in(&file);
   while (!in.atEnd()) {
       QString line = in.readLine();
       QString subLine = line.mid(4, line.length());
       paras.append(subLine);
   }

   // Put these parameters into the GUI text line
   ui->lineEdit_setting_a->setText(paras[0]);
   ui->lineEdit_setting_b->setText(paras[1]);
   ui->lineEdit_setting_c->setText(paras[2]);
   ui->lineEdit_setting_d->setText(paras[3]);

   QMessageBox msgBox;
   msgBox.setWindowTitle("Notification");
   msgBox.setText("Import " + curveType + " successfully.");
   msgBox.exec();
}
