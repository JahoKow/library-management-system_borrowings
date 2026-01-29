/********************************************************************************
** Form generated from reading UI file 'booksindexscreen.ui'
**
** Created by: Qt User Interface Compiler version 6.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BOOKSINDEXSCREEN_H
#define UI_BOOKSINDEXSCREEN_H

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

class Ui_BooksIndexScreen
{
public:
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QPushButton *backButton;
    QSpacerItem *horizontalSpacer_3;
    QPushButton *deleteRowsButton;
    QPushButton *addRowButton;
    QPushButton *refreshButton;
    QTableView *tableView;

    void setupUi(QWidget *BooksIndexScreen)
    {
        if (BooksIndexScreen->objectName().isEmpty())
            BooksIndexScreen->setObjectName("BooksIndexScreen");
        BooksIndexScreen->resize(720, 400);
        verticalLayoutWidget = new QWidget(BooksIndexScreen);
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

        horizontalSpacer_3 = new QSpacerItem(16, 16, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_3);

        deleteRowsButton = new QPushButton(verticalLayoutWidget);
        deleteRowsButton->setObjectName("deleteRowsButton");

        horizontalLayout->addWidget(deleteRowsButton);

        addRowButton = new QPushButton(verticalLayoutWidget);
        addRowButton->setObjectName("addRowButton");

        horizontalLayout->addWidget(addRowButton);

        refreshButton = new QPushButton(verticalLayoutWidget);
        refreshButton->setObjectName("refreshButton");

        horizontalLayout->addWidget(refreshButton);


        verticalLayout->addLayout(horizontalLayout);

        tableView = new QTableView(verticalLayoutWidget);
        tableView->setObjectName("tableView");

        verticalLayout->addWidget(tableView);


        retranslateUi(BooksIndexScreen);

        QMetaObject::connectSlotsByName(BooksIndexScreen);
    } // setupUi

    void retranslateUi(QWidget *BooksIndexScreen)
    {
        BooksIndexScreen->setWindowTitle(QCoreApplication::translate("BooksIndexScreen", "Form", nullptr));
#if QT_CONFIG(tooltip)
        backButton->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        backButton->setText(QCoreApplication::translate("BooksIndexScreen", "Powr\303\263t", nullptr));
        deleteRowsButton->setText(QCoreApplication::translate("BooksIndexScreen", "Usu\305\204", nullptr));
        addRowButton->setText(QCoreApplication::translate("BooksIndexScreen", "Dodaj", nullptr));
        refreshButton->setText(QCoreApplication::translate("BooksIndexScreen", "Od\305\233wie\305\274", nullptr));
    } // retranslateUi

};

namespace Ui {
    class BooksIndexScreen: public Ui_BooksIndexScreen {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BOOKSINDEXSCREEN_H
