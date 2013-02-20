#include "dialog.h"
#include "ui_dialog.h"
#include <QInputDialog>

Dialog::Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog)
{
    ui->setupUi(this);
    model = new QDirModel(this);
    model->setReadOnly(false);
    model->setSorting(QDir::DirsFirst | QDir::IgnoreCase | QDir::Name);

    ui->treeView->setModel(model);
    QModelIndex idx = model->index("/home/jnunez2/");
    ui->treeView->expand(idx);
    ui->treeView->scrollTo(idx);
    ui->treeView->setCurrentIndex(idx);
    ui->treeView->resizeColumnToContents(0);
}

Dialog::~Dialog()
{
    delete ui;
}

void Dialog::on_pushButton_clicked()
{
  //create
  QModelIndex idx = ui->treeView->currentIndex();
  if(!idx.isValid()) return;
  QString name = QInputDialog::getText(this,"Name","Enter a name:");
  if(!name.isEmpty()) return;
  model->mkdir(idx,name);
}

void Dialog::on_pushButton_2_clicked()
{
  //delete
}
