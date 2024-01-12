#include "dialog.h"
#include "ui_dialog.h"
#include <QTreeWidgetItem>
#include <QtCore>
#include <QTGui>
#include <QtWidgets>
#include <QMessageBox>
#include <QDialog>

Dialog::Dialog(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::Dialog)
{
    ui->setupUi(this);

    ui->treeWidget->setColumnCount(2);//seteaza nr de coloane
    //Schimba numele  coloanelor pe rand cu fiecare apelare a functiei
    //  ui->treeWidget->setHeaderLabel("col a");    ui->treeWidget->setHeaderLabel("col b");
    //SAU
    ui->treeWidget->setHeaderLabels(QStringList() << "one " << "two");

    AddRoot(" 1 hello","world");
     AddRoot("2 hello","world");
      AddRoot(" 3 hello","world");

}

Dialog::~Dialog()
{
    delete ui;
}
void Dialog::AddRoot(QString name, QString Description){
    QTreeWidgetItem *itm = new QTreeWidgetItem(ui->treeWidget);
    itm->setText(0,name); //0 - coloana
    itm->setText(1,Description);
    ui->treeWidget->addTopLevelItem(itm);
    AddChild(itm,"one","hello");
    AddChild(itm,"tow", "hello");


}
void Dialog::AddChild(QTreeWidgetItem *parent , QString name, QString Description){

    QTreeWidgetItem *itm = new QTreeWidgetItem();
    itm->setText(0,name); //0 - coloana
    itm->setText(1,Description);
    parent->addChild(itm);

}



void Dialog::on_pushButton_clicked()
{
    ui->treeWidget->currentItem()->setBackground(0,Qt::red);
    ui->treeWidget->currentItem()->setBackground(1,Qt::blue);

}

