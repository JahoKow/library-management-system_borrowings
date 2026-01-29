/********************************************************************************
** Form generated from reading UI file 'borrowingsscreen.ui'
**
** Created by: Qt User Interface Compiler version 6.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BORROWINGSSCREEN_H
#define UI_BORROWINGSSCREEN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTableView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_BorrowingsScreen
{
public:
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QPushButton *backButton;
    QPushButton *deleteButton;
    QSpacerItem *horizontalSpacer_3;
    QPushButton *nextButton;
    QPushButton *confirmButton;
    QTableView *tableView;

    void setupUi(QWidget *BorrowingsScreen)
    {
        if (BorrowingsScreen->objectName().isEmpty())
            BorrowingsScreen->setObjectName("BorrowingsScreen");
        BorrowingsScreen->resize(720, 400);
        verticalLayoutWidget = new QWidget(BorrowingsScreen);
        verticalLayoutWidget->setObjectName("verticalLayoutWidget");
        verticalLayoutWidget->setGeometry(QRect(0, 0, 721, 401));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setSpacing(16);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(16, 16, 16, 16);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        backButton = new QPushButton(verticalLayoutWidget);
        backButton->setObjectName("backButton");

        horizontalLayout->addWidget(backButton);

        deleteButton = new QPushButton(verticalLayoutWidget);
        deleteButton->setObjectName("deleteButton");

        horizontalLayout->addWidget(deleteButton);

        horizontalSpacer_3 = new QSpacerItem(16, 16, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_3);

        nextButton = new QPushButton(verticalLayoutWidget);
        nextButton->setObjectName("nextButton");

        horizontalLayout->addWidget(nextButton);

        confirmButton = new QPushButton(verticalLayoutWidget);
        confirmButton->setObjectName("confirmButton");

        horizontalLayout->addWidget(confirmButton);


        verticalLayout->addLayout(horizontalLayout);

        tableView = new QTableView(verticalLayoutWidget);
        tableView->setObjectName("tableView");

        verticalLayout->addWidget(tableView);


        retranslateUi(BorrowingsScreen);

        QMetaObject::connectSlotsByName(BorrowingsScreen);
    } // setupUi

    void retranslateUi(QWidget *BorrowingsScreen)
    {
        BorrowingsScreen->setWindowTitle(QCoreApplication::translate("BorrowingsScreen", "Form", nullptr));
#if QT_CONFIG(tooltip)
        backButton->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        backButton->setText(QCoreApplication::translate("BorrowingsScreen", "Powr\303\263t", nullptr));
        deleteButton->setText(QCoreApplication::translate("BorrowingsScreen", "Usuwanie", nullptr));
        nextButton->setText(QCoreApplication::translate("BorrowingsScreen", "Dalej", nullptr));
        confirmButton->setText(QCoreApplication::translate("BorrowingsScreen", "Potwierd\305\272", nullptr));
    } // retranslateUi

};

namespace Ui {
    class BorrowingsScreen: public Ui_BorrowingsScreen {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BORROWINGSSCREEN_H
