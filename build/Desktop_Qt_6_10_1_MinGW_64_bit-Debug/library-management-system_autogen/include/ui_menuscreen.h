/********************************************************************************
** Form generated from reading UI file 'menuscreen.ui'
**
** Created by: Qt User Interface Compiler version 6.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MENUSCREEN_H
#define UI_MENUSCREEN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MenuScreen
{
public:
    QLabel *label_2;
    QPushButton *booksIndexPageButton;
    QPushButton *readerCardsPageButton;
    QPushButton *quitButton;
    QPushButton *borrowingsPageButton;

    void setupUi(QWidget *MenuScreen)
    {
        if (MenuScreen->objectName().isEmpty())
            MenuScreen->setObjectName("MenuScreen");
        MenuScreen->resize(720, 400);
        label_2 = new QLabel(MenuScreen);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(120, 30, 481, 51));
        QFont font;
        font.setPointSize(26);
        font.setBold(true);
        label_2->setFont(font);
        booksIndexPageButton = new QPushButton(MenuScreen);
        booksIndexPageButton->setObjectName("booksIndexPageButton");
        booksIndexPageButton->setGeometry(QRect(210, 90, 281, 51));
        readerCardsPageButton = new QPushButton(MenuScreen);
        readerCardsPageButton->setObjectName("readerCardsPageButton");
        readerCardsPageButton->setGeometry(QRect(210, 150, 281, 51));
        quitButton = new QPushButton(MenuScreen);
        quitButton->setObjectName("quitButton");
        quitButton->setGeometry(QRect(210, 270, 281, 41));
        borrowingsPageButton = new QPushButton(MenuScreen);
        borrowingsPageButton->setObjectName("borrowingsPageButton");
        borrowingsPageButton->setGeometry(QRect(210, 210, 281, 51));

        retranslateUi(MenuScreen);

        QMetaObject::connectSlotsByName(MenuScreen);
    } // setupUi

    void retranslateUi(QWidget *MenuScreen)
    {
        MenuScreen->setWindowTitle(QCoreApplication::translate("MenuScreen", "Form", nullptr));
        label_2->setText(QCoreApplication::translate("MenuScreen", "Library Management System", nullptr));
        booksIndexPageButton->setText(QCoreApplication::translate("MenuScreen", "Indeks ksi\304\205\305\274ek", nullptr));
        readerCardsPageButton->setText(QCoreApplication::translate("MenuScreen", "Karty czytelnika", nullptr));
        quitButton->setText(QCoreApplication::translate("MenuScreen", "Wyj\305\233cie", nullptr));
        borrowingsPageButton->setText(QCoreApplication::translate("MenuScreen", "Wypo\305\274yczenie", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MenuScreen: public Ui_MenuScreen {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MENUSCREEN_H
