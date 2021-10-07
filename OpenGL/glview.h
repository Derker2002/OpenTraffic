#ifndef GLVIEW_H
#define GLVIEW_H
#define STB_IMAGE_IMPLEMENTATION
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
    float xRot=0;
    float yRot=0;
    float zRot=-3;
    float xPos=0;
    float yPos=0;
    float zPos=0;
    int width,height,cntr;
    unsigned int texture;
    unsigned char *data;
    float pointpose[9];
    float texpose[6];
    QPoint mPos;

    Ui::GLView *ui;
    std::vector<Parser::point> opd;
    std::vector<Parser::normals> ond;
    std::vector<Parser::textcord> otd;
    std::vector<Parser::surf> ofd;

    Parser *city,*roads;
    QTimer timer;

    void draw(Parser *obj,char* texture);
    void moveCamera();
    void setLight();
public:
    GLView(QWidget *parent = nullptr);
    void initializeGL() override;
    void resizeGL(int w, int h) override;
    void paintGL() override;
    void mousePressEvent(QMouseEvent*)override;
    void mouseMoveEvent(QMouseEvent*)override;
    void keyPressEvent(QKeyEvent*)override;
    ~GLView();
public slots:
};
#endif // GLVIEW_H
