#ifndef QUESTIONFORM_H
#define QUESTIONFORM_H

#include <QDialog>
#include <panoramaview.h>
namespace Ui {
class QuestionForm;
}

class QuestionForm : public QDialog
{
    Q_OBJECT

public:
    explicit QuestionForm(QWidget *parent = nullptr);
    ~QuestionForm();
    void setmLabel(QString label);
    void setQuestionLabel(QString question);
    void setAnswers(QString a1, QString a2, QString a3, QString a4);
    uint panonum;
    bool *cheked;
    int *scr;
    uint rq;

private slots:
    void on_panoButton_clicked();

    void on_answButton_clicked();

private:
    void keyPressEvent(QKeyEvent *e) override;
    Ui::QuestionForm *ui;
    PanoramaView *pv;
};

#endif // QUESTIONFORM_H
