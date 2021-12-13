#include "saveform.h"
#include "ui_saveform.h"

#include <QDir>
#include <QFile>
#include <QMessageBox>
#include <mainwindow.h>
SaveForm::SaveForm(QWidget *parent,int score) :
    QDialog(parent),
    ui(new Ui::SaveForm)
{
    this->score=score;
    ui->setupUi(this);
    ui->label_2->setText("Правильних вiдповiдей: "+ QString::number(score/100));
}

SaveForm::~SaveForm()
{
    delete ui;
}

void SaveForm::on_panoButton_clicked()
{
    QFile save(QDir::currentPath() + "/files/scores.scor");
    if (!save.open(QFile::Append | QFile::Text))
        QMessageBox::critical(0,"Помилка","Не вдалося відкрити файл!");
    QTextStream out(&save);
    out <<ui->name->text() +"\t"+QString::number(score)+";\n";
    save.close();
    MainWindow *mw = new MainWindow();
    mw->resize(this->width(),this->height());
    mw->setWindowState(Qt::WindowFullScreen);
    mw->show();
    close();
    parentWidget()->close();
}

