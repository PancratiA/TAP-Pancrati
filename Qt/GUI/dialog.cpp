#include "dialog.h"
#include "ui_dialog.h"
#include <QtCore>
#include <QTGui>
#include <QMessageBox>

Dialog::Dialog(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::Dialog)
{
    ui->setupUi(this);
    //T14
    //ui->label->setText("<b>heyyy</b> salut");
    ui->checkBox->setChecked(true);

    //T19
   // ui->comboBox->addItem("Hello");
    //ui->comboBox->addItem("World");
    for(int i=0;i<9;i++){
        ui->comboBox->addItem("item "+ QString::number(i));
    }

    //T20
    //ui->listWidget->addItem("Hello"); //creeaza un qlistwidgetobject
    for(int i=0;i<9;i++){
        ui->listWidget->addItem("item "+ QString::number(i));
    }
}

Dialog::~Dialog()
{
    delete ui;
}

//T16-15
void Dialog::on_pushButton_clicked()
{
    //QMessageBox::information(this, "Title here", "Text here");
   // ui->lineEdit->setText("Hello World"); //seteaza textul din lineEdit
    QMessageBox::information(this , "Title", ui->lineEdit->text());

}

//T17
void Dialog::on_pushButton_2_clicked()
{
    if( ui->checkBox-> isChecked()){
        QMessageBox::information(this,"cats","you like cats!");
    }
    else QMessageBox::information(this,"cats","you  dont like cats!??");
}

//T18
void Dialog::on_pushButton_3_clicked()
{
    if(ui->radioButton1->isChecked()){
        QMessageBox::information(this,ui->radioButton1->text(),"you like cats");
    }
    if(ui->radioButton2->isChecked()){
        QMessageBox::information(this,ui->radioButton2->text(),"you like Dogs");
    }
}

//T19

void Dialog::on_pushButton_4_clicked()
{
    QMessageBox::information(this,QString::number(ui->comboBox->currentIndex()),ui->comboBox->currentText());
}

//T20
void Dialog::on_pushButton_5_clicked()
{
   // ui->listWidget->currentItem()->setText("Fuzzy bunny");
   //sau
    QListWidgetItem *itm =ui->listWidget->currentItem();
    itm->setForeground(Qt::red);//culoare text
    itm->setText("hey"); //string text
    itm->setBackground(Qt::black);

}

