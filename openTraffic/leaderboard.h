#ifndef LEADERBOARD_H
#define LEADERBOARD_H

#include <QWidget>
#include <ui_mainwindow.h>

namespace Ui {
class LeaderBoard;
}

class LeaderBoard : public QWidget
{
    Q_OBJECT

public:
    explicit LeaderBoard(QWidget *parent = nullptr);
    ~LeaderBoard();
    Ui::MainWindow *wui;

private slots:
    void on_pushButton_clicked();

private:
    Ui::LeaderBoard *ui;
};

#endif // LEADERBOARD_H
