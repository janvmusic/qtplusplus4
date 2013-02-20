#include "dialog.h"
#include "ui_dialog.h"

Dialog::Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog)
{
    ui->setupUi(this);

    QString sPath = "/home/jnunez2/";
    dirModel = new QFileSystemModel(this);
    dirModel->setFilter(QDir::NoDotAndDotDot | QDir::AllDirs );
    dirModel->setRootPath(sPath);
    ui->treeView->setModel(dirModel);

    fileModel = new QFileSystemModel(this);
    fileModel->setRootPath(sPath);
    fileModel->setFilter(QDir::NoDotAndDotDot | QDir::Files );
    fileModel->setRootPath(sPath);
    ui->listView->setModel(fileModel);

}

Dialog::~Dialog()
{
    delete ui;
}

void Dialog::on_treeView_clicked(const QModelIndex &index)
{
    //treeView
    QString sPath = dirModel->fileInfo(index).absolutePath();
    ui->listView->setRootIndex(fileModel->setRootPath(sPath));
}
