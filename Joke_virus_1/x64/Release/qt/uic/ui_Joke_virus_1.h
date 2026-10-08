/********************************************************************************
** Form generated from reading UI file 'Joke_virus_1.ui'
**
** Created by: Qt User Interface Compiler version 6.12.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_JOKE_VIRUS_1_H
#define UI_JOKE_VIRUS_1_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Joke_virus_1Class
{
public:
    QWidget *centralWidget;
    QLabel *Title;
    QRadioButton *radioButton_Easy;
    QRadioButton *radioButton_Mid;
    QRadioButton *radioButton_High;
    QPushButton *AcceptButton;
    QToolBar *mainToolBar;

    void setupUi(QMainWindow *Joke_virus_1Class)
    {
        if (Joke_virus_1Class->objectName().isEmpty())
            Joke_virus_1Class->setObjectName("Joke_virus_1Class");
        Joke_virus_1Class->resize(600, 400);
        centralWidget = new QWidget(Joke_virus_1Class);
        centralWidget->setObjectName("centralWidget");
        Title = new QLabel(centralWidget);
        Title->setObjectName("Title");
        Title->setGeometry(QRect(10, 0, 580, 60));
        QFont font;
        font.setPointSize(30);
        Title->setFont(font);
        radioButton_Easy = new QRadioButton(centralWidget);
        radioButton_Easy->setObjectName("radioButton_Easy");
        radioButton_Easy->setGeometry(QRect(20, 70, 500, 50));
        QFont font1;
        font1.setPointSize(20);
        radioButton_Easy->setFont(font1);
        radioButton_Mid = new QRadioButton(centralWidget);
        radioButton_Mid->setObjectName("radioButton_Mid");
        radioButton_Mid->setGeometry(QRect(20, 130, 300, 50));
        radioButton_Mid->setFont(font1);
        radioButton_High = new QRadioButton(centralWidget);
        radioButton_High->setObjectName("radioButton_High");
        radioButton_High->setGeometry(QRect(20, 190, 300, 50));
        radioButton_High->setFont(font1);
        AcceptButton = new QPushButton(centralWidget);
        AcceptButton->setObjectName("AcceptButton");
        AcceptButton->setGeometry(QRect(10, 250, 580, 80));
        QFont font2;
        font2.setPointSize(50);
        AcceptButton->setFont(font2);
        Joke_virus_1Class->setCentralWidget(centralWidget);
        mainToolBar = new QToolBar(Joke_virus_1Class);
        mainToolBar->setObjectName("mainToolBar");
        Joke_virus_1Class->addToolBar(Qt::ToolBarArea::TopToolBarArea, mainToolBar);

        retranslateUi(Joke_virus_1Class);

        QMetaObject::connectSlotsByName(Joke_virus_1Class);
    } // setupUi

    void retranslateUi(QMainWindow *Joke_virus_1Class)
    {
        Joke_virus_1Class->setWindowTitle(QCoreApplication::translate("Joke_virus_1Class", "Joke_virus_1", nullptr));
        Title->setText(QCoreApplication::translate("Joke_virus_1Class", "\343\202\270\343\203\247\343\203\274\343\202\257\343\202\246\343\202\244\343\203\253\343\202\271\350\251\260\343\202\201\345\220\210\343\202\217\343\201\233", nullptr));
        radioButton_Easy->setText(QCoreApplication::translate("Joke_virus_1Class", "\345\210\235\347\264\232: \343\201\250\343\202\212\343\201\202\343\201\210\343\201\232\343\203\226\343\203\253\343\202\271\343\202\257", nullptr));
        radioButton_Mid->setText(QCoreApplication::translate("Joke_virus_1Class", "\344\270\255\347\264\232: \347\224\273\351\235\242\343\202\253\343\202\252\343\202\271\343\201\253\343\201\227\343\202\210\343\201\206", nullptr));
        radioButton_High->setText(QCoreApplication::translate("Joke_virus_1Class", "\344\270\212\347\264\232: \343\203\226\343\203\274\343\203\210\343\202\273\343\202\257\343\202\277\346\224\271\345\244\211", nullptr));
        AcceptButton->setText(QCoreApplication::translate("Joke_virus_1Class", "\345\256\237\350\241\214\357\274\201", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Joke_virus_1Class: public Ui_Joke_virus_1Class {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_JOKE_VIRUS_1_H
