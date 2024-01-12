
#include <QCoreApplication>
#include <QDebug>
#include <QStringList>
int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    QStringList List;
    List.append("Hello");
    QString Line= "a,b,c,d,e,f";
    List = Line.split(","); //functie din qstring care taie fiecare element cu un caracter dat
    List.replaceInStrings("b","BATMAN"); //cand un elem este "b" va deveni batman; replacing
    QString After = List.join(" ... "); //converteste lista intr un qstring
    qDebug() << After;
    foreach(QString itm, List){
        qDebug () << itm;
    }

    return a.exec();
}
