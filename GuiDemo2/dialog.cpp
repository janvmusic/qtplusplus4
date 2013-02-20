#include "dialog.h"
#include "ui_dialog.h"
#include <QtCore>
#include <QtGui>



Dialog::Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog)
{
    ui->setupUi(this);
    for(int i=1;i<=10;i++)
    {
        ui->comboBox->addItem(QString::number(i) + " item");
    }

    for(int i=1;i<=10;i++)
    {
        ui->listWidget->addItem(QString::number(i) + " item here");
    }

    ui->treeWidget->setColumnCount(2);
    ui->treeWidget->setHeaderLabels(QStringList() << "Col A" << "Col B");

    QTreeWidgetItem *itm = new QTreeWidgetItem(ui->treeWidget);
    AddRoot(itm,"Lacteos","Prod de Vaca");
    AddChild(itm,"Queso","Something");
    AddChild(itm,"Yogurth","Wut");
    AddChild(itm,"Carne","Island");

    itm = new QTreeWidgetItem(ui->treeWidget);
    AddRoot(itm,"Frutas","Del Campo");
    AddChild(itm,"Manzana","Yummy");
    AddChild(itm,"Naranja","Yummy");
    AddChild(itm,"Pera","Yummy");

    itm = new QTreeWidgetItem(ui->treeWidget);
    AddRoot(itm,"Chelas","Del Campo");
    AddChild(itm,"Indio","Nice");
    AddChild(itm,"Leon","Excellent");
    AddChild(itm,"Paulander","So fkin good");

}

Dialog::~Dialog()
{
    delete ui;
}

void Dialog::on_pushButton_clicked()
{
    //ui->lineEdit->setText("Hello World");
    QMessageBox::information(this,"Tittle",ui->lineEdit->text());
}

void Dialog::on_pushButton_2_clicked()
{
    if(ui->checkBox->isChecked())
    {
        QMessageBox::information(this,"Title","You like mazapan");
        //ui->checkBox->setChecked(true);
    }
    else
    {
        QMessageBox::information(this,"Title","You don't like mazapan");
    }
}

void Dialog::on_pushButton_3_clicked()
{
    if(ui->radioButton->isChecked())
    {
        QMessageBox::information(this,"Title",ui->radioButton->text());
    }
    if(ui->radioButton_2->isChecked())
    {
        QMessageBox::information(this,"Title",ui->radioButton_2->text());
    }
    if(ui->radioButton_3->isChecked())
    {
        QMessageBox::information(this,"Title",ui->radioButton_3->text());
    }

}

void Dialog::on_pushButton_4_clicked()
{
    QMessageBox::information(this,"Title",ui->comboBox->currentText());
}

void Dialog::on_pushButton_5_clicked()
{
    ui->listWidget->currentItem()->setText("Zombiefied D:!!");
    QListWidgetItem *itm = ui->listWidget->currentItem();
    itm->setTextColor(Qt::red);
    itm->setBackgroundColor(Qt::black);
}

void Dialog::AddRoot(QTreeWidgetItem *itm,QString name,QString Description){
    //QTreeWidgetItem *itm = new QTreeWidgetItem(ui->treeWidget);
    itm->setText(0,name);
    itm->setText(1,Description);
}

void Dialog::AddChild(QTreeWidgetItem *parent,QString name,QString Description){
    QTreeWidgetItem *itm = new QTreeWidgetItem();
    itm->setText(0,name);
    itm->setText(1,Description);
    parent->addChild(itm);
}

void Dialog::on_pushButton_6_clicked()
{
    ui->treeWidget->currentItem()->setBackgroundColor(0,Qt::red);
    ui->treeWidget->currentItem()->setBackgroundColor(1,Qt::blue);
}
