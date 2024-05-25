#include "mainwindow.h"
#include "ui_mainwindow.h"
#include<QColorDialog>
#include<QDebug>
#include<QDir>
#include<QFileDialog>
#include<QInputDialog>
#include<QMessageBox>
#include<QProgressDialog>//进度对话框
#include<QTimer>
#include<QWizard>//向导对话框
#include<QBoxLayout>
#include<QLabel>
#include<QButtonGroup>
#include<QRadioButton>
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    _counter=0;
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_colorBtn_clicked()
{
    QColorDialog colorDlg(Qt::blue,this);
    colorDlg.setOption(QColorDialog::ShowAlphaChannel);
    colorDlg.exec();
    QColor color =colorDlg.currentColor();
    qDebug()<<"color is"<<color;

}

void MainWindow::on_TextBtn_clicked()
{
    QString path =QDir::currentPath();
    QString title=tr("文件对话框");
    QString filter=tr("文本文件(*.txt);;图片文件(*.jpg *.gif *.png);;所有文件(*.*");//过滤器
    QString aFileName=QFileDialog::getOpenFileName(this,title,path,filter);
    qDebug()<<aFileName<<endl;
}



void MainWindow::on_IntBtn_clicked()
{
    bool ok =false;
    auto intdata=QInputDialog::getInt(this,tr("数字输入对话框"),tr("请输入提示"),200,-200,400,10,&ok);
    if(ok){
       qDebug()<<intdata<<endl;
    }
}



void MainWindow::on_pushButton_clicked()
{
    bool ok=false;
    auto floatdata=QInputDialog::getDouble(this,tr("浮点数输入对话框"),tr("请输入浮点数"),0.1,-2,4,2,&ok);
    if(ok){
        qDebug()<<floatdata<<endl;
    }
}


void MainWindow::on_pushButton_2_clicked()
{
    QStringList items;//线性访问
    items<<tr("条目1")<<tr("条目2");
    bool ok=false;
    auto itemData=QInputDialog::getItem(this,tr("条目对话框"),tr("输入或选择目标"),items,0,true,&ok);//true让其可编译
    if(ok){
        qDebug()<<"item is"<<itemData<<endl;
    }

}

void MainWindow::on_pushButton_3_clicked()
{
    auto ret=QMessageBox::question(this,tr("提问对话框"),tr("what?"),QMessageBox::Yes,QMessageBox::No);
    qDebug()<<ret<<endl;
    if(ret==QMessageBox::Yes){
        qDebug()<<"ret is"<<ret;
        qDebug()<<"r"<<endl;
    }else{
        return;
    }
   auto ret2 = QMessageBox::information(this,tr("通知对话框"),tr("hello"),QMessageBox::StandardButton::Yes);
   if(ret2==QMessageBox::Yes)
   {
       qDebug()<<"ret2 is"<<ret2;
   }else{
       return;
   }
   auto rets=QMessageBox::warning(this,tr("警告对话框"),tr("hello"),QMessageBox::Yes);
   if(rets==QMessageBox::Yes){
       qDebug()<<"rets is"<<rets;
   }else{
       return;
   }
   auto ret4 =QMessageBox::critical(this,tr("关键提示对话框"),tr("hello"),QMessageBox::Ok);
   if(ret4==QMessageBox::Ok){
       qDebug()<<"ret4 is"<<ret4<<endl;
   }
}

void MainWindow::on_pushButton_4_clicked()
{
    _progressDialog=new QProgressDialog(tr("正在复制"),("取消复制"),0,5000,this);
    _progressDialog->setWindowTitle("文件复制进度对话框");
    _progressDialog->setWindowModality(Qt::ApplicationModal);
    _timer=new QTimer(this);//定时器
    connect(_timer,&QTimer::timeout,this,&MainWindow::on_updateProgressDialog);
    connect(_progressDialog,&QProgressDialog::canceled,this,&MainWindow::on_cancelProgressDialog);//取消逻辑
    _timer->start(2);//每2ms发一次timeout事件，更新一次函数
}
void MainWindow::on_updateProgressDialog()
{
    _counter++;//每收到一个定时器消息，counter+1
    if(_counter>5000){
        _timer->stop();
        delete _timer;
        _timer=nullptr;
        delete _progressDialog;
        _counter=0;
        return;
    }
    _progressDialog->setValue(_counter);
}
void MainWindow::on_cancelProgressDialog()
{
    _timer->stop();
    delete _timer;
    _timer =nullptr;
    delete _progressDialog;
    _progressDialog =nullptr;
    _counter=0;
    return;
}



void MainWindow::on_pushButton_5_clicked()
{
    QWizard wizard(this);
    wizard.setWindowTitle("交友");
    auto page1=new QWizardPage();
    page1->setTitle("引导");
    auto label1=new QLabel();
    label1->setText(tr("找到人选"));
    auto layout=new QVBoxLayout();
    layout->addWidget(label1);//label加到布局里
    page1->setLayout(layout);//布局设置到向导页上
    wizard.addPage(page1);
    QWizardPage *page2=new QWizardPage();
    page2->setTitle("选择类型");
    auto group =new QButtonGroup(page2);
    auto btn1 =new QRadioButton();
    btn1->setText("one");
    group->addButton(btn1);

    auto btn2 =new QRadioButton();
    btn2->setText("two");
    group->addButton(btn2);

    auto btn3 =new QRadioButton();
    btn3->setText("three");
    group->addButton(btn3);

    auto btn4 =new QRadioButton();
    btn4->setText("four");
    group->addButton(btn4);

    auto layout2=new QVBoxLayout();
    for(int i=0;i<group->buttons().size();i++)
    {
        layout2->addWidget(group->buttons()[i]);
    }page2->setLayout(layout2);
    wizard.addPage(page2);

    QWizardPage *page3=new QWizardPage();
    page3->setTitle(tr("完成"));
    auto label3 =new QLabel();
    label3->setText(tr("谢谢参与"));
    QVBoxLayout *layout3=new QVBoxLayout();
    layout3->addWidget(label3);
    page3->setLayout(layout3);
    wizard.addPage(page3);


    wizard.show();
    wizard.exec();
}
