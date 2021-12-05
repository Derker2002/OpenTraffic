#include "pauseform.h"
#include "ui_pauseform.h"

pauseform::pauseform(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::pauseform)
{
    ui->setupUi(this);
}

pauseform::~pauseform()
{
    delete ui;
}
