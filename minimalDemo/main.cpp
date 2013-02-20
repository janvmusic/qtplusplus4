#include <QApplication>
#include <QLabel>
#include <QPushButton>
#include <QHBoxLayout>
#include <QVBoxLayout>
#include <QtGui>
#include <QtCore>

int main(int argc, char *argv[])
{
    QApplication app(argc,argv);

    QWidget *window =  new QWidget;
    window->setWindowTitle("My App");

    QGridLayout *layout = new QGridLayout;
    window->setLayout(layout);

    QLabel *label1 = new QLabel("Name:");
    QLineEdit *txtName = new QLineEdit;

    QLabel *label2 = new QLabel("Name:");
    QLineEdit *txtName2 = new QLineEdit;

    layout->addWidget(label1,0,0);
    layout->addWidget(txtName,0,1);
    layout->addWidget(label2,1,0);
    layout->addWidget(txtName2,1,1);

    QPushButton *button = new QPushButton("Ok");
    layout->addWidget(button,2,0,1,2);

    window->show();
    return app.exec();
}

//******minimal 1 QT 7******
/*QLabel *label = new QLabel("<h2>Hello <font color=red>World</font></h2>");
label->show();*/

//******minimal 2, QT 8*******
//QPushButton *button1 = new QPushButton("One");
//QPushButton *button2 = new QPushButton("Two");
//QPushButton *button3 = new QPushButton("Three");

//QHBoxLayout *hlayout = new QHBoxLayout;
//hlayout->addWidget(button1);
//hlayout->addWidget(button2);
//hlayout->addWidget(button3);

//QVBoxLayout *vlayout = new QVBoxLayout;
//vlayout->addWidget(button1);
//vlayout->addWidget(button2);
//vlayout->addWidget(button3);

//window->setLayout(hlayout);
//window->setLayout(vlayout);
