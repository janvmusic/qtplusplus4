#include "dialog.h"
#include "dialog.ui"
#include <QApplication>

using namespace Ui;

class dialogPrivate:public Ui::dialog
{
public:
    dialogPrivate():Ui::dialog()
    {

    }
    ~dialogPrivate()
    {

    }
};

dialog::dialog(QDialog *parent):QDialog(parent){
    p=new dialogPrivate();
    p->setUpUi(this);

    connect(p->close,SIGNAL(),qApp,SLOT(quit()));
}

dialog::~dialog()
{
    delete p;
}
