#include "leaderboard.h"
#include "ui_leaderboard.h"

LeaderBoard::LeaderBoard(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::LeaderBoard)
{
    ui->setupUi(this);
}

LeaderBoard::~LeaderBoard()
{
    delete ui;
}

void LeaderBoard::on_pushButton_clicked()
{
    close();
    wui->centralwidget->setVisible(1);
}
