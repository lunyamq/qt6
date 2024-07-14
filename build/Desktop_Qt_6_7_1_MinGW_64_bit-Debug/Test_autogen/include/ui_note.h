/********************************************************************************
** Form generated from reading UI file 'note.ui'
**
** Created by: Qt User Interface Compiler version 6.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NOTE_H
#define UI_NOTE_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Note
{
public:
    QAction *actionNew;
    QAction *actionOpen;
    QAction *actionExit;
    QAction *actionAuthor;
    QAction *actionHelp;
    QAction *actionSave;
    QWidget *centralwidget;
    QTextEdit *textEdit;
    QMenuBar *menubar;
    QMenu *menuFile;
    QMenu *menuHelp;
    QStatusBar *statusbar;
    QToolBar *toolBar;

    void setupUi(QMainWindow *Note)
    {
        if (Note->objectName().isEmpty())
            Note->setObjectName("Note");
        Note->resize(800, 600);
        actionNew = new QAction(Note);
        actionNew->setObjectName("actionNew");
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/note/img/create.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionNew->setIcon(icon);
        actionOpen = new QAction(Note);
        actionOpen->setObjectName("actionOpen");
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/note/img/open.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionOpen->setIcon(icon1);
        actionExit = new QAction(Note);
        actionExit->setObjectName("actionExit");
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/note/img/close.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionExit->setIcon(icon2);
        actionAuthor = new QAction(Note);
        actionAuthor->setObjectName("actionAuthor");
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/note/img/author.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionAuthor->setIcon(icon3);
        actionHelp = new QAction(Note);
        actionHelp->setObjectName("actionHelp");
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/note/img/question.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionHelp->setIcon(icon4);
        actionSave = new QAction(Note);
        actionSave->setObjectName("actionSave");
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/note/img/save.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionSave->setIcon(icon5);
        centralwidget = new QWidget(Note);
        centralwidget->setObjectName("centralwidget");
        textEdit = new QTextEdit(centralwidget);
        textEdit->setObjectName("textEdit");
        textEdit->setGeometry(QRect(0, 0, 801, 511));
        Note->setCentralWidget(centralwidget);
        menubar = new QMenuBar(Note);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 21));
        menuFile = new QMenu(menubar);
        menuFile->setObjectName("menuFile");
        menuHelp = new QMenu(menubar);
        menuHelp->setObjectName("menuHelp");
        Note->setMenuBar(menubar);
        statusbar = new QStatusBar(Note);
        statusbar->setObjectName("statusbar");
        Note->setStatusBar(statusbar);
        toolBar = new QToolBar(Note);
        toolBar->setObjectName("toolBar");
        Note->addToolBar(Qt::ToolBarArea::TopToolBarArea, toolBar);

        menubar->addAction(menuFile->menuAction());
        menubar->addAction(menuHelp->menuAction());
        menuFile->addAction(actionNew);
        menuFile->addAction(actionOpen);
        menuFile->addAction(actionSave);
        menuFile->addSeparator();
        menuFile->addAction(actionExit);
        menuHelp->addAction(actionAuthor);
        menuHelp->addAction(actionHelp);
        toolBar->addAction(actionNew);
        toolBar->addAction(actionOpen);
        toolBar->addAction(actionSave);
        toolBar->addSeparator();
        toolBar->addAction(actionHelp);

        retranslateUi(Note);

        QMetaObject::connectSlotsByName(Note);
    } // setupUi

    void retranslateUi(QMainWindow *Note)
    {
        Note->setWindowTitle(QCoreApplication::translate("Note", "MainWindow", nullptr));
        actionNew->setText(QCoreApplication::translate("Note", "New", nullptr));
#if QT_CONFIG(tooltip)
        actionNew->setToolTip(QCoreApplication::translate("Note", "Create new file", nullptr));
#endif // QT_CONFIG(tooltip)
        actionOpen->setText(QCoreApplication::translate("Note", "Open", nullptr));
#if QT_CONFIG(tooltip)
        actionOpen->setToolTip(QCoreApplication::translate("Note", "Open file", nullptr));
#endif // QT_CONFIG(tooltip)
        actionExit->setText(QCoreApplication::translate("Note", "Close", nullptr));
#if QT_CONFIG(tooltip)
        actionExit->setToolTip(QCoreApplication::translate("Note", "Close file", nullptr));
#endif // QT_CONFIG(tooltip)
        actionAuthor->setText(QCoreApplication::translate("Note", "Author", nullptr));
#if QT_CONFIG(tooltip)
        actionAuthor->setToolTip(QCoreApplication::translate("Note", "About author", nullptr));
#endif // QT_CONFIG(tooltip)
        actionHelp->setText(QCoreApplication::translate("Note", "Help", nullptr));
#if QT_CONFIG(tooltip)
        actionHelp->setToolTip(QCoreApplication::translate("Note", "About Qt", nullptr));
#endif // QT_CONFIG(tooltip)
        actionSave->setText(QCoreApplication::translate("Note", "Save", nullptr));
#if QT_CONFIG(tooltip)
        actionSave->setToolTip(QCoreApplication::translate("Note", "Save file", nullptr));
#endif // QT_CONFIG(tooltip)
        menuFile->setTitle(QCoreApplication::translate("Note", "File", nullptr));
        menuHelp->setTitle(QCoreApplication::translate("Note", "Help", nullptr));
        toolBar->setWindowTitle(QCoreApplication::translate("Note", "toolBar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Note: public Ui_Note {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NOTE_H
