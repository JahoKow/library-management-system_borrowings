#pragma once


inline void seedDatabase(QSqlDatabase db)
{
    QStringList stmts = {
        R"(
            INSERT OR IGNORE INTO books (title, description, pageCount) VALUES
            (
                'Cień nad miastem',
                'Mroczny kryminał osadzony w realiach współczesnej Warszawy, gdzie dziennikarz odkrywa niebezpieczną intrygę.',
                384
            ),
            (
                'Algorytmy przyszłości',
                'Przystępne wprowadzenie do świata sztucznej inteligencji i jej wpływu na codzienne życie.',
                256
            ),
            (
                'Podróż bez mapy',
                'Relacja z samotnej wyprawy przez Amerykę Południową i wewnętrznej przemiany autora.',
                312
            ),
            (
                'Smak dzieciństwa',
                'Książka kulinarna pełna wspomnień i tradycyjnych przepisów z polskiej wsi.',
                198
            ),
            (
                'Zaginiona stacja',
                'Powieść science fiction o załodze kosmicznej, która trafia na opuszczoną stację badawczą.',
                421
            ),
            (
                'Minimalizm w praktyce',
                'Poradnik pokazujący, jak uprościć życie, pracę i przestrzeń wokół siebie.',
                176
            );
        )",
        R"(
            INSERT OR IGNORE INTO readercards (firstName, lastName, email, age) VALUES
            ('Jan', 'Kowalski', 'jan.kowalski@test.com', 28),
            ('Anna', 'Nowak', 'anna.nowak@test.com', 34),
            ('Piotr', 'Zieliński', 'piotr.zielinski@test.com', 41),
            ('Katarzyna', 'Mazur', 'katarzyna.mazur@test.com', 25),
            ('Michał', 'Kaczmarek', 'michal.kaczmarek@test.com', 37),
            ('Agnieszka', 'Dąbrowska', 'agnieszka.dabrowska@test.com', 30);
        )"
    };
    QSqlQuery schemaQuery;
    for (const QString& sql : stmts) {
        if (!schemaQuery.exec(sql)) {
            qDebug() << schemaQuery.lastError().text();
        }
    }
}
