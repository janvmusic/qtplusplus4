#ifndef DIALOG_H
#define DIALOG_H

#include <QtCore>
#include <QtGui>
#include <QDialog>

namespace Ui {
    class Dialog;
}

class Dialog : public QDialog
{
    Q_OBJECT

void AddRoot(QTreeWidgetItem *itm,QString name,QString Description);
void AddChild(QTreeWidgetItem *parent,QString name,QString Description);

public:
    explicit Dialog(QWidget *parent = 0);
    ~Dialog();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_4_clicked();

    void on_pushButton_5_clicked();

    void on_pushButton_6_clicked();

private:
    Ui::Dialog *ui;
};

#endif // DIALOG_H
