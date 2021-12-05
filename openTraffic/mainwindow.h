#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "leaderboard.h"
#include "aboutus.h"
#include "optionsf.h"
#include "glview.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    virtual void paintEvent(QPaintEvent *pe);
    ~MainWindow();

private slots:
    void on_exitButton_clicked();

    void on_rulesButton_clicked();

    void on_leaderButton_clicked();

    void on_aboutUsButton_clicked();

    void on_optionsButton_clicked();

    void on_startButton_clicked();

private:
    Ui::MainWindow *ui;
    LeaderBoard *lb;
    AboutUs *au;
    OptionsF *opt;
    GLView *mg;
};
#endif // MAINWINDOW_H
