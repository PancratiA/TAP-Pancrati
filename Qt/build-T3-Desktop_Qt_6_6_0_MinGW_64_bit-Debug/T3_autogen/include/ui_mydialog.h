/********************************************************************************
** Form generated from reading UI file 'mydialog.ui'
**
** Created by: Qt User Interface Compiler version 6.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MYDIALOG_H
#define UI_MYDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>

QT_BEGIN_NAMESPACE

class Ui_MyDialog
{
public:
    QPushButton *pushButton;
    QTextEdit *textEdit;

    void setupUi(QDialog *MyDialog)
    {
        if (MyDialog->objectName().isEmpty())
            MyDialog->setObjectName("MyDialog");
        MyDialog->resize(400, 300);
        pushButton = new QPushButton(MyDialog);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(150, 160, 80, 24));
        textEdit = new QTextEdit(MyDialog);
        textEdit->setObjectName("textEdit");
        textEdit->setGeometry(QRect(140, 70, 104, 70));

        retranslateUi(MyDialog);

        QMetaObject::connectSlotsByName(MyDialog);
    } // setupUi

    void retranslateUi(QDialog *MyDialog)
    {
        MyDialog->setWindowTitle(QCoreApplication::translate("MyDialog", "Dialog", nullptr));
        pushButton->setText(QCoreApplication::translate("MyDialog", "PushButton", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MyDialog: public Ui_MyDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MYDIALOG_H
