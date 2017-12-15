#include "settingdialog.h"
#include "ui_settingdialog.h"

settingDialog::settingDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::settingDialog)
{

    ui->setupUi(this);
    // index => value
    //     0 => 2 terms of exponential
    //     1 => 3 terms of polynomial (cubic)
    //     2 => 4 terms of polynomial
    //     3 => 2 terms of gaussian
    //     4 => 2 terms of fourier
    ui->comboBoxCurveType->addItem("Exponential2");
    ui->comboBoxCurveType->addItem("Cubic");
    ui->comboBoxCurveType->addItem("Polynomial4");
    ui->comboBoxCurveType->addItem("Gaussian2");
    ui->comboBoxCurveType->addItem("Fourier2");

    for (int i = 0; i < 4; i++) {
        exp2_para.append(0);
        cubic_para.append(0);
    }

    for (int i = 0; i < 5; i++) {
        poly4_para.append(0);
    }

    for (int i = 0; i < 6; i++) {
        gauss2_para.append(0);
        fou2_para.append(0);
    }

}

settingDialog::~settingDialog()
{
    delete ui;
}

void settingDialog::on_buttonBox_accepted()
{

    double curve_para_a = ui->lineEdit_setting_a->text().toDouble();
    double curve_para_b = ui->lineEdit_setting_b->text().toDouble();
    double curve_para_c = ui->lineEdit_setting_c->text().toDouble();
    double curve_para_d = ui->lineEdit_setting_d->text().toDouble();
    double curve_para_e = ui->lineEdit_setting_e->text().toDouble();
    double curve_para_f = ui->lineEdit_setting_f->text().toDouble();

    QString curve_type = ui->comboBoxCurveType->currentText();
    if (curve_type == "Exponential2" || curve_type == "Cubic" ) {
        QVector<double> current_para;
        current_para.append(curve_para_a);
        current_para.append(curve_para_b);
        current_para.append(curve_para_c);
        current_para.append(curve_para_d);

        emit(sendCurvePara(current_para, curve_type));
    } else if (curve_type == "Polynomial4") {
        QVector<double> current_para;
        current_para.append(curve_para_a);
        current_para.append(curve_para_b);
        current_para.append(curve_para_c);
        current_para.append(curve_para_d);
        current_para.append(curve_para_e);

        emit(sendCurvePara(current_para, curve_type));
    } else if (curve_type == "Gaussian2") {
        QVector<double> current_para;
        current_para.append(curve_para_a);
        current_para.append(curve_para_b);
        current_para.append(curve_para_c);
        current_para.append(curve_para_d);
        current_para.append(curve_para_e);
        current_para.append(curve_para_f);

        emit(sendCurvePara(current_para, curve_type));
    } else if (curve_type == "Fourier2") {
        QVector<double> current_para;
        current_para.append(curve_para_a);
        current_para.append(curve_para_b);
        current_para.append(curve_para_c);
        current_para.append(curve_para_d);
        current_para.append(curve_para_e);
        current_para.append(curve_para_f);

        emit(sendCurvePara(current_para, curve_type));
    }



}

void settingDialog::receiveUpdateCurvePara(QVector<double> exp2_para, QVector<double> cubic_para,
                                           QVector<double> poly4_para, QVector<double> gauss2_para,
                                           QVector<double> fou2_para, QString curveType){
    cout<<"receiveUpdateCurvePara: "<<endl;

    this->exp2_para = exp2_para;
    this->cubic_para = cubic_para;
    this->poly4_para = poly4_para;
    this->gauss2_para = gauss2_para;
    this->fou2_para = fou2_para;

    if (curveType == "Exponential2") {
        ui->comboBoxCurveType->setCurrentIndex(0);
        setCurveParameters(this->exp2_para, curveType);
    } else if (curveType == "Cubic") {
        ui->comboBoxCurveType->setCurrentIndex(1);
        setCurveParameters(this->cubic_para, curveType);
    } else if (curveType == "Polynomial4") {
        ui->comboBoxCurveType->setCurrentIndex(2);
        setCurveParameters(this->poly4_para, curveType);
    } else if (curveType == "Gaussian2") {
        ui->comboBoxCurveType->setCurrentIndex(3);
        setCurveParameters(this->gauss2_para, curveType);
    } else if (curveType == "Fourier2") {
        ui->comboBoxCurveType->setCurrentIndex(4);
        setCurveParameters(this->fou2_para, curveType);
    }
}

