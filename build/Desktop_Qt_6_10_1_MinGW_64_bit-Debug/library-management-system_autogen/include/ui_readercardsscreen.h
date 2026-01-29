/********************************************************************************
** Form generated from reading UI file 'readercardsscreen.ui'
**
** Created by: Qt User Interface Compiler version 6.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_READERCARDSSCREEN_H
#define UI_READERCARDSSCREEN_H

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

class Ui_ReaderCardsScreen
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

    void setupUi(QWidget *ReaderCardsScreen)
    {
        if (ReaderCardsScreen->objectName().isEmpty())
            ReaderCardsScreen->setObjectName("ReaderCardsScreen");
        ReaderCardsScreen->resize(720, 400);
        verticalLayoutWidget = new QWidget(ReaderCardsScreen);
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


        retranslateUi(ReaderCardsScreen);

        QMetaObject::connectSlotsByName(ReaderCardsScreen);
    } // setupUi

    void retranslateUi(QWidget *ReaderCardsScreen)
    {
        ReaderCardsScreen->setWindowTitle(QCoreApplication::translate("ReaderCardsScreen", "Form", nullptr));
#if QT_CONFIG(tooltip)
        backButton->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        backButton->setText(QCoreApplication::translate("ReaderCardsScreen", "Powr\303\263t", nullptr));
        deleteRowsButton->setText(QCoreApplication::translate("ReaderCardsScreen", "Usu\305\204", nullptr));
        addRowButton->setText(QCoreApplication::translate("ReaderCardsScreen", "Dodaj", nullptr));
        refreshButton->setText(QCoreApplication::translate("ReaderCardsScreen", "Od\305\233wie\305\274", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ReaderCardsScreen: public Ui_ReaderCardsScreen {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_READERCARDSSCREEN_H
