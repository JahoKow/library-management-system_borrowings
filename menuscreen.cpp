#include <QMessageBox>
#include "menuscreen.h"
#include "ui_menuscreen.h"

MenuScreen::MenuScreen(QWidget *parent, Controller *appController)
    : QWidget(parent)
    , ui(new Ui::MenuScreen), appController(appController)
{
    ui->setupUi(this);

    connect(ui->quitButton, &QPushButton::clicked, this, &MenuScreen::handleQuitButton);
}

MenuScreen::~MenuScreen()
{
    delete ui;
}

void MenuScreen::handleQuitButton()
{
    const auto result = QMessageBox::question(
        this,
        "Zamykanie aplikacji",
        "Czy na pewno chcesz zamknąć aplikację?",
        QMessageBox::Yes | QMessageBox::No,
        QMessageBox::No
        );

    if (result == QMessageBox::Yes) {
        QApplication::quit();
    }
}

void MenuScreen::handleBooksIndexPageButton()
{

}

void MenuScreen::handleReaderCardsPageButton()
{

}
