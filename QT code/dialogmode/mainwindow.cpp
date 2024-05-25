#include "mainwindow.h"
#include "ui_mainwindow.h"
#include<QDialog>
#include<QtDebug>
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{//模态对话框和非模态对话框
    ui->setupUi(this);
//    QDialog w(this);
//    w.show();
//    qDebug()<<"mianwindow construction"<<endl;
//    auto w = new QDialog(this);//父窗口回收，子窗口也会回收
//    w->setModal(true);//设置模态和非模态
//    w->show();
//    QDialog w;
//    w.exec();//阻塞，构造函数，下面的代码不会执行
      auto s= new QDialog(this);//用了堆，是mian的子窗口
      s->setWindowFlags(Qt::WindowStaysOnTopHint | Qt::Dialog);  //子窗口显示在最顶层
      s->show();

}

MainWindow::~MainWindow()
{
    delete ui;
}

