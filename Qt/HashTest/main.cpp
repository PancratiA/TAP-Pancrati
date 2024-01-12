#include <QCoreApplication>
#include <QHash>
#include <QDebug>
int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    QHash<int,QString> Employees;
    Employees.insert(1,"john");
    Employees.insert(2,"Bob");
    Employees.insert(3,"Amy");

    qDebug() << "3  =  "<<Employees.value(3);
   /* foreach(int i , Employees.keys()){
        qDebug() << Employees[i];
    }
   QHashIterator<int,QString>Iter(Employees);
    while(Iter.hasNext()){
        Iter.next();
        qDebug() << Iter.key() << "  " << Iter.value();
    }
*/
    return a.exec();
}
