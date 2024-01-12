#include <QCoreApplication>
#include <QDebug>
#include <QDir>
#include <QFileInfo>
#include <QString>
int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    //QDir mDir("C:/Users/Acasa/Desktop/Uni/Programare/TAP/Proiecte/Qt");

    //qDebug() << mDir.exists(); //returneaza true daca exista si false daca nu

    /*foreach(QFileInfo mItm , mDir.drives())// ne v a selecta toate drive-urile calculatorului
    {
        qDebug() << mItm.absoluteFilePath();
    }*/


    // QDir mDir; // va lua dir curent
    //QString mPath="C:/Users/Acasa/Desktop/Uni/Programare/TAP/Proiecte/Qt/Dirs/exemplu";
   /* if(!mDir.exists(mPath)) // folosing mPath se va creea un director daca nu exista
    {
        mDir.mkpath(mPath); //creaza un director
        qDebug()<<"Created!";
    }
    else
    {
        qDebug()<<"Already Exists!";
    }
*/
    QDir mDir("C:/Users/Acasa/Desktop/Uni/Programare/TAP/Proiecte/Qt");
    foreach(QFileInfo mItm , mDir.entryInfoList()){ // ne va afisa toate path-urile fisierelor din mDir
       // qDebug() << mItm.absoluteFilePath(); // afiseaza path-ul lui mItm
        if(mItm.isDir()) qDebug() << "Dir:" << mItm.absoluteFilePath(); //isDir verifica daca e diector
        if(mItm.isFile()) qDebug() << "File:" << mItm.absoluteFilePath(); //isFile verifica daca e file
    }
    return a.exec();


}
