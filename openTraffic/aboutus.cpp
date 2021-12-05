#include "aboutus.h"
#include "ui_aboutus.h"
#include <QDesktopServices>
#include <QUrl>
#include <QDir>

AboutUs::AboutUs(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::AboutUs)
{
    ui->setupUi(this);
    QPixmap pixmap(QDir::currentPath() + "/imgs/github.png");
    QIcon git(pixmap);
    ui->GitHub->setIcon(git);
    ui->GitHub->setIconSize(pixmap.rect().size());
}

AboutUs::~AboutUs()
{
    delete ui;
}

void AboutUs::on_GitHub_clicked()
{
    QString link = "https://github.com/Derker2002/OpenTraffic";
    QDesktopServices::openUrl(QUrl(link));
}

void AboutUs::on_pushButton_clicked()
{
    close();
    wui->centralwidget->setVisible(1);
}
