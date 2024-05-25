#include "maindialog.h"
#include "ui_maindialog.h"
#include"childdialog.h"
MainDialog::MainDialog(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::MainDialog)
{
    ui->setupUi(this);
}

MainDialog::~MainDialog()
{
    delete ui;
}


void MainDialog::on_EnterChildBtn_clicked()
{
    close();//和hide作用一样，主界面并没有退出
    childDialog Mydialog;
    if(Mydialog.exec()==QDialog::Accepted)
    {
        this->show();
    }else{
        return;
    }
}
