#include "dialog.h"
#include "ui_dialog.h"
//#include <QDirModel>
#include <QInputDialog>

Dialog::Dialog(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::Dialog)
{
    ui->setupUi(this);
    //model=new QDirModel(this);//nu mai exista
    model=new QFileSystemModel(this);
    model->setReadOnly(false);

    ui->treeView->setModel(model);
    QModelIndex index=model->index("C:/Users/Acasa/Desktop/Uni");

    ui->treeView->expand(index);
    ui->treeView->scrollTo(index);
    ui->treeView->resizeColumnToContents(0);
}

Dialog::~Dialog()
{
    delete ui;
}

void Dialog::on_pushButton_clicked()
{
    //make dir
    QModelIndex index=ui->treeView->currentIndex();//aflam indexul
    if(!index.isValid())return;
    QString name=QInputDialog::getText(this,"Name","Enter a name");
    if(name.isEmpty())return;
    model->mkdir(index,name);// creeaza directoriul
}


void Dialog::on_pushButton_2_clicked()
{
    //delete

    QModelIndex index=ui->treeView->currentIndex();//aflam indexul
    if(!index.isValid())return;

    if(model->fileInfo(index).isDir()){//verificam daca e director
        model->rmdir(index);//stergere director
    }
    else{
        model->remove(index);//stergere fisier
    }

}
