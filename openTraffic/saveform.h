#ifndef SAVEFORM_H
#define SAVEFORM_H

#include <QDialog>

namespace Ui {
class SaveForm;
}

class SaveForm : public QDialog
{
    Q_OBJECT

public:
    explicit SaveForm(QWidget *parent = nullptr,int score=0);
    ~SaveForm();

private slots:
    void on_panoButton_clicked();

private:
    Ui::SaveForm *ui;
    int score;
};

#endif // SAVEFORM_H
