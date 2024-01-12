#include <QApplication>
#include <QLabel>
#include <QPushButton>
#include <QHBoxLayout> //horizontal
#include <QVBoxLayout> // vertical
#include <QtWidgets>
#include <QtCore>


int main(int argc, char *argv[]){

    QApplication app(argc,argv);
    /*

    //T6
    QLabel *label= new QLabel("<b>Hello</b>  <i>Worlddd</i>dddd:)");
    QLabel *label= new QLabel("<h2>Hello</h2>  <font color = red><i>Worlddd</i></font>dddd:)");
    label->show(); //se incapsuleaza automat intr o fereastra
    */


    QWidget *window = new QWidget();
    //atat v a afisa doar o fereastra mare, pt ca nu are parametrii cum ar fi layout sau size
    window->setWindowTitle("<My APP>");
   /*
    //T7


    QPushButton *button1 = new QPushButton("1");
    QPushButton *button2 = new QPushButton("2");
    QPushButton *button3 = new QPushButton("3");
   // QHBoxLayout *hlayout = new QHBoxLayout;
    QVBoxLayout *vlayout = new QVBoxLayout;

    //hlayout->addWidget(button1);
    //hlayout->addWidget(button2);
    //hlayout->addWidget(button3);
    // window->setLayout(hlayout);
    vlayout->addWidget(button1);
    vlayout->addWidget(button2);
    vlayout->addWidget(button3);
    window->setLayout(vlayout);
*/


    //T8
    QGridLayout *layout = new QGridLayout();
    QLabel *label1 = new QLabel("Name");
    QLineEdit *txtName = new QLineEdit;
    layout->addWidget(label1,0,0); //(widget, row, column) //param functiei
    layout->addWidget(txtName,0,1);

    QLabel *label2 = new QLabel("Age");
    QLineEdit *txtAge = new QLineEdit;
    layout->addWidget(label2,1,0); //(widget, row, column) //param functiei
    layout->addWidget(txtAge,1,1);

    QLabel *label3 = new QLabel("Height");
    QLineEdit *txtHeight = new QLineEdit;
    layout->addWidget(label3,2,0); //(widget, row, column) //param functiei
    layout->addWidget(txtHeight,2,1);

    QPushButton *button = new QPushButton("Ok");
    layout->addWidget(button,3,0,1,2);// (widget, row, column, how many rows we want it to span, how many collumns we want it to span)

    window->setLayout(layout);
    window->show();
    return app.exec();

}
