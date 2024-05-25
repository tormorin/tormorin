#include "hellodialog2.h"
#include "ui_hellodialog2.h"

HelloDialog2::HelloDialog2(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::HelloDialog2)
{
    ui->setupUi(this);
}

HelloDialog2::~HelloDialog2()
{
    delete ui;
}
