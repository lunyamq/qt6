/********************************************************************************
** Form generated from reading UI file 'todo.ui'
**
** Created by: Qt User Interface Compiler version 6.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TODO_H
#define UI_TODO_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ToDo
{
public:
    QWidget *centralwidget;
    QTableView *tableView;
    QPushButton *pushButtonAdd;
    QPushButton *pushButtonRemove;

    void setupUi(QMainWindow *ToDo)
    {
        if (ToDo->objectName().isEmpty())
            ToDo->setObjectName("ToDo");
        ToDo->resize(750, 600);
        centralwidget = new QWidget(ToDo);
        centralwidget->setObjectName("centralwidget");
        tableView = new QTableView(centralwidget);
        tableView->setObjectName("tableView");
        tableView->setGeometry(QRect(80, 10, 591, 371));
        tableView->setLayoutDirection(Qt::LeftToRight);
        tableView->setAlternatingRowColors(false);
        pushButtonAdd = new QPushButton(centralwidget);
        pushButtonAdd->setObjectName("pushButtonAdd");
        pushButtonAdd->setGeometry(QRect(160, 400, 131, 131));
        pushButtonAdd->setCursor(QCursor(Qt::PointingHandCursor));
        pushButtonAdd->setStyleSheet(QString::fromUtf8("QPushButton  {\n"
"    border: none;\n"
"    outline: none;\n"
"}"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/todo/img/add.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButtonAdd->setIcon(icon);
        pushButtonAdd->setIconSize(QSize(128, 128));
        pushButtonRemove = new QPushButton(centralwidget);
        pushButtonRemove->setObjectName("pushButtonRemove");
        pushButtonRemove->setGeometry(QRect(460, 400, 131, 131));
        pushButtonRemove->setCursor(QCursor(Qt::PointingHandCursor));
        pushButtonRemove->setStyleSheet(QString::fromUtf8("QPushButton  {\n"
"    border: none;\n"
"    outline: none;\n"
"}"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/todo/img/remove.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButtonRemove->setIcon(icon1);
        pushButtonRemove->setIconSize(QSize(128, 128));
        ToDo->setCentralWidget(centralwidget);

        retranslateUi(ToDo);

        QMetaObject::connectSlotsByName(ToDo);
    } // setupUi

    void retranslateUi(QMainWindow *ToDo)
    {
        ToDo->setWindowTitle(QCoreApplication::translate("ToDo", "MainWindow", nullptr));
        pushButtonAdd->setText(QString());
        pushButtonRemove->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class ToDo: public Ui_ToDo {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TODO_H
