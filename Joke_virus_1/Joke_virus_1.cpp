#include "Joke_virus_1.h"
#include <QMessageBox>

Joke_virus_1::Joke_virus_1(QWidget *parent)
    : QMainWindow(parent)
{
    ui.setupUi(this);
    connect(ui.AcceptButton, &QPushButton::clicked, this, [=]() {
        if (ui.radioButton_Easy->isChecked()) {
            QMessageBox::information(this, u8"デバッグ", u8"初級押下");
            Easy_Command();
        }
        else if (ui.radioButton_Mid->isChecked()) {
            QMessageBox::information(this, u8"デバッグ", u8"中級押下");
            Mid_Command();
        }
        else if (ui.radioButton_High->isChecked()){
            QMessageBox::information(this, u8"デバッグ", u8"上級押下");
        }
        else {
            QMessageBox::information(this, u8"通知", u8"無効な値押下");
        }
    });
}

Joke_virus_1::~Joke_virus_1()
{}

