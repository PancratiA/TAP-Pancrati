#include "mythread.h"
#include <QDebug>
#include <QMutex>

MyThread::MyThread()
{

}
void MyThread::run()
{
    qDebug() << this->name <<"Running";
    for(int i=0;i<10;i++){
        QMutex mutex;
        mutex.lock();
        if(this->Stop)
        {
            break;
        } //daca stop este pe true din cauza ca un alt thread foloseste resursa, se iese din loop
        mutex.unlock();
        this->sleep(100);
        qDebug() << this->name <<i;
    }
}
