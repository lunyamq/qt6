/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QSpacerItem *horizontalSpacer_2;
    QSpacerItem *horizontalSpacer;
    QPushButton *openCounterButton;
    QSpacerItem *verticalSpacer_3;
    QSpacerItem *horizontalSpacer_3;
    QPushButton *openNoteButton;
    QSpacerItem *verticalSpacer;
    QPushButton *openAuthButton;
    QSpacerItem *verticalSpacer_2;
    QSpacerItem *verticalSpacer_4;
    QPushButton *openCalcButton;
    QPushButton *openToDoButton;
    QPushButton *openPlayerButton;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(503, 565);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        gridLayoutWidget = new QWidget(centralwidget);
        gridLayoutWidget->setObjectName("gridLayoutWidget");
        gridLayoutWidget->setGeometry(QRect(10, 10, 481, 541));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setObjectName("gridLayout");
        gridLayout->setContentsMargins(0, 0, 0, 0);
        horizontalSpacer_2 = new QSpacerItem(10, 20, QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Minimum);

        gridLayout->addItem(horizontalSpacer_2, 2, 2, 1, 1);

        horizontalSpacer = new QSpacerItem(10, 20, QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Minimum);

        gridLayout->addItem(horizontalSpacer, 0, 2, 1, 1);

        openCounterButton = new QPushButton(gridLayoutWidget);
        openCounterButton->setObjectName("openCounterButton");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(openCounterButton->sizePolicy().hasHeightForWidth());
        openCounterButton->setSizePolicy(sizePolicy);
        QFont font;
        font.setPointSize(16);
        font.setBold(true);
        font.setItalic(true);
        openCounterButton->setFont(font);

        gridLayout->addWidget(openCounterButton, 0, 0, 1, 1);

        verticalSpacer_3 = new QSpacerItem(20, 10, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Fixed);

        gridLayout->addItem(verticalSpacer_3, 3, 4, 1, 1);

        horizontalSpacer_3 = new QSpacerItem(10, 20, QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Minimum);

        gridLayout->addItem(horizontalSpacer_3, 4, 2, 1, 1);

        openNoteButton = new QPushButton(gridLayoutWidget);
        openNoteButton->setObjectName("openNoteButton");
        sizePolicy.setHeightForWidth(openNoteButton->sizePolicy().hasHeightForWidth());
        openNoteButton->setSizePolicy(sizePolicy);
        openNoteButton->setFont(font);

        gridLayout->addWidget(openNoteButton, 4, 4, 1, 1);

        verticalSpacer = new QSpacerItem(20, 10, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Fixed);

        gridLayout->addItem(verticalSpacer, 1, 0, 1, 1);

        openAuthButton = new QPushButton(gridLayoutWidget);
        openAuthButton->setObjectName("openAuthButton");
        sizePolicy.setHeightForWidth(openAuthButton->sizePolicy().hasHeightForWidth());
        openAuthButton->setSizePolicy(sizePolicy);
        openAuthButton->setFont(font);

        gridLayout->addWidget(openAuthButton, 0, 4, 1, 1);

        verticalSpacer_2 = new QSpacerItem(20, 10, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Fixed);

        gridLayout->addItem(verticalSpacer_2, 3, 0, 1, 1);

        verticalSpacer_4 = new QSpacerItem(20, 10, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Fixed);

        gridLayout->addItem(verticalSpacer_4, 1, 4, 1, 1);

        openCalcButton = new QPushButton(gridLayoutWidget);
        openCalcButton->setObjectName("openCalcButton");
        sizePolicy.setHeightForWidth(openCalcButton->sizePolicy().hasHeightForWidth());
        openCalcButton->setSizePolicy(sizePolicy);
        openCalcButton->setFont(font);

        gridLayout->addWidget(openCalcButton, 4, 0, 1, 1);

        openToDoButton = new QPushButton(gridLayoutWidget);
        openToDoButton->setObjectName("openToDoButton");
        sizePolicy.setHeightForWidth(openToDoButton->sizePolicy().hasHeightForWidth());
        openToDoButton->setSizePolicy(sizePolicy);
        openToDoButton->setFont(font);

        gridLayout->addWidget(openToDoButton, 2, 0, 1, 1);

        openPlayerButton = new QPushButton(gridLayoutWidget);
        openPlayerButton->setObjectName("openPlayerButton");
        sizePolicy.setHeightForWidth(openPlayerButton->sizePolicy().hasHeightForWidth());
        openPlayerButton->setSizePolicy(sizePolicy);
        openPlayerButton->setFont(font);

        gridLayout->addWidget(openPlayerButton, 2, 4, 1, 1);

        MainWindow->setCentralWidget(centralwidget);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        openCounterButton->setText(QCoreApplication::translate("MainWindow", "Counter", nullptr));
        openNoteButton->setText(QCoreApplication::translate("MainWindow", "Note", nullptr));
        openAuthButton->setText(QCoreApplication::translate("MainWindow", "Auth", nullptr));
        openCalcButton->setText(QCoreApplication::translate("MainWindow", "Calculator", nullptr));
        openToDoButton->setText(QCoreApplication::translate("MainWindow", "To Do", nullptr));
        openPlayerButton->setText(QCoreApplication::translate("MainWindow", "Player", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
