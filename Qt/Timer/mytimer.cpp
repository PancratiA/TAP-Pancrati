#include "mytimer.h"
#include <QDebug>
#include <QTimer>
MyTimer::MyTimer()
{
    timer = new QTimer(this);
    connect(timer,SIGNAL(timeout()),this,SLOT(MySlot()));
    timer->start(1000);

}
void MyTimer::MySlot(){ //actiunea care va avea loc

    qDebug()<<"Timer Executed";
}
