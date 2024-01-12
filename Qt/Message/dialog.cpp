#include "dialog.h"
#include "ui_dialog.h"
#include <QMessageBox>
#include <QtWidgets>
Dialog::Dialog(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::Dialog)
{
    ui->setupUi(this);
}

Dialog::~Dialog()
{
    delete ui;
}


void Dialog::on_pushButton_clicked()
{
    //info
    QMessageBox::information(this,"Title", "Text here");

}


void Dialog::on_pushButton_2_clicked()
{ //Question
    QMessageBox::StandardButton reply;
    reply =QMessageBox::question(this,"Title", "Do you like cats?",
                             QMessageBox::Yes | QMessageBox::No);
    if(reply == QMessageBox::Yes){
         QMessageBox::information(this,"Title", "You like cats");
    }


}


void Dialog::on_pushButton_3_clicked()
{
    QMessageBox::warning(this,"Title", "Text here");
}


void Dialog::on_pushButton_4_clicked()
{
    QMessageBox::question(this,"My Title","My text "
                          ,QMessageBox::YesToAll | QMessageBox:: Yes |
                                                            QMessageBox::No | QMessageBox::NoToAll);
}

