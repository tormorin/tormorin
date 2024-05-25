#include "childdialog.h"
#include "ui_childdialog.h"

childDialog::childDialog(QWidget *parent) :
    QDialog(parent),_parent(parent),
    ui(new Ui::childDialog)
{
    ui->setupUi(this);
    connect(ui->showMainWindow,&QPushButton::clicked,this,&childDialog::showMainWindow);
}

childDialog::~childDialog()
{
    delete ui;
}

void childDialog::showMainWindow()
{
    this->hide();
    //_parent->show();//_parent指向主界面
    emit showMainSig();//字界面发出信号
}
