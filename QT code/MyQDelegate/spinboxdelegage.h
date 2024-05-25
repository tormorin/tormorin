#ifndef SPINBOXDELEGAGE_H
#define SPINBOXDELEGAGE_H

#include<QItemDelegate>
class SpinBoxDelegage : public QItemDelegate
{
    Q_OBJECT
public:
    SpinBoxDelegage(QObject* parent=0);
    // editing
    QWidget *createEditor(QWidget *parent,
                          const QStyleOptionViewItem &option,
                          const QModelIndex &index) const override;//可覆盖

    void setEditorData(QWidget *editor, const QModelIndex &index) const override;
    void setModelData(QWidget *editor, QAbstractItemModel *model, const QModelIndex &index) const override;

    void updateEditorGeometry(QWidget *editor,
                              const QStyleOptionViewItem &option,
                              const QModelIndex &index) const override;
};

#endif // SPINBOXDELEGAGE_H
