#include "dialog.h"
#include "ui_dialog.h"
#include <QtCore>
#include <QtGui>

Dialog::Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog)
{
    ui->setupUi(this);
}

Dialog::~Dialog()
{
    delete ui;
}

void Dialog::on_pushButton_clicked()
{
    //information
    QMessageBox::information(this,"Title","Text Here");
}

void Dialog::on_pushButton_2_clicked()
{
    //question
    QMessageBox::StandardButton reply;
    reply  = QMessageBox::question(this,"Title","True or False",
                          QMessageBox::Yes | QMessageBox::No);
    if(reply == QMessageBox::Yes)
    {
        QMessageBox::information(this,"Title","true");
    }
    else
    {
        QMessageBox::information(this,"Title","false");
    }
}

void Dialog::on_pushButton_3_clicked()
{
    //warning
    QMessageBox::warning(this,"Title","Text Here");
}

void Dialog::on_pushButton_4_clicked()
{
    //custom
    QMessageBox::question(this,"Title","Text Here",
                          QMessageBox::YesToAll
                          | QMessageBox::Yes
                          | QMessageBox::No
                          | QMessageBox::NoToAll);
}
