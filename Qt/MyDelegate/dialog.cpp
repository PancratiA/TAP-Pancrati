#include "dialog.h"
#include "ui_dialog.h"

Dialog::Dialog(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::Dialog)
{
    ui->setupUi(this);
    mydelegate = new Delegate(this);
    model = new QStandardItemModel(4,2, this); //no  rows, columns, parent
    for(int row=0 ; row<4 ; ++row)
    {
        for(int col = 0 ; col <2 ; ++col)
        {
            QModelIndex index=model->index(row,col,QModelIndex()); // preia index
            model->setData(index,0);
        }
    }
    ui->tableView->setModel(model);
    ui->tableView->setItemDelegate(mydelegate);
}

Dialog::~Dialog()
{
    delete ui;
}

