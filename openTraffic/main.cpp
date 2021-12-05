#include "mainwindow.h"

#include <QApplication>
#include <QFile>
#include <QDir>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    a.setWindowIcon(QIcon(QDir::currentPath() + "/imgs/icon.ico"));
    QFile settingsF(QDir::currentPath() + "/settings.ini");
    if(!settingsF.exists()){
        settingsF.open(QFile::WriteOnly | QFile::Text);
        QTextStream out(&settingsF);
        out << "showfps=" + QString::number(0) + ";\n";
        out << "renderdistance=" + QString::number(50) + ";\n";
        out << "helper=" + QString::number(1) + ";\n";
        out << "maxspeed=" + QString::number(50) + ";\n";
        out << "keyboardmove=" + QString::number(0) + ";";
        settingsF.close();
    }
    MainWindow w;
    w.setWindowState(Qt::WindowFullScreen);
    w.show();
    return a.exec();
}
