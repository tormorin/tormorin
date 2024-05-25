#include "mainwindow.h"
#include "ui_mainwindow.h"
#include<QDialog>
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    //qt4方式连接信号和槽函数
    //connect(ui->showChildButton,SIGNAL(clicked(bool)),this,SLOT(showchildDialog()));//连接信号和槽函数
    //qt4 风格的SLOT和SIGNAL只是宏转换，字符串定义不能检测编译器错误
    //connect(ui->showChildButton,SIGNAL(clicked(bool)),this,SLOT(showchildDialog(1，2，3)));//连接信号和槽函数
    //推荐qt5方式:不需要写槽函数参数，免去了参数传递的麻烦
    connect(ui->showChildButton,&QPushButton::clicked,this,&MainWindow::showchildDialog);
    _child_dialog=new childDialog(this);
    //connect(_child_dialog,&childDialog::showMainSig,this,&MainWindow::showMainDialog);
    connect(_child_dialog,&childDialog::showMainSig,this,[this](){
        this->_child_dialog->hide();
        this->show();
    });//[=]捕获所有


}

MainWindow::~MainWindow()
{
    delete ui;
    if(_child_dialog){
        delete _child_dialog;
        _child_dialog=nullptr;
    }
}

void MainWindow::showchildDialog()//创建一个对话框类,用于点击生成子窗口
{
//    auto *childDialog =new QDialog(this);
//    childDialog->show();
    _child_dialog->show();
    this->hide();
}

void MainWindow::showMainDialog()//主界面接收信号
{
    this->show();
    _child_dialog->hide();
}

