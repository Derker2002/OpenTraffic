#ifndef HELPERFORM_H
#define HELPERFORM_H

#include <QDialog>

namespace Ui {
class HelperForm;
}

class HelperForm : public QDialog
{
    Q_OBJECT

public:
    explicit HelperForm(QWidget *parent = nullptr);
    ~HelperForm();

private slots:
    void on_startBtn_clicked();

private:
    Ui::HelperForm *ui;
};

#endif // HELPERFORM_H
