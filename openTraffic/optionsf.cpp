#include "optionsf.h"
#include "ui_optionsf.h"
#include <QFile>
#include <QDir>
#include <QMessageBox>

OptionsF::OptionsF(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::OptionsF)
{
    ui->setupUi(this);
    QString set_str;
    QFile settingsF(QDir::currentPath() + "/settings.ini");
    if (!settingsF.open(QFile::ReadOnly | QFile::Text))
        QMessageBox::critical(0,"Помилка","Не вдалося відкрити файл!");
    QTextStream stream(&settingsF);
    while (!stream.atEnd()){
        set_str.append(stream.readLine());
    }
    settingsF.close();
    QStringList L = set_str.split(";");
    ui->fpsCheckBox->setChecked(L[0].split("=")[1].toInt());
    ui->renderDSlider->setValue(L[1].split("=")[1].toInt());
    ui->renderDSliderValue->setText(QString::number(ui->renderDSlider->value()));
    ui->helperCheckBox->setChecked(L[2].split("=")[1].toInt());
    ui->maxSpeedSlider->setValue(L[3].split("=")[1].toInt());
    ui->maxSpeedSliderValue->setText(QString::number(ui->maxSpeedSlider->value()));
    ui->keyboardMoveCB->setChecked(L[4].split("=")[1].toInt());
    ui->ghost->setChecked(L[5].split("=")[1].toInt());
}

OptionsF::~OptionsF()
{
    delete ui;
}

void OptionsF::on_pushButton_clicked()
{
    close();
    wui->centralwidget->setVisible(1);
}

void OptionsF::on_renderDSlider_valueChanged(int value)
{
    ui->renderDSliderValue->setText(QString::number(value));
}

void OptionsF::on_maxSpeedSlider_valueChanged(int value)
{
    ui->maxSpeedSliderValue->setText(QString::number(value));
}

void OptionsF::on_saveButton_clicked()
{
    QFile settingsF(QDir::currentPath() + "/settings.ini");
    if (!settingsF.open(QFile::WriteOnly | QFile::Text))
        QMessageBox::critical(0,"Помилка","Не вдалося відкрити файл!");
    QTextStream out(&settingsF);
    out << "showfps=" + QString::number(ui->fpsCheckBox->isChecked()) + ";\n";
    out << "renderdistance=" + QString::number(ui->renderDSlider->value()) + ";\n";
    out << "helper=" + QString::number(ui->helperCheckBox->isChecked()) + ";\n";
    out << "maxspeed=" + QString::number(ui->maxSpeedSlider->value()) + ";\n";
    out << "keyboardmove=" + QString::number(ui->keyboardMoveCB->isChecked()) + ";\n";
    out << "ghost="+QString::number(ui->ghost->isChecked())+";";
    settingsF.close();
    QMessageBox::information(0,"Інформація","Зміни збережено!");
}
