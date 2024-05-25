#ifndef CHILDDIALOG_H
#define CHILDDIALOG_H

#include <QDialog>

namespace Ui {
class childDialog;
}

class childDialog : public QDialog
{
    Q_OBJECT//声明才能使用信号和槽函数，声明前提要继承QT界面类
signals:
    void showMainSig();//给主界面信号
public:
    explicit childDialog(QWidget *parent = nullptr);
    ~childDialog();
public slots:
    void showMainWindow();
private:
    Ui::childDialog *ui;
    QWidget * _parent;
};

#endif // CHILDDIALOG_H
