#ifndef READERCARDSSCREEN_H
#define READERCARDSSCREEN_H

#include <QWidget>
#include <QSqlDatabase>
#include <QSqlTableModel>
#include "controller.h"

namespace Ui {
class ReaderCardsScreen;
}

class ReaderCardsScreen : public QWidget
{
    Q_OBJECT

public:
    explicit ReaderCardsScreen(QWidget *parent, Controller *appController, QSqlDatabase db);
    ~ReaderCardsScreen();

private:
    Ui::ReaderCardsScreen *ui;
    Controller *appController;
    QSqlDatabase db;
    QSqlTableModel *model;
    bool readyForCreateRow;
private slots:
    void handleBackButtonClick();
    void handleDeleteRowsButtonClick();
    void handleAddRowButtonClick();
    void handleRefreshButtonClick();
};

#endif // READERCARDSSCREEN_H
