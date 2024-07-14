/********************************************************************************
** Form generated from reading UI file 'auth.ui'
**
** Created by: Qt User Interface Compiler version 6.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_AUTH_H
#define UI_AUTH_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Auth
{
public:
    QGroupBox *groupBox;
    QWidget *widget;
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *login;
    QLineEdit *loginLine;
    QHBoxLayout *horizontalLayout_2;
    QLabel *pass;
    QLineEdit *passLine;
    QPushButton *loginButton;
    QLabel *image;

    void setupUi(QDialog *Auth)
    {
        if (Auth->objectName().isEmpty())
            Auth->setObjectName("Auth");
        Auth->resize(541, 348);
        groupBox = new QGroupBox(Auth);
        groupBox->setObjectName("groupBox");
        groupBox->setGeometry(QRect(160, 50, 241, 181));
        widget = new QWidget(groupBox);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(40, 30, 161, 141));
        verticalLayout_2 = new QVBoxLayout(widget);
        verticalLayout_2->setObjectName("verticalLayout_2");
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        login = new QLabel(widget);
        login->setObjectName("login");
        QFont font;
        font.setFamilies({QString::fromUtf8("Comic Sans MS")});
        font.setPointSize(10);
        font.setBold(true);
        font.setItalic(false);
        login->setFont(font);

        horizontalLayout->addWidget(login);

        loginLine = new QLineEdit(widget);
        loginLine->setObjectName("loginLine");

        horizontalLayout->addWidget(loginLine);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        pass = new QLabel(widget);
        pass->setObjectName("pass");
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Comic Sans MS")});
        font1.setPointSize(10);
        font1.setBold(true);
        font1.setItalic(true);
        pass->setFont(font1);

        horizontalLayout_2->addWidget(pass);

        passLine = new QLineEdit(widget);
        passLine->setObjectName("passLine");

        horizontalLayout_2->addWidget(passLine);


        verticalLayout->addLayout(horizontalLayout_2);


        verticalLayout_2->addLayout(verticalLayout);

        loginButton = new QPushButton(widget);
        loginButton->setObjectName("loginButton");

        verticalLayout_2->addWidget(loginButton);

        image = new QLabel(Auth);
        image->setObjectName("image");
        image->setGeometry(QRect(20, 80, 121, 121));

        retranslateUi(Auth);

        QMetaObject::connectSlotsByName(Auth);
    } // setupUi

    void retranslateUi(QDialog *Auth)
    {
        Auth->setWindowTitle(QCoreApplication::translate("Auth", "Dialog", nullptr));
        groupBox->setTitle(QCoreApplication::translate("Auth", "Form", nullptr));
        login->setText(QCoreApplication::translate("Auth", "login", nullptr));
        pass->setText(QCoreApplication::translate("Auth", "pass", nullptr));
        loginButton->setText(QCoreApplication::translate("Auth", "Log In", nullptr));
        image->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Auth: public Ui_Auth {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_AUTH_H
