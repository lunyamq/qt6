/********************************************************************************
** Form generated from reading UI file 'counter.ui'
**
** Created by: Qt User Interface Compiler version 6.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_COUNTER_H
#define UI_COUNTER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_counter
{
public:
    QPushButton *countButton;
    QLabel *num;
    QPushButton *clearButton;
    QPushButton *pushButton;

    void setupUi(QDialog *counter)
    {
        if (counter->objectName().isEmpty())
            counter->setObjectName("counter");
        counter->resize(547, 419);
        countButton = new QPushButton(counter);
        countButton->setObjectName("countButton");
        countButton->setGeometry(QRect(100, 220, 321, 141));
        countButton->setBaseSize(QSize(0, 0));
        countButton->setIconSize(QSize(16, 16));
        countButton->setAutoDefault(true);
        countButton->setFlat(false);
        num = new QLabel(counter);
        num->setObjectName("num");
        num->setGeometry(QRect(110, 70, 291, 91));
        QFont font;
        font.setPointSize(28);
        font.setBold(true);
        font.setItalic(false);
        num->setFont(font);
        num->setAlignment(Qt::AlignCenter);
        clearButton = new QPushButton(counter);
        clearButton->setObjectName("clearButton");
        clearButton->setGeometry(QRect(220, 390, 80, 24));
        pushButton = new QPushButton(counter);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(530, 20, 20, 20));
        pushButton->setStyleSheet(QString::fromUtf8("background-color: rgba(255, 255, 255, 0);\n"
"border: none;\n"
""));

        retranslateUi(counter);

        countButton->setDefault(false);


        QMetaObject::connectSlotsByName(counter);
    } // setupUi

    void retranslateUi(QDialog *counter)
    {
        counter->setWindowTitle(QCoreApplication::translate("counter", "Dialog", nullptr));
        countButton->setText(QCoreApplication::translate("counter", "Click", nullptr));
        num->setText(QCoreApplication::translate("counter", "0", nullptr));
        clearButton->setText(QCoreApplication::translate("counter", "clear", nullptr));
        pushButton->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class counter: public Ui_counter {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_COUNTER_H
