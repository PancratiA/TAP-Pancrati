#include "mainwindow.h"
#include "ui_mainwindow.h"

#include <QLabel>
#include <QProgressBar>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    Statlabel = new QLabel(this);//this devine parinte
    StatProgress = new QProgressBar(this);
    ui->statusbar->addPermanentWidget(Statlabel);
    ui->statusbar->addPermanentWidget(StatProgress,1); //al 2 argument este stretch , poate fi 1,
    StatProgress->setTextVisible(false);
    Statlabel->setText("heyy");
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_actionDo_Something_triggered()
{
    ui->statusbar->showMessage("Hello");//al doilea parametru , este optional si este nr de milisecunde
    StatProgress->setValue(45);
}

