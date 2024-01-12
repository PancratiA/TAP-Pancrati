#include <QCoreApplication>
#include <QDebug>
int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
//t44 copy
   /* QStringList List;
    List<<"a"<<"b"<< "c";

    QVector<QString> Vect(3);


    std::copy(List.begin()+1,List.end(),Vect.begin());//nu se va copia si a, deoarece am scris List.begin+1, incepe de la al doilea element copierea
    foreach(QString itm, Vect){//afisare elemente din vector
        qDebug()<<itm;
    }
*/
    //t45 Fill
    /*QVector<QString> Vect(5);



    std::fill(Vect.begin(),Vect.end()-2,"Salut");//avem un vector de 5 elemente, in care de la primul element pana la elementul 3 se va adauga ca element salut
    foreach(QString itm,Vect){
        qDebug()<<itm;
    }*/
//T46 Find
    QList<int> List;
    List<<1<<5<<15<<23;


    QList<int>::const_iterator Iter=std::find(List.begin(),List.end(),15); //cauta elem 15

    if(Iter !=List.end()){
        qDebug()<<"Found: " << *Iter;
    }
    else
        qDebug()<<"Not found.";


    return a.exec();
}
