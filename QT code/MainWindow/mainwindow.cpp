#include "mainwindow.h"
#include "ui_mainwindow.h"
#include<QtDebug>
#include<QTextEdit>
#include<QMdiSubWindow>
#include<QMenu>
#include<QIcon>
#include<QKeySequence>
#include"myaction.h"
#include<QToolButton>
#include<QSpinBox>
#include<QLabel>
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{

    ui->setupUi(this);
    //添加菜单项
    QMenu *editMenu =ui->menubar->addMenu(tr("编辑(&E)"));
    editMenu->addSeparator();//分隔符
    QAction *action_Open=editMenu->addAction(QIcon(":/res/Edit.png"),tr("打开文件"));
    action_Open->setShortcut(QKeySequence("Ctr+o"));
    connect(action_Open,&QAction::triggered,this,&MainWindow::on_actionEdit_triggered);

    QActionGroup *group=new QActionGroup(this);
    QAction* action_L=group->addAction(tr("左对齐(&L)"));
    action_L->setCheckable(true);
    QAction* action_R=group->addAction(tr("右对齐(&L)"));
    action_R->setCheckable(true);
    QAction* action_C=group->addAction(tr("居中对齐(&L)"));
    action_C->setCheckable(true);
    editMenu->addSeparator();
    editMenu->addAction(action_L);
    editMenu->addAction(action_R);
    editMenu->addAction(action_C);
    MyAction *action=new MyAction(this);//创建动作
    editMenu->addAction(action);
    connect(action,&MyAction::getText,this,&MainWindow::slot_set_text);
    QToolButton *toolBtn =new QToolButton(this);
    toolBtn->setText(tr("颜色"));
    ui->toolBar->addWidget(toolBtn);
    QMenu *colorMenu =new QMenu(this);
    colorMenu->addAction(tr("红色"));
    colorMenu->addAction(tr("绿色"));
    toolBtn->setMenu(colorMenu);
    toolBtn->setPopupMode(QToolButton::MenuButtonPopup);
    ui->toolBar->addSeparator();
    QSpinBox *spinbox =new QSpinBox(this);
    ui->toolBar->addWidget(spinbox);
    //显示2ms
    ui->statusbar->showMessage(tr("欢迎使用"),2000);
    //永久显示状态标签
    QLabel *permnant= new QLabel(this);
    permnant->setFrameStyle(QFrame::Box||QFrame::Sunken);
    permnant->setText("2918737400@qq.com");
    ui->statusbar->addPermanentWidget(permnant);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_actionshowdock_D_triggered()
{
    qDebug() << "显示dock widget" << endl;
    ui->dockWidget->show();
}

void MainWindow::on_actionNew_N_triggered()
{
    QTextEdit *textEdit =new QTextEdit(this);
    auto childWindow =ui->mdiArea->addSubWindow(textEdit);
    childWindow->setWindowTitle(tr("文本编辑子窗口"));
    childWindow->show();
}
void MainWindow::on_actionEdit_triggered()//槽函数
{
    qDebug()<<"打开文件..."<<endl;
}

void MainWindow::slot_set_text(const QString &string)
{
    ui->textEdit->setText(string);
}
