#include "leaderboard.h"
#include "ui_leaderboard.h"

#include <QDir>
#include <QFile>
#include <QMessageBox>
LeaderBoard::LeaderBoard(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::LeaderBoard)
{
    ui->setupUi(this);
    ui->textEdit->setText("");
    QString set_str;
    QFile leaderBoard(QDir::currentPath() + "/files/scores.scor");
    if (!leaderBoard.open(QFile::ReadOnly | QFile::Text))
        QMessageBox::critical(0,"Помилка","Не вдалося відкрити файл!");
    QTextStream stream(&leaderBoard);
    while (!stream.atEnd()){
        set_str.append(stream.readLine());
    }
    leaderBoard.close();
    QStringList leaders=set_str.split(";");
    for(int i=0;i<leaders.length();i++)
        ui->textEdit->append(leaders[i]+"\n");
;
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
