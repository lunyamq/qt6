/********************************************************************************
** Form generated from reading UI file 'player.ui'
**
** Created by: Qt User Interface Compiler version 6.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PLAYER_H
#define UI_PLAYER_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Player
{
public:
    QAction *actionAllo;
    QWidget *centralwidget;
    QLabel *openMediafileLabel;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *Player)
    {
        if (Player->objectName().isEmpty())
            Player->setObjectName("Player");
        Player->resize(800, 600);
        actionAllo = new QAction(Player);
        actionAllo->setObjectName("actionAllo");
        centralwidget = new QWidget(Player);
        centralwidget->setObjectName("centralwidget");
        openMediafileLabel = new QLabel(centralwidget);
        openMediafileLabel->setObjectName("openMediafileLabel");
        openMediafileLabel->setGeometry(QRect(160, 180, 481, 61));
        QFont font;
        font.setFamilies({QString::fromUtf8("Comic Sans MS")});
        font.setPointSize(24);
        font.setBold(true);
        openMediafileLabel->setFont(font);
        openMediafileLabel->setAlignment(Qt::AlignCenter);
        Player->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(Player);
        statusbar->setObjectName("statusbar");
        Player->setStatusBar(statusbar);

        retranslateUi(Player);

        QMetaObject::connectSlotsByName(Player);
    } // setupUi

    void retranslateUi(QMainWindow *Player)
    {
        Player->setWindowTitle(QCoreApplication::translate("Player", "MainWindow", nullptr));
        actionAllo->setText(QCoreApplication::translate("Player", "Allo", nullptr));
        openMediafileLabel->setText(QCoreApplication::translate("Player", "Click <a href=\" \">here</a> to open media file", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Player: public Ui_Player {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PLAYER_H
