#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include "mydialog.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
   //T3
    ui->pushButton->setText("close");
    //T4
    connect(ui->horizontalSlider,SIGNAL(valueChanged(int)),
            ui->progressBar,SLOT(setValue(int)));

    connect(ui->horizontalSlider,SIGNAL(valueChanged(int)),
            ui->progressBar_2,SLOT(setValue(int)));
    disconnect(ui->horizontalSlider,SIGNAL(valueChanged(int)),
               ui->progressBar,SLOT(setValue(int))); //face ca primul progressBar sa nu functioneze


    //T5
    //setCentralWidget(ui->plainTextEdit);

}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_actionNew_Window_triggered() //T5 -> afiseaza mydialog
{   //varianta1
  //  MyDialog mDialog;
    //mDialog.setModal(true); //modala => nu putem interactiona cu nimic in afara acestei ferestre
   // mDialog.exec();
    //varianta2
    mDialog = new MyDialog(this); //this vine ca si parinte
    mDialog -> show();  //cu variata aceasta putem interactiona cu alte ferestre

}

