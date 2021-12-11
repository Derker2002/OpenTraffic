#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "QtGui"
#include "leaderboard.h"
#include "aboutus.h"
#include "optionsf.h"
#include "QDir"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->logo_label->setPixmap(QDir::currentPath() + "/imgs/logo.png");
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::paintEvent(QPaintEvent *pe){
    QPixmap pixmap;
        pixmap.load(QDir::currentPath() + "/imgs/main_screen.png");
        QPainter paint(this);
        int widWidth = ui->centralwidget->width();
        int widHeight = ui->centralwidget->height();
        pixmap = pixmap.scaled(widWidth, widHeight, Qt::KeepAspectRatioByExpanding);
        paint.drawPixmap(0, 0, pixmap);
        QWidget::paintEvent(pe);
}

void MainWindow::on_exitButton_clicked()
{
    close();
}

void MainWindow::on_rulesButton_clicked()
{
    QString link = QDir::currentPath() + "/files/pdr.pdf";
    QDesktopServices::openUrl(QUrl::fromLocalFile(link));
}

void MainWindow::on_optionsButton_clicked()
{
    ui->centralwidget->setVisible(0);
    opt = new OptionsF(this);
    opt->wui = this->ui;
    opt->move((QWidget::width() / 2) - opt->frameGeometry().width() / 2,
             (QWidget::height() / 2) - opt->frameGeometry().height() / 2);
    opt->show();
}

void MainWindow::on_leaderButton_clicked()
{
    ui->centralwidget->setVisible(0);
    lb = new LeaderBoard(this);
    lb->wui = this->ui;
    lb->move((QWidget::width() / 2) - lb->frameGeometry().width() / 2,
             (QWidget::height() / 2) - lb->frameGeometry().height() / 2);
    lb->show();
}

void MainWindow::on_aboutUsButton_clicked()
{
    ui->centralwidget->setVisible(0);
    au = new AboutUs(this);
    au->wui = this->ui;
    au->move((QWidget::width() / 2) - au->frameGeometry().width() / 2,
             (QWidget::height() / 2) - au->frameGeometry().height() / 2);
    au->show();
}

void MainWindow::on_startButton_clicked()
{
    mg = new GLView();
    mg->resize(this->width(),this->height());
    mg->setWindowState(Qt::WindowFullScreen);
    mg->show();
    this->close();
}
