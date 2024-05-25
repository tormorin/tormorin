#include "myaction.h"
#include<QSplitter>
#include<QLabel>

MyAction::MyAction(QObject *parent):QWidgetAction(parent)
{
    //创建行编辑器
    lineEdit = new QLineEdit();
    //连接信号和槽,触发回车信号和发送文本的槽函数关联
    connect(lineEdit,&QLineEdit::returnPressed,this,&MyAction::sendText);
}

QWidget *MyAction::createWidget(QWidget *parent)
{
    //parent不继承QMenu,并且不继承QToolBar
    if(!(parent->inherits("QMenu"))&&!(parent->inherits("QToolBar"))){
        return 0;
    }
   QSplitter *splitter =new QSplitter(parent);
   QLabel *label =new QLabel;
   label->setText(tr("插入文本"));
   splitter->addWidget(label);
   splitter->addWidget(lineEdit);
   return splitter;
}

void MyAction::sendText()
{
    emit getText(lineEdit->text());
    lineEdit->clear();
}
