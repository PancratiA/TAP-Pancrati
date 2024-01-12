#include <QCoreApplication>
#include <QDebug> //folosim qdebug pt meniul de debug
int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv); //creeaza o instanta a aplicatiei
    qDebug() << "Hello World";  //afiseaza hello world
    return a.exec();
}
