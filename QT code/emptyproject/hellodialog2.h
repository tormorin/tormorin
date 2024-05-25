#ifndef HELLODIALOG2_H
#define HELLODIALOG2_H

#include <QDialog>

namespace Ui {
class HelloDialog2;
}

class HelloDialog2 : public QDialog
{
    Q_OBJECT

public:
    explicit HelloDialog2(QWidget *parent = nullptr);
    ~HelloDialog2();

private:
    Ui::HelloDialog2 *ui;
};

#endif // HELLODIALOG2_H
