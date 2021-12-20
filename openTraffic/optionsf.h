#ifndef OPTIONSF_H
#define OPTIONSF_H

#include <QWidget>
#include <ui_mainwindow.h>

namespace Ui {
class OptionsF;
}

class OptionsF : public QWidget
{
    Q_OBJECT

public:
    explicit OptionsF(QWidget *parent = nullptr);
    ~OptionsF();
    Ui::MainWindow *wui;

private slots:
    void on_pushButton_clicked();
    void on_renderDSlider_valueChanged(int value);
    void on_maxSpeedSlider_valueChanged(int value);
    void on_saveButton_clicked();

private:
    Ui::OptionsF *ui;
};

#endif // OPTIONSF_H
