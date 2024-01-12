/********************************************************************************
** Form generated from reading UI file 'dialog.ui'
**
** Created by: Qt User Interface Compiler version 6.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOG_H
#define UI_DIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_Dialog
{
public:
    QVBoxLayout *verticalLayout_2;
    QLabel *label;
    QPushButton *pushButton;
    QLineEdit *lineEdit;
    QPushButton *pushButton_2;
    QCheckBox *checkBox;
    QPushButton *pushButton_3;
    QVBoxLayout *verticalLayout;
    QRadioButton *radioButton1;
    QRadioButton *radioButton2;
    QPushButton *pushButton_4;
    QComboBox *comboBox;
    QListWidget *listWidget;
    QPushButton *pushButton_5;

    void setupUi(QDialog *Dialog)
    {
        if (Dialog->objectName().isEmpty())
            Dialog->setObjectName("Dialog");
        Dialog->resize(307, 421);
        verticalLayout_2 = new QVBoxLayout(Dialog);
        verticalLayout_2->setObjectName("verticalLayout_2");
        label = new QLabel(Dialog);
        label->setObjectName("label");

        verticalLayout_2->addWidget(label);

        pushButton = new QPushButton(Dialog);
        pushButton->setObjectName("pushButton");

        verticalLayout_2->addWidget(pushButton);

        lineEdit = new QLineEdit(Dialog);
        lineEdit->setObjectName("lineEdit");
        lineEdit->setEchoMode(QLineEdit::Password);

        verticalLayout_2->addWidget(lineEdit);

        pushButton_2 = new QPushButton(Dialog);
        pushButton_2->setObjectName("pushButton_2");

        verticalLayout_2->addWidget(pushButton_2);

        checkBox = new QCheckBox(Dialog);
        checkBox->setObjectName("checkBox");

        verticalLayout_2->addWidget(checkBox);

        pushButton_3 = new QPushButton(Dialog);
        pushButton_3->setObjectName("pushButton_3");

        verticalLayout_2->addWidget(pushButton_3);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        radioButton1 = new QRadioButton(Dialog);
        radioButton1->setObjectName("radioButton1");

        verticalLayout->addWidget(radioButton1);

        radioButton2 = new QRadioButton(Dialog);
        radioButton2->setObjectName("radioButton2");

        verticalLayout->addWidget(radioButton2);


        verticalLayout_2->addLayout(verticalLayout);

        pushButton_4 = new QPushButton(Dialog);
        pushButton_4->setObjectName("pushButton_4");

        verticalLayout_2->addWidget(pushButton_4);

        comboBox = new QComboBox(Dialog);
        comboBox->setObjectName("comboBox");

        verticalLayout_2->addWidget(comboBox);

        listWidget = new QListWidget(Dialog);
        listWidget->setObjectName("listWidget");

        verticalLayout_2->addWidget(listWidget);

        pushButton_5 = new QPushButton(Dialog);
        pushButton_5->setObjectName("pushButton_5");

        verticalLayout_2->addWidget(pushButton_5);


        retranslateUi(Dialog);

        QMetaObject::connectSlotsByName(Dialog);
    } // setupUi

    void retranslateUi(QDialog *Dialog)
    {
        Dialog->setWindowTitle(QCoreApplication::translate("Dialog", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("Dialog", "<html><head/><body><p><span style=\" font-weight:700; font-style:italic; text-decoration: underline;\">Hello World</span></p></body></html>", nullptr));
        pushButton->setText(QCoreApplication::translate("Dialog", "Click me:)", nullptr));
        pushButton_2->setText(QCoreApplication::translate("Dialog", "Click Me 2", nullptr));
        checkBox->setText(QCoreApplication::translate("Dialog", "I like cats", nullptr));
        pushButton_3->setText(QCoreApplication::translate("Dialog", "Click Me 3", nullptr));
        radioButton1->setText(QCoreApplication::translate("Dialog", "Cats", nullptr));
        radioButton2->setText(QCoreApplication::translate("Dialog", "Dogs", nullptr));
        pushButton_4->setText(QCoreApplication::translate("Dialog", "Click me 4", nullptr));
        pushButton_5->setText(QCoreApplication::translate("Dialog", "Click me 5", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Dialog: public Ui_Dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOG_H
