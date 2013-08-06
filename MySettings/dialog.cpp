#include "dialog.h"
#include "ui_dialog.h"

Dialog::Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog)
{
    ui->setupUi(this);
    loadSettings();
}

Dialog::~Dialog()
{
    delete ui;
}

void Dialog::saveSettings()
{
    // Save
    QSettings settings("MyApp","mysetting");
    settings.beginGroup("MainWindow");
    settings.setValue("position",this->geometry());
    settings.endGroup();

    qDebug() << "Saved";
}

void Dialog::loadSettings()
{
    // Load
    QSettings settings("MyApp","mysetting");
    settings.beginGroup("MainWindow");
    QRect rect = settings.value("position").toRect();
    setGeometry(rect);
    settings.endGroup();

    qDebug() << "Loaded";
}

void Dialog::on_pushButton_clicked()
{
    // Save
    saveSettings();
}

void Dialog::on_pushButton_2_clicked()
{
    // Load
    loadSettings();
}
