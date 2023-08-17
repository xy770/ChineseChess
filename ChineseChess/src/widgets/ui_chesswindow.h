/********************************************************************************
** Form generated from reading UI file 'chesswindow.ui'
**
** Created by: Qt User Interface Compiler version 6.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CHESSWINDOW_H
#define UI_CHESSWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ChessWindow
{
public:
    QWidget *centralwidget;

    void setupUi(QMainWindow *ChessWindow)
    {
        if (ChessWindow->objectName().isEmpty())
            ChessWindow->setObjectName("ChessWindow");
        ChessWindow->resize(800, 600);
        centralwidget = new QWidget(ChessWindow);
        centralwidget->setObjectName("centralwidget");
        ChessWindow->setCentralWidget(centralwidget);

        retranslateUi(ChessWindow);

        QMetaObject::connectSlotsByName(ChessWindow);
    } // setupUi

    void retranslateUi(QMainWindow *ChessWindow)
    {
        ChessWindow->setWindowTitle(QCoreApplication::translate("ChessWindow", "MainWindow", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ChessWindow: public Ui_ChessWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CHESSWINDOW_H