void settingDialog::on_comboBoxCurveType_currentIndexChanged(const QString &arg1)
{
    if (arg1 == "Exponential2") {
        setCurveParameters(this->exp2_para, arg1);
    } else if (arg1 == "Cubic") {
        setCurveParameters(this->cubic_para, arg1);
    } else if (arg1 == "Polynomial4") {
        setCurveParameters(this->poly4_para, arg1);
    } else if (arg1 == "Gaussian2") {
        setCurveParameters(this->gauss2_para, arg1);
    } else if (arg1 == "Fourier2") {
        setCurveParameters(this->fou2_para, arg1);
    }
    updateUI(arg1);
}

void settingDialog::setCurveParameters(QVector<double> para, QString curveType){

    if (curveType == "Exponential2" || curveType == "Cubic") {
        ui->lineEdit_setting_a->setText(QString::number(para[0]));
        ui->lineEdit_setting_b->setText(QString::number(para[1]));
        ui->lineEdit_setting_c->setText(QString::number(para[2]));
        ui->lineEdit_setting_d->setText(QString::number(para[3]));
    } else if (curveType == "Polynomial4") {
        ui->lineEdit_setting_a->setText(QString::number(para[0]));
        ui->lineEdit_setting_b->setText(QString::number(para[1]));
        ui->lineEdit_setting_c->setText(QString::number(para[2]));
        ui->lineEdit_setting_d->setText(QString::number(para[3]));
        ui->lineEdit_setting_e->setText(QString::number(para[4]));
    } else if (curveType == "Gaussian2") {
        ui->lineEdit_setting_a->setText(QString::number(para[0]));
        ui->lineEdit_setting_b->setText(QString::number(para[1]));
        ui->lineEdit_setting_c->setText(QString::number(para[2]));
        ui->lineEdit_setting_d->setText(QString::number(para[3]));
        ui->lineEdit_setting_e->setText(QString::number(para[4]));
        ui->lineEdit_setting_f->setText(QString::number(para[5]));
    } else if (curveType == "Fourier2") {
        ui->lineEdit_setting_a->setText(QString::number(para[0]));
        ui->lineEdit_setting_b->setText(QString::number(para[1]));
        ui->lineEdit_setting_c->setText(QString::number(para[2]));
        ui->lineEdit_setting_d->setText(QString::number(para[3]));
        ui->lineEdit_setting_e->setText(QString::number(para[4]));
        ui->lineEdit_setting_f->setText(QString::number(para[5]));
    }

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

    if (path.contains("exp2_parameters.txt")) {
        curveType = "exponential curve";
        ui->comboBoxCurveType->setCurrentIndex(0);

        ui->lineEdit_setting_a->setText(paras[0]);
        ui->lineEdit_setting_b->setText(paras[1]);
        ui->lineEdit_setting_c->setText(paras[2]);
        ui->lineEdit_setting_d->setText(paras[3]);

        updateUI("Exponential2");
    } else if (path.contains("cubic_parameters.txt")) {
        curveType = "cubic curve";
        ui->comboBoxCurveType->setCurrentIndex(1);

        ui->lineEdit_setting_a->setText(paras[0]);
        ui->lineEdit_setting_b->setText(paras[1]);
        ui->lineEdit_setting_c->setText(paras[2]);
        ui->lineEdit_setting_d->setText(paras[3]);

        updateUI("Cubic");
    } else if (path.contains("poly4_parameters.txt")) {
        curveType = "polynomial4 curve";
        ui->comboBoxCurveType->setCurrentIndex(2);

        ui->lineEdit_setting_a->setText(paras[0]);
        ui->lineEdit_setting_b->setText(paras[1]);
        ui->lineEdit_setting_c->setText(paras[2]);
        ui->lineEdit_setting_d->setText(paras[3]);
        ui->lineEdit_setting_e->setText(paras[4]);

        updateUI("Polynomial4");
    } else if (path.contains("gauss2_parameters.txt")) {
        curveType = "gaussian2 curve";
        ui->comboBoxCurveType->setCurrentIndex(3);

        ui->lineEdit_setting_a->setText(paras[0]);
        ui->lineEdit_setting_b->setText(paras[1]);
        ui->lineEdit_setting_c->setText(paras[2]);
        ui->lineEdit_setting_d->setText(paras[3]);
        ui->lineEdit_setting_e->setText(paras[4]);
        ui->lineEdit_setting_f->setText(paras[5]);

        updateUI("Polynomial4");
    } else if (path.contains("fou2_parameters.txt")) {
        curveType = "fourier2 curve";
        ui->comboBoxCurveType->setCurrentIndex(4);

        ui->lineEdit_setting_a->setText(paras[0]);
        ui->lineEdit_setting_b->setText(paras[1]);
        ui->lineEdit_setting_c->setText(paras[2]);
        ui->lineEdit_setting_d->setText(paras[3]);
        ui->lineEdit_setting_e->setText(paras[4]);
        ui->lineEdit_setting_f->setText(paras[5]);

        updateUI("Polynomial4");
    }else{
        QMessageBox msgBox;
        msgBox.setWindowTitle("Notification");
        msgBox.setText("Could not load this file.");
        msgBox.exec();
        return;
    }


   QMessageBox msgBox;
   msgBox.setWindowTitle("Notification");
   msgBox.setText("Import " + curveType + " successfully.");
   msgBox.exec();
}

