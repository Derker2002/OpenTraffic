#include "exceptions.h"

#include <QMessageBox>
#include <QDebug>

Exceptions::Exceptions(int i)
{
    index=i;
}

void Exceptions::filenotfound()
{
    QMessageBox::critical(0,"Помилка","Не вдалось вiдкрити файл");
}

void Exceptions::picturenotfound()
{
    QMessageBox::critical(0,"Помилка","Не знайдено зображення");
}

void Exceptions::panoramanotfound()
{
    QMessageBox::critical(0,"Помилка","Не знайдено панораму: "+QString::number(index));
}

