#ifndef CROPPINGDIALOG_H
#define CROPPINGDIALOG_H

#include <QWidget>
#include <QLabel>
#include <QCheckBox>
#include <QPushButton>
#include <QVBoxLayout>
#include <imagecropper.h>

#include <iostream>

class ImageCropper;
class QLabel;

using namespace std;

class CroppingDialog: public QWidget
{
    Q_OBJECT
public:
    explicit CroppingDialog(QWidget* _parent = 0);
    ~CroppingDialog();
signals:
    void sendCroppedStripArea(float);
    void sendStripAdjustedFlag(float);

private slots:
    void receiveCroppingImage(QImage);
    void closeCropWidget();
    void crop();
private:
    QVBoxLayout *layout;
    ImageCropper* m_imageCropper;
    QLabel* m_croppedImage;
    QImage currentImg;
    QPushButton* cropBtn;
    QPushButton* cropCancelBtn;
    QPixmap croppedStrip;
};

#endif // CROPPINGDIALOG_H
