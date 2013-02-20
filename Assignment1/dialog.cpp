#include "dialog.h"
#include "ui_dialog.h"

Dialog::Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog)
{
    ui->setupUi(this);
    ui->helloWorld->setText("Hello World");
    connect(ui->btnClose,SIGNAL(clicked()),this,SLOT(close()));
}

Dialog::~Dialog()
{
    delete ui;
}

//QVBoxLayout
//QLabel
//QPushButton

void Dialog::on_pushButton_clicked()
{
    this->close();
}
