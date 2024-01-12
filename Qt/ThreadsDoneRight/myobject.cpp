#include "myobject.h"
#include <QThread>
#include <QDebug>
MyObject::MyObject(QObject *parent)
    : QObject{parent}
{

}
void MyObject::DoSetup(QThread &cThread)
{
    connect(&cThread,SIGNAL(started()),this,SLOT(DoWork()));//cand threadul a inceput
}

void MyObject::DoWork()
{
    for(int i=0;i<100;i++){
        qDebug() <<i;
    }

}
