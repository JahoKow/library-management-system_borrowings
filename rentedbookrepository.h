#ifndef RENTEDBOOKREPOSITORY_H
#define RENTEDBOOKREPOSITORY_H
#include <QSqlDatabase>
#include <QList>
#include "bookentity.h"

class RentedBookRepository {
public:
    explicit RentedBookRepository(QSqlDatabase db);
    std::optional<BookEntity> getById(int id);
    QList<BookEntity> getAll();
    std::optional<int> create(RentedBookEntity book);
private:
    QSqlDatabase db;
};
#endif // RENTEDBOOKREPOSITORY_H
