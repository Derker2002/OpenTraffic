#ifndef ABOUTUS_H
#define ABOUTUS_H

#include <QWidget>
#include <ui_mainwindow.h>

namespace Ui {
class AboutUs;
}

class AboutUs : public QWidget
{
    Q_OBJECT

public:
    explicit AboutUs(QWidget *parent = nullptr);
    ~AboutUs();
    Ui::MainWindow *wui;

private slots:
    void on_GitHub_clicked();

    void on_pushButton_clicked();

private:
    Ui::AboutUs *ui;
};

#endif // ABOUTUS_H
