#include "dialog.h"
#include "ui_dialog.h"

Dialog::Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog)
{
    ui->setupUi(this);
    mThread = new MyThread(this);
    connect(mThread,SIGNAL(NumberChanged(int)),
            this,SLOT(onNumberChange(int)));
}

Dialog::~Dialog()
{
    delete ui;
}

void Dialog::onNumberChange(int Number)
{
    ui->label->setText(QString::number(Number));

}

void Dialog::on_pushButton_clicked()
{
    //Started
    mThread->Stop = false;
    mThread->tmpValue = ui->label->text().toInt();
    mThread->start();
}

void Dialog::on_pushButton_2_clicked()
{
   //Stopped
    mThread->Stop = true;
}
