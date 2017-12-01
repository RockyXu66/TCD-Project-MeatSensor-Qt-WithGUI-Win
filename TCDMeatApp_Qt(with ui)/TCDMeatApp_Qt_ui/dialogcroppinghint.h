#ifndef DIALOGCROPPINGHINT_H
#define DIALOGCROPPINGHINT_H

#include <QDialog>

namespace Ui {
class DialogCroppingHint;
}

class DialogCroppingHint : public QDialog
{
    Q_OBJECT

public:
    explicit DialogCroppingHint(QWidget *parent = 0);
    ~DialogCroppingHint();

private:
    Ui::DialogCroppingHint *ui;
};

#endif // DIALOGCROPPINGHINT_H
