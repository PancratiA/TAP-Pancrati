#ifndef MYTHREAD_H
#define MYTHREAD_H
#include <QThread>

class MyThread : public QThread //inherits QThread
{
public:
    MyThread();
    void run(); //se face override la functia run din qthread
    QString name;
    bool Stop; //pt mutex
};

#endif // MYTHREAD_H
