#include "helperform.h"
#include "ui_helperform.h"

HelperForm::HelperForm(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::HelperForm)
{
    ui->setupUi(this);
}

HelperForm::~HelperForm()
{
    delete ui;
}

void HelperForm::on_startBtn_clicked()
{
    this->close();
}

