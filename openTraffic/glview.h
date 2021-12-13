#ifndef GLVIEW_H
#define GLVIEW_H
#include <iostream>
#include <QTimer>
#include <QWidget>
#include <QtOpenGL>
#include <QPushButton>
#include <QDebug>
#include <QOpenGLWidget>
#include "parser.h"
#include <GL/gl.h>
#include <GL/glu.h>
#include <math.h>
#include <QMessageBox>
#include <panoramaview.h>
#include <QLabel>
#include <pauseform.h>
#include <questionform.h>
#include <saveform.h>
QT_BEGIN_NAMESPACE
namespace Ui { class GLView; }
QT_END_NAMESPACE

class GLView : public QOpenGLWidget
{
    Q_OBJECT
private:

    bool panorams_cheked[11];
    std::string curpath;
    bool show_q=true;
    bool carsim=true;
    bool showfps,helper,mmove;
    bool end=false;
    float fspeed=0,sspeed=0;
    float xRot=0;
    float yRot=90;
    float zRot=0;
    float xPos=0;
    float yPos=0;
    float zPos=0;
    float ycRot=-90;
    QTime pT,cT;
    unsigned int texture;
    float pointpose[9];
    float texpose[6];
    float normals[9];
    QPoint mPos;
    Ui::GLView *ui;
    SaveForm *sf;
    QStringList QUEST;
    std::vector<Parser::point> opd;
    std::vector<Parser::normals> ond;
    std::vector<Parser::textcord> otd;
    std::vector<Parser::surf> ofd;
    QuestionForm *qf;
    uint indexq;
    Parser *city,*zaparik,*skybox,*mroads,*cityroof,*trotuar,*signs,*biblio,*glinka,*checkp;
    /*Parser *atb,*atb2, *aurora,*cerkov1,*cerkov2;
    Parser *cerkov3,*papich,*ecotown,,*intour;
    Parser *macdak,*panorama,*teatr;
    Parser *ukraine,*zapor,*zazik,*zhd1;*/
    QTimer *timer;
    QLabel *fps;
    pauseform *pf;
    void draw(Parser *obj);
    void moveCamera();
    void moveCar();
    void setLight();
    char* setPath(char* path);
public:
    int score=0;
    int maxspeed=15;
    float distance=10000;
    GLView(QWidget *parent = nullptr);
    void initializeGL() override;
    void resizeGL(int w, int h) override;
    void paintGL() override;
    void mousePressEvent(QMouseEvent*)override;
    void mouseMoveEvent(QMouseEvent*)override;
    void keyPressEvent(QKeyEvent*)override;
    void show_qest(int index);
    ~GLView();
public slots:
    void tTick();
};
#endif // GLVIEW_H
