#ifndef DIALOG_H
#define DIALOG_H
#include <QDialog>

class dialogPrivate;
class dialog:public QDialog
{
  Q_OBJECT
  public:
    dialog(QDialog *parent=0);
    virtual ~dialog();

  private:
    dialogPrivate *p;
};

#endif
