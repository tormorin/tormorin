#include "mainwindow.h"
#include "ui_mainwindow.h"
#include<QRegExpValidator>
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    QString ip_mask="000.000.000.000;_";//_默认填充横线
    ui->ip_Edit->setInputMask(ip_mask);
    QString mac_mask="HH:HH:HH:HH:HH:HH;";
    ui->Mac_Edit->setInputMask(mac_mask);
    ui->pwd_Edit->setEchoMode(QLineEdit::Password);
    //ui->pwd_Edit->setEchoMode(QLineEdit::NoEcho);看不见输入
    //ui->pwd_Edit->setEchoMode(QLineEdit::PasswordEchoOnEdit);
    QRegExp regx("[a-zA-Z0-9_-]+@[a-zA-Z0-9]+\.[a-zA-Z0-9]+");//+ @前至少要有一个字符  * @前可以0个字符
    QValidator *validator=new QRegExpValidator(regx,ui->email_Edit);
    ui->email_Edit->setValidator(validator);
}

MainWindow::~MainWindow()
{
    delete ui;
}

