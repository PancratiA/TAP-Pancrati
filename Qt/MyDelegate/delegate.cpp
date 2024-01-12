#include "delegate.h"

Delegate::Delegate(QObject *parent)
    : QItemDelegate{parent}
{

}

QWidget* Delegate::createEditor(QWidget *parent, const QStyleOptionViewItem &option, const QModelIndex &index)
{
    QSpinBox *editor = new QSpinBox(parent);
    editor->setMinimum(0);
    editor->setMaximum(100);
    return editor;
}

void Delegate::setEditorData(QWidget *editor, const QModelIndex &index)
{
    int value = index.model()->data(index, Qt::EditRole).toInt();
    QSpinBox *spinbox = static_cast<QSpinBox*>(editor);
    spinbox->setValue(value);
}

void Delegate::setModelData(QWidget *editor, QAbstractItemModel *model, const QModelIndex &index)
{
  //merge  fara din cauza versiunii
}

void Delegate::updateEditorGeometry(QWidget *editor, const QStyleOptionViewItem &option, const QModelIndex &index)
{
     //merge  fara din cauza versiunii
}
