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
    qDebug()<<"closed";
    *cheked=true;
    pv->close();
    delete ui;
}

void QuestionForm::setQuestionLabel(QString question){
    ui->questionLabel->setText(question);
}

void QuestionForm::setmLabel(QString label){
    ui->label->setText(label);
}

void QuestionForm::setAnswers(QString a1, QString a2, QString a3, QString a4){

    if(a1[0]=='+') rq=1;
    else if(a2[0]=='+') rq=2;
    else if(a3[0]=='+') rq=3;
    else rq=4;
    ui->answ1->setChecked(true);
    ui->answ1->setText(a1.split('\t')[1]);
    ui->answ2->setText(a2.split('\t')[1]);
    ui->answ3->setText(a3.split('\t')[1]);
    ui->answ4->setText(a4.split('\t')[1]);
    qDebug()<<rq <<*scr;
}


void QuestionForm::on_panoButton_clicked()
{

    pv = new PanoramaView(this);
    pv->pgeom=this->geometry();
    this->setGeometry(parentWidget()->geometry());
    pv->setGeometry(parentWidget()->geometry());
    pv->setWindowState(Qt::WindowFullScreen);
    pv->loadingPanorama(panonum);
    pv->show();
}

void QuestionForm::on_answButton_clicked()
{
    switch(rq){
    case 1:
        if(ui->answ1->isChecked())*scr+=100;
        break;
    case 2:
        if(ui->answ2->isChecked())*scr+=100;
        break;
    case 3:
        if(ui->answ3->isChecked())*scr+=100;
        break;
    case 4:
        if(ui->answ4->isChecked())*scr+=100;
        break;
    }
    *cheked=true;
    this->close();
}

void QuestionForm::keyPressEvent(QKeyEvent *e)
{
    if (e->nativeScanCode() == 1)
    {
        *cheked=true;
        if(pv!=nullptr){
            this->setGeometry(pv->pgeom);
            pv->close();
        }
    }
    QDialog::keyPressEvent(e);
}

