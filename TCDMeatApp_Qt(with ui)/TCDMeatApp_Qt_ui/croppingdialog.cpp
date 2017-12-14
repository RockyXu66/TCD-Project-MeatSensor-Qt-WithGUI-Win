#include "croppingdialog.h"



CroppingDialog::CroppingDialog(QWidget* _parent): QWidget(_parent)
{


//    QPushButton* cropBtn = new QPushButton("crop", this);

//
}

CroppingDialog::~CroppingDialog(){

}

void CroppingDialog::receiveCroppingImage(QImage img){

    currentImg = img;

    m_imageCropper = new ImageCropper(this);
    layout = new QVBoxLayout(this);
    cropBtn = new QPushButton("Crop", this);
    cropCancelBtn = new QPushButton("Cancel", this);
    m_croppedImage = new QLabel(this);

    m_imageCropper->resize( 800, 600 );
//    m_imageCropper->setProportion(QSize(4,3));
    m_imageCropper->setImage(QPixmap::fromImage(currentImg));
    m_imageCropper->setBackgroundColor( Qt::lightGray );
    m_imageCropper->setCroppingRectBorderColor( Qt::green);

//    QCheckBox* fixedProportionsCombo = new QCheckBox("Fix proportion to (4x3)", this);
//    connect(fixedProportionsCombo, SIGNAL(toggled(bool)),
//            m_imageCropper, SLOT(setProportionFixed(bool)));

    connect(cropCancelBtn, SIGNAL(clicked()), this, SLOT(closeCropWidget()));
    connect(cropBtn, SIGNAL(clicked()), this, SLOT(crop()));

    this->setWindowTitle("Cropping");
    layout->addWidget(m_imageCropper);

//    QVBoxLayout *layout = new QVBoxLayout(this);
//    layout->addWidget(fixedProportionsCombo);
    layout->addWidget(cropBtn);
    layout->addWidget(cropCancelBtn);
}

void CroppingDialog::crop(){
//    m_croppedImage->setPixmap(m_imageCropper->cropImage());
    croppedStrip = m_imageCropper->cropImage();
//    cout<<"width: "<<croppedStrip.size().width()<<endl;
//    cout<<"height: "<<croppedStrip.size().height()<<endl;
//    cout<<"whole width: "<<currentImg.size().width()<<endl;
//    cout<<"whole height: "<<currentImg.size().height()<<endl;
    float croppedStripSize = croppedStrip.size().width() * croppedStrip.size().height();
    emit(sendCroppedStripArea(croppedStripSize));
    emit(sendStripAdjustedFlag(croppedStripSize));
    closeCropWidget();
}

void CroppingDialog::closeCropWidget(){
    delete m_imageCropper;
    delete m_croppedImage;
    delete cropBtn;
    delete cropCancelBtn;
    delete layout;
    this->close();
}

