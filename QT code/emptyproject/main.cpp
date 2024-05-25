#include <QApplication>
#include <QDialog>
#include <QLabel>
#include <QPushButton>
#include <QVBoxLayout>
#include"ui_emptyproject.h"
#include"hellodialog.h"
#include"hellodialog2.h"
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
//    QDialog w;
//    QLabel label("hello", &w);
//    label.setText("hello");
//    w.resize(400,300);
//    label.move(120,120);
//    Ui::Dialog ui;
//    ui.setupUi(&w);
//    HelloDialog dialog;
//    dialog.show();
//    w.show();
    HelloDialog2 dialog;
    dialog.show();
    return a.exec();
}
