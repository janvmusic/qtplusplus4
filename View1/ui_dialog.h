/********************************************************************************
** Form generated from reading UI file 'dialog.ui'
**
** Created: Mon Jul 29 15:14:38 2013
**      by: Qt User Interface Compiler version 4.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOG_H
#define UI_DIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QGraphicsView>
#include <QtGui/QHeaderView>
#include <QtGui/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_Dialog
{
public:
    QGraphicsView *graphicsView;
    QPushButton *pushButton;
    QPushButton *pushButton_2;

    void setupUi(QDialog *Dialog)
    {
        if (Dialog->objectName().isEmpty())
            Dialog->setObjectName(QString::fromUtf8("Dialog"));
        Dialog->resize(472, 388);
        graphicsView = new QGraphicsView(Dialog);
        graphicsView->setObjectName(QString::fromUtf8("graphicsView"));
        graphicsView->setGeometry(QRect(9, 9, 451, 311));
        pushButton = new QPushButton(Dialog);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(354, 341, 97, 27));
        pushButton_2 = new QPushButton(Dialog);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(251, 341, 97, 27));

        retranslateUi(Dialog);

        QMetaObject::connectSlotsByName(Dialog);
    } // setupUi

    void retranslateUi(QDialog *Dialog)
    {
        Dialog->setWindowTitle(QApplication::translate("Dialog", "Dialog", 0, QApplication::UnicodeUTF8));
        pushButton->setText(QApplication::translate("Dialog", "+1", 0, QApplication::UnicodeUTF8));
        pushButton_2->setText(QApplication::translate("Dialog", "-1", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class Dialog: public Ui_Dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOG_H
