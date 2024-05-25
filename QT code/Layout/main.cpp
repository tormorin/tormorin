#include "login.h"
#include"register.h"
#include <QApplication>
//前提：学会智能指针
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    std::shared_ptr<Login> w=make_shared<Login>();
    w->initSignals();
    w->show();
    return a.exec();
}
