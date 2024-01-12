#include "dialog.h"
#include "ui_dialog.h"

Dialog::Dialog(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::Dialog)
{
    ui->setupUi(this);
    QString sPath="C:/";
    dirmodel = new QFileSystemModel(this);
    dirmodel->setRootPath(sPath);
    dirmodel->setFilter(QDir::NoDot| QDir::NoDotDot | QDir::AllDirs); // pentru a avea doar folders
    ui->treeView->setModel(dirmodel);

    filemodel = new QFileSystemModel(this);
    filemodel->setRootPath(sPath);
    filemodel->setFilter(QDir::NoDot| QDir::NoDotDot | QDir::Files); // pentru a avea doar folders
     ui->listView->setModel(filemodel);

}

Dialog::~Dialog()
{
    delete ui;
}


void Dialog::on_treeView_clicked(const QModelIndex &index)
{
    //cand se apasa pe un elem in treeview
    QString sPath=dirmodel->fileInfo(index).absoluteFilePath(); //extrage path
    ui->listView->setRootIndex(filemodel->setRootPath(sPath));
}

