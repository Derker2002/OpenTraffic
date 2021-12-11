#ifndef PAUSEFORM_H
#define PAUSEFORM_H

#include <QDialog>
#include <QKeyEvent>
#include <mainwindow.h>

namespace Ui {
class pauseform;
}

class pauseform : public QDialog
{
    Q_OBJECT

public:
    explicit pauseform(QWidget *parent = nullptr);
    ~pauseform();

private slots:
    void on_backButton_clicked();

    void on_menuButton_clicked();

private:
    Ui::pauseform *ui;
    virtual void keyPressEvent(QKeyEvent *e);
    MainWindow *mw;
};

#endif // PAUSEFORM_H
