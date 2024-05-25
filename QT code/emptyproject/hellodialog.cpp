#include "hellodialog.h"

HelloDialog::HelloDialog():_ui(new Ui::Dialog)//初始化列表，_ui为Ui::Dialog类型
  //创建_ui对象的目的是实例化UI界面对象，让UI组件得以在界面中展示和操作。
{
    _ui->setupUi(this);
}
HelloDialog::~HelloDialog(){
    delete _ui;
}
