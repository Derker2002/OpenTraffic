#include "questionform.h"
#include "ui_questionform.h"
#include "ui_panoramaview.h"

QuestionForm::QuestionForm(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::QuestionForm)
{
    ui->setupUi(this);
}

QuestionForm::~QuestionForm()
{
    delete ui;
}

void QuestionForm::setQuestionLabel(QString question){
    ui->questionLabel->setText(question);
}

void QuestionForm::setmLabel(QString label){
    ui->label->setText(label);
}

void QuestionForm::setAnswers(QString a1, QString a2, QString a3, QString a4){
    ui->answ1->setText(a1);
    ui->answ2->setText(a2);
    ui->answ3->setText(a3);
    ui->answ4->setText(a4);
}

void QuestionForm::on_panoButton_clicked()
{
    pv = new PanoramaView(this);
    //pv->resize(this->width(),this->height());
    pv->setWindowState(Qt::WindowFullScreen);
    pv->loadingPanorama(panonum);
    pv->show();
}
