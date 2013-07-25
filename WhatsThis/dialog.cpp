#include "dialog.h"
#include "ui_dialog.h"

Dialog::Dialog(QWidget *parent) : QDialog(parent),
    ui(new Ui::Dialog)
    {
        ui->setupUi(this);
        LinkFilter *filter = new LinkFilter(this);
        this->installEventFilter(filter);
        connect(filter,SIGNAL(linkClicked(QString)),this,SLOT(showLink(QString)));

        //ui->pushButton->setWhatsThis("<font color='red'>The Krakken will be released!</font>");
        ui->pushButton->setWhatsThis("<font color='red'>For more information follow this <a href='www.google.com'>link</a></font>");
    }

Dialog::~Dialog()
{
    delete ui;
}

void Dialog::showLink(const QString &Link)
{
    QMessageBox::information(this,"Link Clicked",Link);
}
