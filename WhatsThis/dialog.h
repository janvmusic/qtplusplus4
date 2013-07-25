#ifndef DIALOG_H
#define DIALOG_H

#include <QDialog>
#include <QtCore>
#include "linkfilter.h"

namespace Ui {
class Dialog;
}

class Dialog : public QDialog
{
    Q_OBJECT
    
public:
    explicit Dialog(QWidget *parent = 0);
    ~Dialog();
    
private:
    Ui::Dialog *ui;

public slots:
    void showLink(const QString &Link);
};

#endif // DIALOG_H
