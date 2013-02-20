#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "myobject.h"
#include <QThread>

namespace Ui {
    class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
    MyObject *mThread;

public slots:
    void onNumberChange(int);

private slots:
    void on_btnstar_clicked();
    void on_btnstop_clicked();

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
