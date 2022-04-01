/********************************************************************************
** Form generated from reading UI file 'database.ui'
**
** Created by: Qt User Interface Compiler version 5.12.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DATABASE_H
#define UI_DATABASE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Database
{
public:
    QWidget *centralWidget;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *Database)
    {
        if (Database->objectName().isEmpty())
            Database->setObjectName(QString::fromUtf8("Database"));
        Database->resize(400, 300);
        centralWidget = new QWidget(Database);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        Database->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(Database);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 400, 18));
        Database->setMenuBar(menuBar);
        mainToolBar = new QToolBar(Database);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        Database->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(Database);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        Database->setStatusBar(statusBar);

        retranslateUi(Database);

        QMetaObject::connectSlotsByName(Database);
    } // setupUi

    void retranslateUi(QMainWindow *Database)
    {
        Database->setWindowTitle(QApplication::translate("Database", "Server", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Database: public Ui_Database {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DATABASE_H
