/********************************************************************************
** Form generated from reading UI file 'calculator.ui'
**
** Created by: Qt User Interface Compiler version 6.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CALCULATOR_H
#define UI_CALCULATOR_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Calculator
{
public:
    QWidget *centralwidget;
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QPushButton *pushButton_4;
    QPushButton *pushButton_clear;
    QPushButton *pushButton_0;
    QPushButton *pushButton_8;
    QPushButton *pushButton_6;
    QPushButton *pushButton_3;
    QPushButton *pushButton_percent;
    QPushButton *pushButton_9;
    QPushButton *pushButton_com;
    QPushButton *pushButton_1;
    QPushButton *pushButton_5;
    QPushButton *pushButton_2;
    QPushButton *pushButton_7;
    QPushButton *pushButton_neg;
    QPushButton *pushButton_div;
    QPushButton *pushButton_mul;
    QPushButton *pushButton_sub;
    QPushButton *pushButton_add;
    QPushButton *pushButton_equal;
    QLabel *result;

    void setupUi(QMainWindow *Calculator)
    {
        if (Calculator->objectName().isEmpty())
            Calculator->setObjectName("Calculator");
        Calculator->resize(321, 513);
        centralwidget = new QWidget(Calculator);
        centralwidget->setObjectName("centralwidget");
        gridLayoutWidget = new QWidget(centralwidget);
        gridLayoutWidget->setObjectName("gridLayoutWidget");
        gridLayoutWidget->setGeometry(QRect(10, 130, 301, 381));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setObjectName("gridLayout");
        gridLayout->setContentsMargins(0, 0, 0, 0);
        pushButton_4 = new QPushButton(gridLayoutWidget);
        pushButton_4->setObjectName("pushButton_4");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(pushButton_4->sizePolicy().hasHeightForWidth());
        pushButton_4->setSizePolicy(sizePolicy);
        pushButton_4->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	color: white;\n"
"	background: #333;\n"
"	border-radius: 35%;\n"
"	font-size: 35px;\n"
"}\n"
"QPushButton:pressed {\n"
"	background: #4d4d4d;\n"
"}"));

        gridLayout->addWidget(pushButton_4, 2, 0, 1, 1);

        pushButton_clear = new QPushButton(gridLayoutWidget);
        pushButton_clear->setObjectName("pushButton_clear");
        sizePolicy.setHeightForWidth(pushButton_clear->sizePolicy().hasHeightForWidth());
        pushButton_clear->setSizePolicy(sizePolicy);
        pushButton_clear->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	color: black;\n"
"	background: #a5a5a5;\n"
"	border-radius: 35%;\n"
"	font-size: 25px;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"	background: #d9d9d9;\n"
"}"));

        gridLayout->addWidget(pushButton_clear, 0, 0, 1, 1);

        pushButton_0 = new QPushButton(gridLayoutWidget);
        pushButton_0->setObjectName("pushButton_0");
        sizePolicy.setHeightForWidth(pushButton_0->sizePolicy().hasHeightForWidth());
        pushButton_0->setSizePolicy(sizePolicy);
        pushButton_0->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	color: white;\n"
"	background: #333;\n"
"	border-radius: 35%;\n"
"	font-size: 35px;\n"
"}\n"
"QPushButton:pressed {\n"
"	background: #4d4d4d;\n"
"}"));

        gridLayout->addWidget(pushButton_0, 4, 0, 1, 2);

        pushButton_8 = new QPushButton(gridLayoutWidget);
        pushButton_8->setObjectName("pushButton_8");
        sizePolicy.setHeightForWidth(pushButton_8->sizePolicy().hasHeightForWidth());
        pushButton_8->setSizePolicy(sizePolicy);
        pushButton_8->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	color: white;\n"
"	background: #333;\n"
"	border-radius: 35%;\n"
"	font-size: 35px;\n"
"}\n"
"QPushButton:pressed {\n"
"	background: #4d4d4d;\n"
"}"));

        gridLayout->addWidget(pushButton_8, 1, 1, 1, 1);

        pushButton_6 = new QPushButton(gridLayoutWidget);
        pushButton_6->setObjectName("pushButton_6");
        sizePolicy.setHeightForWidth(pushButton_6->sizePolicy().hasHeightForWidth());
        pushButton_6->setSizePolicy(sizePolicy);
        pushButton_6->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	color: white;\n"
"	background: #333;\n"
"	border-radius: 35%;\n"
"	font-size: 35px;\n"
"}\n"
"QPushButton:pressed {\n"
"	background: #4d4d4d;\n"
"}"));

        gridLayout->addWidget(pushButton_6, 2, 2, 1, 1);

        pushButton_3 = new QPushButton(gridLayoutWidget);
        pushButton_3->setObjectName("pushButton_3");
        sizePolicy.setHeightForWidth(pushButton_3->sizePolicy().hasHeightForWidth());
        pushButton_3->setSizePolicy(sizePolicy);
        pushButton_3->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	color: white;\n"
"	background: #333;\n"
"	border-radius: 35%;\n"
"	font-size: 35px;\n"
"}\n"
"QPushButton:pressed {\n"
"	background: #4d4d4d;\n"
"}"));

        gridLayout->addWidget(pushButton_3, 3, 2, 1, 1);

        pushButton_percent = new QPushButton(gridLayoutWidget);
        pushButton_percent->setObjectName("pushButton_percent");
        sizePolicy.setHeightForWidth(pushButton_percent->sizePolicy().hasHeightForWidth());
        pushButton_percent->setSizePolicy(sizePolicy);
        pushButton_percent->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	color: black;\n"
"	background: #a5a5a5;\n"
"	border-radius: 35%;\n"
"	font-size: 25px;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"	background: #d9d9d9;\n"
"}"));

        gridLayout->addWidget(pushButton_percent, 0, 2, 1, 1);

        pushButton_9 = new QPushButton(gridLayoutWidget);
        pushButton_9->setObjectName("pushButton_9");
        sizePolicy.setHeightForWidth(pushButton_9->sizePolicy().hasHeightForWidth());
        pushButton_9->setSizePolicy(sizePolicy);
        pushButton_9->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	color: white;\n"
"	background: #333;\n"
"	border-radius: 35%;\n"
"	font-size: 35px;\n"
"}\n"
"QPushButton:pressed {\n"
"	background: #4d4d4d;\n"
"}"));

        gridLayout->addWidget(pushButton_9, 1, 2, 1, 1);

        pushButton_com = new QPushButton(gridLayoutWidget);
        pushButton_com->setObjectName("pushButton_com");
        sizePolicy.setHeightForWidth(pushButton_com->sizePolicy().hasHeightForWidth());
        pushButton_com->setSizePolicy(sizePolicy);
        pushButton_com->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	color: white;\n"
"	background: #333;\n"
"	border-radius: 35%;\n"
"	font-size: 35px;\n"
"}\n"
"QPushButton:pressed {\n"
"	background: #4d4d4d;\n"
"}"));

        gridLayout->addWidget(pushButton_com, 4, 2, 1, 1);

        pushButton_1 = new QPushButton(gridLayoutWidget);
        pushButton_1->setObjectName("pushButton_1");
        sizePolicy.setHeightForWidth(pushButton_1->sizePolicy().hasHeightForWidth());
        pushButton_1->setSizePolicy(sizePolicy);
        pushButton_1->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	color: white;\n"
"	background: #333;\n"
"	border-radius: 35%;\n"
"	font-size: 35px;\n"
"}\n"
"QPushButton:pressed {\n"
"	background: #4d4d4d;\n"
"}"));

        gridLayout->addWidget(pushButton_1, 3, 0, 1, 1);

        pushButton_5 = new QPushButton(gridLayoutWidget);
        pushButton_5->setObjectName("pushButton_5");
        sizePolicy.setHeightForWidth(pushButton_5->sizePolicy().hasHeightForWidth());
        pushButton_5->setSizePolicy(sizePolicy);
        pushButton_5->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	color: white;\n"
"	background: #333;\n"
"	border-radius: 35%;\n"
"	font-size: 35px;\n"
"}\n"
"QPushButton:pressed {\n"
"	background: #4d4d4d;\n"
"}"));

        gridLayout->addWidget(pushButton_5, 2, 1, 1, 1);

        pushButton_2 = new QPushButton(gridLayoutWidget);
        pushButton_2->setObjectName("pushButton_2");
        sizePolicy.setHeightForWidth(pushButton_2->sizePolicy().hasHeightForWidth());
        pushButton_2->setSizePolicy(sizePolicy);
        pushButton_2->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	color: white;\n"
"	background: #333;\n"
"	border-radius: 35%;\n"
"	font-size: 35px;\n"
"}\n"
"QPushButton:pressed {\n"
"	background: #4d4d4d;\n"
"}"));

        gridLayout->addWidget(pushButton_2, 3, 1, 1, 1);

        pushButton_7 = new QPushButton(gridLayoutWidget);
        pushButton_7->setObjectName("pushButton_7");
        sizePolicy.setHeightForWidth(pushButton_7->sizePolicy().hasHeightForWidth());
        pushButton_7->setSizePolicy(sizePolicy);
        pushButton_7->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	color: white;\n"
"	background: #333;\n"
"	border-radius: 35%;\n"
"	font-size: 35px;\n"
"}\n"
"QPushButton:pressed {\n"
"	background: #4d4d4d;\n"
"}"));

        gridLayout->addWidget(pushButton_7, 1, 0, 1, 1);

        pushButton_neg = new QPushButton(gridLayoutWidget);
        pushButton_neg->setObjectName("pushButton_neg");
        sizePolicy.setHeightForWidth(pushButton_neg->sizePolicy().hasHeightForWidth());
        pushButton_neg->setSizePolicy(sizePolicy);
        pushButton_neg->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	color: black;\n"
"	background: #a5a5a5;\n"
"	border-radius: 35%;\n"
"	font-size: 25px;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"	background: #d9d9d9;\n"
"}"));

        gridLayout->addWidget(pushButton_neg, 0, 1, 1, 1);

        pushButton_div = new QPushButton(gridLayoutWidget);
        pushButton_div->setObjectName("pushButton_div");
        sizePolicy.setHeightForWidth(pushButton_div->sizePolicy().hasHeightForWidth());
        pushButton_div->setSizePolicy(sizePolicy);
        pushButton_div->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	color: white;\n"
"	background: #f0b568;\n"
"	border-radius: 35%;\n"
"	font-size: 25px;\n"
"}\n"
"QPushButton:pressed {\n"
"	background: #f8d09b;\n"
"}"));

        gridLayout->addWidget(pushButton_div, 0, 3, 1, 1);

        pushButton_mul = new QPushButton(gridLayoutWidget);
        pushButton_mul->setObjectName("pushButton_mul");
        sizePolicy.setHeightForWidth(pushButton_mul->sizePolicy().hasHeightForWidth());
        pushButton_mul->setSizePolicy(sizePolicy);
        pushButton_mul->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	color: white;\n"
"	background: #f0b568;\n"
"	border-radius: 35%;\n"
"	font-size: 25px;\n"
"}\n"
"QPushButton:pressed {\n"
"	background: #f8d09b;\n"
"}"));

        gridLayout->addWidget(pushButton_mul, 1, 3, 1, 1);

        pushButton_sub = new QPushButton(gridLayoutWidget);
        pushButton_sub->setObjectName("pushButton_sub");
        sizePolicy.setHeightForWidth(pushButton_sub->sizePolicy().hasHeightForWidth());
        pushButton_sub->setSizePolicy(sizePolicy);
        pushButton_sub->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	color: white;\n"
"	background: #f0b568;\n"
"	border-radius: 35%;\n"
"	font-size: 25px;\n"
"}\n"
"QPushButton:pressed {\n"
"	background: #f8d09b;\n"
"}"));

        gridLayout->addWidget(pushButton_sub, 2, 3, 1, 1);

        pushButton_add = new QPushButton(gridLayoutWidget);
        pushButton_add->setObjectName("pushButton_add");
        sizePolicy.setHeightForWidth(pushButton_add->sizePolicy().hasHeightForWidth());
        pushButton_add->setSizePolicy(sizePolicy);
        pushButton_add->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	color: white;\n"
"	background: #f0b568;\n"
"	border-radius: 35%;\n"
"	font-size: 25px;\n"
"}\n"
"QPushButton:pressed {\n"
"	background: #f8d09b;\n"
"}"));

        gridLayout->addWidget(pushButton_add, 3, 3, 1, 1);

        pushButton_equal = new QPushButton(gridLayoutWidget);
        pushButton_equal->setObjectName("pushButton_equal");
        sizePolicy.setHeightForWidth(pushButton_equal->sizePolicy().hasHeightForWidth());
        pushButton_equal->setSizePolicy(sizePolicy);
        pushButton_equal->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	color: white;\n"
"	background: #f0b568;\n"
"	border-radius: 35%;\n"
"	font-size: 25px;\n"
"}\n"
"QPushButton:pressed {\n"
"	background: #f8d09b;\n"
"}"));

        gridLayout->addWidget(pushButton_equal, 4, 3, 1, 1);

        result = new QLabel(centralwidget);
        result->setObjectName("result");
        result->setGeometry(QRect(20, 30, 281, 81));
        QFont font;
        font.setPointSize(26);
        font.setBold(true);
        result->setFont(font);
        result->setStyleSheet(QString::fromUtf8("color: white;"));
        result->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        Calculator->setCentralWidget(centralwidget);

        retranslateUi(Calculator);

        QMetaObject::connectSlotsByName(Calculator);
    } // setupUi

    void retranslateUi(QMainWindow *Calculator)
    {
        Calculator->setWindowTitle(QCoreApplication::translate("Calculator", "MainWindow", nullptr));
        pushButton_4->setText(QCoreApplication::translate("Calculator", "4", nullptr));
        pushButton_clear->setText(QCoreApplication::translate("Calculator", "AC", nullptr));
        pushButton_0->setText(QCoreApplication::translate("Calculator", "0", nullptr));
        pushButton_8->setText(QCoreApplication::translate("Calculator", "8", nullptr));
        pushButton_6->setText(QCoreApplication::translate("Calculator", "6", nullptr));
        pushButton_3->setText(QCoreApplication::translate("Calculator", "3", nullptr));
        pushButton_percent->setText(QCoreApplication::translate("Calculator", "%", nullptr));
        pushButton_9->setText(QCoreApplication::translate("Calculator", "9", nullptr));
        pushButton_com->setText(QCoreApplication::translate("Calculator", ".", nullptr));
        pushButton_1->setText(QCoreApplication::translate("Calculator", "1", nullptr));
        pushButton_5->setText(QCoreApplication::translate("Calculator", "5", nullptr));
        pushButton_2->setText(QCoreApplication::translate("Calculator", "2", nullptr));
        pushButton_7->setText(QCoreApplication::translate("Calculator", "7", nullptr));
        pushButton_neg->setText(QCoreApplication::translate("Calculator", "+/-", nullptr));
        pushButton_div->setText(QCoreApplication::translate("Calculator", "/", nullptr));
        pushButton_mul->setText(QCoreApplication::translate("Calculator", "*", nullptr));
        pushButton_sub->setText(QCoreApplication::translate("Calculator", "-", nullptr));
        pushButton_add->setText(QCoreApplication::translate("Calculator", "+", nullptr));
        pushButton_equal->setText(QCoreApplication::translate("Calculator", "=", nullptr));
        result->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Calculator: public Ui_Calculator {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CALCULATOR_H
