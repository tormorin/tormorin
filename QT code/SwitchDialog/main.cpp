#include "maindialog.h"

#include <QApplication>
#include"childdialog.h"
#include<QDebug>
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainDialog w;
    childDialog childDlg;
    auto res=childDlg.exec();
    if(res==QDialog::Accepted){
         qDebug()<<"Child Dialog exec returned ,res is"<<res<<endl;
        w.show();
        a.exec();
    }else{
        qDebug()<<"Child Dialog exit,res is"<<res<<endl;
        return 0;
    }
    //w.show();
    //return a.exec();
}
