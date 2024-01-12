#ifndef DELEGATE_H
#define DELEGATE_H

#include <QItemDelegate>
#include <QModelIndex>
#include <QObject>
#include <QSize>
#include <QSpinBox>
#include <QWidget>
#include <QModelIndex>
class Delegate : public QItemDelegate
{
public:
    explicit Delegate(QObject *parent = nullptr);

    //functii din Qitem delegate

    QWidget *createEditor(QWidget *parent, const QStyleOptionViewItem &option, const QModelIndex &index);
     void setEditorData(QWidget *editor, const QModelIndex &index);
    void setModelData(QWidget *editor, QAbstractItemModel *model, const QModelIndex &index);
    void updateEditorGeometry(QWidget *editor, const QStyleOptionViewItem &option, const QModelIndex &index);
};

#endif // DELEGATE_H