void settingDialog::updateUI(QString curveType){
    if (curveType == "Exponential2") {
        QString equation = "f(x) = a*exp(b*x) + c*exp(d*x)";
        ui->labelCurveEquation->setText("Curve Equation: " + equation);

        ui->label_setting_a->setText("a");
        ui->label_setting_b->setText("b");
        ui->label_setting_c->setText("c");
        ui->label_setting_d->setText("d");

        ui->label_setting_e->hide();
        ui->lineEdit_setting_e->hide();
        ui->label_setting_f->hide();
        ui->lineEdit_setting_f->hide();
    } else if (curveType == "Cubic") {
        QString equation = "f(x) = p1*x^3 + p2*x^2 + p3*x + p4";
        ui->labelCurveEquation->setText("Curve Equation: " + equation);

        ui->label_setting_a->setText("p1");
        ui->label_setting_b->setText("p2");
        ui->label_setting_c->setText("p3");
        ui->label_setting_d->setText("p4");

        ui->label_setting_e->hide();
        ui->lineEdit_setting_e->hide();
        ui->label_setting_f->hide();
        ui->lineEdit_setting_f->hide();
    } else if (curveType == "Polynomial4") {
        QString equation = "f(x) = p1*x^4 + p2*x^4 + p3*x^2 + p4*x + p5";
        ui->labelCurveEquation->setText("Curve Equation: " + equation);

        ui->label_setting_a->setText("p1");
        ui->label_setting_b->setText("p2");
        ui->label_setting_c->setText("p3");
        ui->label_setting_d->setText("p4");
        ui->label_setting_e->setText("p5");

        ui->label_setting_e->show();
        ui->lineEdit_setting_e->show();
        ui->label_setting_f->hide();
        ui->lineEdit_setting_f->hide();
    } else if (curveType == "Gaussian2") {
        QString equation = "f(x) = a1*exp(-((x-b1)/c1)^2) + a2*exp(-((x-b2)/c2)^2)";
        ui->labelCurveEquation->setText("Curve Equation: " + equation);

        ui->label_setting_a->setText("a1");
        ui->label_setting_b->setText("b1");
        ui->label_setting_c->setText("c1");
        ui->label_setting_d->setText("a2");
        ui->label_setting_e->setText("b2");
        ui->label_setting_f->setText("c2");

        ui->label_setting_e->show();
        ui->lineEdit_setting_e->show();
        ui->label_setting_f->show();
        ui->lineEdit_setting_f->show();
    } else if (curveType == "Fourier2") {
        QString equation = "f(x) = a0 + a1*cos(x*w) + b1*sin(x*w) + a2*cos(2*x*w) + b2*sin(2*x*w)";
        ui->labelCurveEquation->setText("Curve Equation: " + equation);

        ui->label_setting_a->setText("a0");
        ui->label_setting_b->setText("a1");
        ui->label_setting_c->setText("b1");
        ui->label_setting_d->setText("a2");
        ui->label_setting_e->setText("b2");
        ui->label_setting_f->setText("w");

        ui->label_setting_e->show();
        ui->lineEdit_setting_e->show();
        ui->label_setting_f->show();
        ui->lineEdit_setting_f->show();
    }
}
