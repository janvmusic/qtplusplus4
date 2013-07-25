#include "dialog.h"
#include "ui_dialog.h"

Dialog::Dialog(QWidget *parent) : QDialog(parent),
    ui(new Ui::Dialog)
    {
        ui->setupUi(this);
        ui->pushButton1->setToolTip("Hello <font color='red'>World</font>"
                                    "<ul>"
                                    "<li>Item 1</li>"
                                    "<li>Item 2</li>"
                                    "<li>Item 3</li>"
                                    "</ul>");
        ui->pushButton2->setToolTip("<img src=':/files/images/accept.svg'> Hello World");
    }

Dialog::~Dialog()
{
    delete ui;
}
