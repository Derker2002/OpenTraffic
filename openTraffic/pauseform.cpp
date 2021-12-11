#include "pauseform.h"
#include "ui_pauseform.h"

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
    mw = new MainWindow();
    close();
    parentWidget()->close();
}
