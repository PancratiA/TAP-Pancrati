#include "mythread.h"
#include <QMutex>

MyThread::MyThread(QObject *parent):QThread(parent)
{

}
void MyThread::run(){
 QMutex mutex;
    for(int i=0;i<10;i++){ //

        mutex.lock();
        if(this->Stop){
            break;
        }
        mutex.unlock();
        emit NumberChanged(i);//signal declarat in .h
        this->msleep(300);
    }

}
