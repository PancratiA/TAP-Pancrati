 #include <QCoreApplication>
#include <QDebug>


int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    QLinkedList<int> List;
    List <<1 <<3 <<5;
    foreach(int nr , List){
        qDebug<< nr;
    }
    return a.exec();
}
