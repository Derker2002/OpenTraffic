#ifndef PAUSEFORM_H
#define PAUSEFORM_H

#include <QWidget>

namespace Ui {
class pauseform;
}

class pauseform : public QWidget
{
    Q_OBJECT

public:
    explicit pauseform(QWidget *parent = nullptr);
    ~pauseform();

private:
    Ui::pauseform *ui;
};

#endif // PAUSEFORM_H
