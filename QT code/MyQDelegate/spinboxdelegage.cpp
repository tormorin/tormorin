#include "spinboxdelegage.h"
#include<QSpinBox>
SpinBoxDelegage::SpinBoxDelegage(QObject * parent):QItemDelegate(parent)
{

}

QWidget *SpinBoxDelegage::createEditor(QWidget *parent, const QStyleOptionViewItem &option, const QModelIndex &index) const
{
    QSpinBox *editor =new QSpinBox(parent);//parent为父窗口
    editor->setMinimum(0);
    editor->setMaximum(100);
    return editor;

}

void SpinBoxDelegage::setEditorData(QWidget *editor, const QModelIndex &index) const
{
    //index.model(): 这个方法返回一个指向模型的指针，即与该索引关联的模型。
    /*Qt::EditRole: 这是一个指定的角色，用于返回与编辑操作相关的数据。
    通常，这与显示的数据相同，除非模型被设计为在编辑时显示不同的数据*/
    /*toInt(): 这是 QVariant 类的方法，将变量转换为整数。
     data方法返回一个 QVariant 类型的对象，它可以存储各种类型的数据。*/
    int value=index.model()->data(index,Qt::EditRole).toInt();
    /*static_cast<Type*>(variable): 这是C++中的一种类型转换，用于在类型之间进行显式转换，它在编译时检查类型的有效性。
     在这个例子中，static_cast 尝试将 editor 变量转换为 QSpinBox* 类型。*/
    auto *spinbox=static_cast<QSpinBox*>(editor);
    spinbox->setValue(value);
}

void SpinBoxDelegage::setModelData(QWidget *editor, QAbstractItemModel *model, const QModelIndex &index) const
{
    auto *spinbox=static_cast<QSpinBox*>(editor);
    spinbox->interpretText();//刷新
    int value=spinbox->value();// 获取 QSpinBox 的当前值
    model->setData(index,value,Qt::EditRole);//将值更新到模型指定位置
}

void SpinBoxDelegage::updateEditorGeometry(QWidget *editor, const QStyleOptionViewItem &option, const QModelIndex &index) const
{
    //显示
    //调用eidtor
    editor->setGeometry(option.rect);//设置更新的区域
}
