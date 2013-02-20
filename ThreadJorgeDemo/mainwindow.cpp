#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QThread>
#include <QDebug>
#include "myobject.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    mThread = new MyObject(this);
    connect(mThread,SIGNAL(NumberChanged(int)),
            this,SLOT(onNumberChange(int)));

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::onNumberChange(int Number)
{
    ui->lblnumber->setText(QString::number(Number));

}

void MainWindow::on_btnstar_clicked()
{
    QThread cThread;
    qDebug() << "Created Thread";
    mThread->tmpValue = ui->lblnumber->text().toInt();
    qDebug() << "Set tmpValue";

    mThread->Stop = false;
    qDebug() << "Set Stop";

    mThread->DoSetUp(cThread);
    qDebug() << "DoSetUp";

    mThread->moveToThread(&cThread);
    qDebug() << "Move to thread";

    qDebug() << "About to start";
    cThread.start();
    qDebug() << "Finished";

}

void MainWindow::on_btnstop_clicked()
{
//    mThread->Stop = true;
//    mThread->DoSetUp(cThread);
//    mThread->moveToThread(&cThread);
//    cThread.start();
}
