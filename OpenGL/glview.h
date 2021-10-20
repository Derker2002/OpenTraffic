#ifndef GLVIEW_H
#define GLVIEW_H
#include <iostream>
#include <QTimer>
#include <QWidget>
#include <QtOpenGL>
#include <QDebug>
#include <QOpenGLWidget>
#include "Parser.h"
#include <GL/gl.h>
#include <GL/glu.h>
#include <math.h>

QT_BEGIN_NAMESPACE
namespace Ui { class GLView; }
QT_END_NAMESPACE

class GLView : public QOpenGLWidget
{
    Q_OBJECT
private:
    bool carsim=false;
    float fspeed=0,sspeed=0;
    float xRot=0;
    float yRot=0;
    float zRot=0;
    float xPos=0;
    float yPos=0;
    float zPos=0;
    float ycRot=0;
    unsigned int texture;
    float pointpose[9];
    float texpose[6];
    float normals[9];
    QPoint mPos;

    Ui::GLView *ui;
    std::vector<Parser::point> opd;
    std::vector<Parser::normals> ond;
    std::vector<Parser::textcord> otd;
    std::vector<Parser::surf> ofd;

    Parser *city,*zaparik,*skybox,*mroads;
    QTimer *timer;

    void draw(Parser *obj);
    void moveCamera();
    void moveCar();
    void setLight();
public:
    int maxspeed=15;
    float distance=10000;
    GLView(QWidget *parent = nullptr);
    void initializeGL() override;
    void resizeGL(int w, int h) override;
    void paintGL() override;
    void mousePressEvent(QMouseEvent*)override;
    void mouseMoveEvent(QMouseEvent*)override;
    void keyPressEvent(QKeyEvent*)override;

    ~GLView();
public slots:
    void tTick();
};
#endif // GLVIEW_H
