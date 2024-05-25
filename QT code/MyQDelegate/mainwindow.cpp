#include "mainwindow.h"
#include "ui_mainwindow.h"
#include<QStandardItemModel>
#include<QTableView>
#include"spinboxdelegage.h"
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    //创建一个具有7行4列的标准项模型，并将其父对象设置为 MainWindow 实例。这个模型通常用于存储和管理表格数据。
    auto * model=new QStandardItemModel(7,4,this);
    for(int row=0;row<7;row++)
    {
        for(int column=0;column<4;column++)
        {
            QStandardItem * item=new QStandardItem(QString("%1").arg(row*4+column));
            model->setItem(row,column,item);
        }


    }
    QTableView *_table_view=new QTableView;
    //这使得表格能够显示 model 中的数据。模型中存储的每一个项都将在表视图中以表格的形式显示。
    _table_view->setModel(model);
    //这里将 _table_view 设置为窗口的中心部件，意味着 _table_view 将占据主窗口的主要区域。
    setCentralWidget(_table_view);
    this->resize(800,800);

    //创建一个具有7行4列的标准项模型，并将其父对象设置为 MainWindow 实例。这个模型通常用于存储和管理表格数据。
    auto * model2=new QStandardItemModel(7,4,this);
    for(int row=0;row<7;row++)
    {
        for(int column=0;column<4;column++)
        {
            QStandardItem * item=new QStandardItem(QString("%1").arg(row*4+column));
            model2->setItem(row,column,item);
        }


    }
    //创建代理
    auto *delegate=new SpinBoxDelegage(this);
    QTableView *_table_view2=new QTableView();//添加this即产生副窗口
    //这使得表格能够显示 model 中的数据。模型中存储的每一个项都将在表视图中以表格的形式显示。
    _table_view2->setModel(model2);
    _table_view2->setItemDelegate(delegate);
    _table_view2->show();
    _table_view2->resize(800,800);
}

MainWindow::~MainWindow()
{
    delete ui;
    delete _table_view2;
}

