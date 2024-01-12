#include "dialog.h"
#include "ui_dialog.h"

Dialog::Dialog(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::Dialog)
{
    ui->setupUi(this);
    model = new QStringListModel(this); //this=parent
    QStringList list;
    list << "cats " <<"dogs"<<"birds";
    model -> setStringList(list);
    //here we tie the model and the views together
    ui->listView->setModel(model);
    ui->comboBox->setModel(model);
    ui->listView->setEditTriggers(QAbstractItemView::AnyKeyPressed |QAbstractItemView::DoubleClicked); //ne lasa sa editam cu dublu click fiecare camp in ui

}

Dialog::~Dialog()
{
    delete ui;
}


void Dialog::on_pushButton_clicked()
{//add
    int row =model->rowCount();
    model->insertRows(row,1);
    QModelIndex index=model->index(row);
    ui->listView->setCurrentIndex(index);
    ui->listView->edit(index);

}


void Dialog::on_pushButton_2_clicked()
{
    //insert
    int row =ui->listView->currentIndex().row();
    model->insertRows(row,1);
    QModelIndex index=model->index(row);
    ui->listView->setCurrentIndex(index);
    ui->listView->edit(index);
}


void Dialog::on_pushButton_3_clicked()
{
    //delete
    model->removeRows(ui->listView->currentIndex().row(),1); //sterge 1 row
}

