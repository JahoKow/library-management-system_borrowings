/********************************************************************************
** Form generated from reading UI file 'loginscreen.ui'
**
** Created by: Qt User Interface Compiler version 6.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGINSCREEN_H
#define UI_LOGINSCREEN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_LoginScreen
{
public:
    QPushButton *submitButton;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QLineEdit *usernameLineEdit;
    QWidget *verticalLayoutWidget_2;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_2;
    QLineEdit *passwordLineEdit;
    QLabel *label_3;

    void setupUi(QWidget *LoginScreen)
    {
        if (LoginScreen->objectName().isEmpty())
            LoginScreen->setObjectName("LoginScreen");
        LoginScreen->resize(720, 400);
        submitButton = new QPushButton(LoginScreen);
        submitButton->setObjectName("submitButton");
        submitButton->setGeometry(QRect(290, 240, 161, 31));
        verticalLayoutWidget = new QWidget(LoginScreen);
        verticalLayoutWidget->setObjectName("verticalLayoutWidget");
        verticalLayoutWidget->setGeometry(QRect(260, 120, 221, 51));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(verticalLayoutWidget);
        label->setObjectName("label");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy);

        verticalLayout->addWidget(label);

        usernameLineEdit = new QLineEdit(verticalLayoutWidget);
        usernameLineEdit->setObjectName("usernameLineEdit");

        verticalLayout->addWidget(usernameLineEdit);

        verticalLayoutWidget_2 = new QWidget(LoginScreen);
        verticalLayoutWidget_2->setObjectName("verticalLayoutWidget_2");
        verticalLayoutWidget_2->setGeometry(QRect(260, 180, 221, 51));
        verticalLayout_2 = new QVBoxLayout(verticalLayoutWidget_2);
        verticalLayout_2->setObjectName("verticalLayout_2");
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(verticalLayoutWidget_2);
        label_2->setObjectName("label_2");
        sizePolicy.setHeightForWidth(label_2->sizePolicy().hasHeightForWidth());
        label_2->setSizePolicy(sizePolicy);

        verticalLayout_2->addWidget(label_2);

        passwordLineEdit = new QLineEdit(verticalLayoutWidget_2);
        passwordLineEdit->setObjectName("passwordLineEdit");

        verticalLayout_2->addWidget(passwordLineEdit);

        label_3 = new QLabel(LoginScreen);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(140, 20, 481, 51));
        QFont font;
        font.setPointSize(26);
        font.setBold(true);
        label_3->setFont(font);

        retranslateUi(LoginScreen);

        QMetaObject::connectSlotsByName(LoginScreen);
    } // setupUi

    void retranslateUi(QWidget *LoginScreen)
    {
        LoginScreen->setWindowTitle(QCoreApplication::translate("LoginScreen", "Form", nullptr));
        submitButton->setText(QCoreApplication::translate("LoginScreen", "Zaloguj si\304\231", nullptr));
        label->setText(QCoreApplication::translate("LoginScreen", "Nazwa u\305\274ytkownika", nullptr));
        label_2->setText(QCoreApplication::translate("LoginScreen", "Has\305\202o", nullptr));
        label_3->setText(QCoreApplication::translate("LoginScreen", "Library Management System", nullptr));
    } // retranslateUi

};

namespace Ui {
    class LoginScreen: public Ui_LoginScreen {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGINSCREEN_H
