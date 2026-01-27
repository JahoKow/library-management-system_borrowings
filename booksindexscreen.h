#ifndef BOOKSINDEXSCREEN_H
#define BOOKSINDEXSCREEN_H

#include <QWidget>
#include <QSqlTableModel>
#include "bookrepository.h"
#include "controller.h"

namespace Ui {
class BooksIndexScreen;
}

class BooksIndexScreen : public QWidget
{
    Q_OBJECT

public:
    explicit BooksIndexScreen(QWidget *parent, BookRepository bookRepository, QSqlDatabase db, Controller *appController);
    ~BooksIndexScreen();

private:
    Ui::BooksIndexScreen *ui;
    QSqlDatabase db;
    BookRepository bookRepository;
    Controller *appController;
    QSqlTableModel *model;
    bool readyForCreateRow;

private slots:
    void handleBackButton();
    void handleDeleteRowsButton();
    void handleAddRowButton();
    void handleRefreshButton();
};

#endif // BOOKSINDEXSCREEN_H
