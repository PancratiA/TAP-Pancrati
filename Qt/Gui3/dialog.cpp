#include "dialog.h"
#include "ui_dialog.h"

Dialog::Dialog(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::Dialog)
{
    ui->setupUi(this);
    //T
    // ui->horizontalSlider->value();
    //ui->progressBar->value();
   // ui->horizontalSlider->setValue();
    //ui->progressBar->setValue();
    ui->progressBar->setValue(ui->horizontalSlider->value()); //pt ca initial , au valori diferite
    connect(ui->horizontalSlider, SIGNAL(valueChanged(int)) //conectam manual
            , ui->progressBar,SLOT(setValue(int)));

}

Dialog::~Dialog()
{
    delete ui;
}

