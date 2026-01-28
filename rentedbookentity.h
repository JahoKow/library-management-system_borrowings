#ifndef RENTEDBOOKENTITY_H
#define RENTEDBOOKENTITY_H
#include <QString>
#include "entity.h"

struct RentedBookEntity : Entity{
    int id;
    int book_id;
    int readercard_id;

    QString toString() override
    {
        return QString("RentedBookEntity(id=%1, book_id=%2, readercard_id=%3)").arg(id).arg(book_id).arg(readercard_id);
    }
};

#endif // RENTEDBOOKENTITY_H
