#include <QCoreApplication>
#include <QMap>
#include <QDebug>
int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    QMap<int,QString> Employees;
    Employees.insert(1,"john");
    Employees.insert(2,"Bob");
    Employees.insert(1,"Amy");
    foreach(int i , Employees.keys()){
        qDebug() << Employees[i];
    }
    QMapIterator<int,QString>Iter(Employees);
    while(Iter.hasNext()){
        Iter.next();
        qDebug() << Iter.key() << "  " << Iter.value();
    }

    return a.exec();
}
