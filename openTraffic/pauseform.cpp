#include "pauseform.h"
#include "ui_pauseform.h"
#include "mainwindow.h"
pauseform::pauseform(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::pauseform)
{
    ui->setupUi(this);
}

pauseform::~pauseform()
{
    delete ui;
}

void pauseform::keyPressEvent(QKeyEvent *e)
{
    if (e->nativeScanCode() == 1)
        close();
}

void pauseform::on_backButton_clicked()
{
    close();
}

void pauseform::on_menuButton_clicked()
{
    MainWindow *mw = new MainWindow();
    mw->resize(this->width(),this->height());
    mw->setWindowState(Qt::WindowFullScreen);
    mw->show();
    close();
    parentWidget()->close();
}
