#include <QCoreApplication>
#include <QFile>
#include <QString>
#include <QDebug>
#include <QTextStream> //interfata de scriere citire text

//functie scriere
/*void Write (QString Filename){
    QFile mFile(Filename);
    if(!mFile.open(QFile::WriteOnly | QFile::Text)){//verifica daca e writeonly si text si deschis
        qDebug() << "Couldnt open";
        return;
    }
    QTextStream out(&mFile); // referinta catre fisierul deschis
    out<<"Hello World";
    mFile.flush(); //

    mFile.close();
}*/

void Read (QString Filename){
    QFile mFile(Filename);
    if(!mFile.open(QFile::ReadOnly | QFile::Text)){ //verifica daca e readonly si text si deschis
        qDebug() << "Couldnt open";
        return;
    }
    QTextStream in(&mFile); // referinta catre fisierul deschis // mai multe functii putem gasi in help
    QString mText = in.readAll(); //citeste tot din fisierul text
    qDebug() << mText;

    mFile.close();
}

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    //QString  mFilename = "C:/Users/Acasa/Desktop/Uni/Programare/TAP/Proiecte/Qt/myfile.txt";
    // Write(mFilename);
    Read(":/MyFiles/File.pro"); //MyFiles=prefix file.pro fisier resursa , daca apasam pe File.pro putem vedea continutul acesuia
    /*QT = core

CONFIG += c++17 cmdline

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
        main.cpp

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    MyResources.qrc
*/

    return a.exec();
}
