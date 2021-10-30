#include "glview.h"
#include "ui_glview.h"
#include "stb_image.h"
GLView::GLView(QWidget *parent)
    : QOpenGLWidget(parent)

{

}

void GLView::initializeGL(){
glEnable(GL_DEPTH_TEST);
glEnable(GL_LIGHTING);
glEnable(GL_LIGHT0);
glEnable(GL_COLOR_MATERIAL);
glEnable(GL_TEXTURE_2D);
glEnable(GL_NORMALIZE);
glBindTexture(GL_TEXTURE_2D,texture);
city=new Parser(setPath("/obj/builds.obj"),"none");
zaparik=new Parser(setPath("/obj/car.obj"),setPath("/textures/avatar.png"));
skybox=new Parser(setPath("/obj/skybox.obj"),setPath("/textures/skytext.png"));
mroads=new Parser(setPath("/obj/MainRoads.obj"),setPath("/textures/road.png"));

timer=new QTimer();
connect(timer,SIGNAL(timeout()),this,SLOT(tTick()));
timer->start(5);

}

void GLView::resizeGL(int w, int h){
    //qDebug() <<"resized";
    glViewport(0,0,w,h);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    glFrustum(-1,1,-1,1,1,distance);
    glScalef(h/(float)w,1,1);

}

void GLView::paintGL(){
    pT=QTime::currentTime();


    float position[]= {-500,600,-200,0};
    glClearColor(0.8,0.9,1,0);
    glClear(GL_COLOR_BUFFER_BIT|GL_DEPTH_BUFFER_BIT);
    glMatrixMode(GL_MODELVIEW);
    glLoadIdentity();
    glColor3d(0.6,0.6,0);
    moveCamera();

    glLightfv(GL_LIGHT0,GL_POSITION,position);
    draw(mroads);
    draw(zaparik);
    draw(city);
    cT=QTime::currentTime();
    qDebug()<<(int)600/(int)(cT.msec()-pT.msec());
}
void GLView::mousePressEvent(QMouseEvent* mo){
mPos=mo->pos();
}
void GLView::mouseMoveEvent(QMouseEvent* e){
    //qDebug()<<"Moved";

xRot+=1/M_PI*(e->pos().y()-mPos.y());
yRot+=1/M_PI*(e->pos().x()-mPos.x());
mPos = e->pos();
update();
}
void GLView::moveCamera()
{
    glRotatef(xRot,1,0,0);
    glRotatef(yRot,0,1,0);
    glDisable(GL_LIGHTING);
    glDisable(GL_DEPTH_TEST);
    draw(skybox);
    glEnable(GL_DEPTH_TEST);
    glEnable(GL_LIGHTING);
    glTranslatef(xPos,yPos,zPos);
    //qDebug()<<xPos<<" "<<yPos<<" "<<zPos;
}
void GLView::draw(Parser *obj)
{

    glEnableClientState(GL_VERTEX_ARRAY);
    glEnableClientState(GL_NORMAL_ARRAY);
     //parse->SetPath(obj_path);
   opd=obj->GetPointsPose();
    ofd=obj->GetFaces();
    ond=obj->GetNormals();
   if(obj->IsColored())
   {
       otd=obj->GetTexture();
       glEnableClientState(GL_TEXTURE_COORD_ARRAY);
       glGenTextures(1,&texture);
           glTexParameteri(GL_TEXTURE_2D,GL_TEXTURE_WRAP_S,GL_REPEAT);
           glTexParameteri(GL_TEXTURE_2D,GL_TEXTURE_WRAP_T,GL_REPEAT);
           glTexParameteri(GL_TEXTURE_2D,GL_TEXTURE_MIN_FILTER,GL_NEAREST);
           glTexParameteri(GL_TEXTURE_2D,GL_TEXTURE_MAG_FILTER,GL_NEAREST);
           glTexImage2D(GL_TEXTURE_2D,0,GL_RGBA,obj->GetWidth(),obj->GetHeight(),0,GL_RGBA,GL_UNSIGNED_BYTE,obj->GetData());
           glTexCoordPointer(2,GL_FLOAT,0,texpose);
   }
    glVertexPointer(3,GL_FLOAT,0,pointpose);
    glNormalPointer(GL_FLOAT,0,normals);
    glColor3d(1,1,1);
    for(int i=0;i<ofd.size();i++)
    {
        pointpose[0]=opd[ofd[i].pnum].x;
        pointpose[1]=opd[ofd[i].pnum].y;
        pointpose[2]=opd[ofd[i].pnum].z;
        pointpose[3]=opd[ofd[i].pnum2].x;
        pointpose[4]=opd[ofd[i].pnum2].y;
        pointpose[5]=opd[ofd[i].pnum2].z;
        pointpose[6]=opd[ofd[i].pnum3].x;
        pointpose[7]=opd[ofd[i].pnum3].y;
        pointpose[8]=opd[ofd[i].pnum3].z;
        normals[0]=ond[ofd[i].nnum].x;
        normals[1]=ond[ofd[i].nnum].y;
        normals[2]=ond[ofd[i].nnum].z;
        normals[3]=ond[ofd[i].nnum2].x;
        normals[4]=ond[ofd[i].nnum2].y;
        normals[5]=ond[ofd[i].nnum2].z;
        normals[6]=ond[ofd[i].nnum3].x;
        normals[7]=ond[ofd[i].nnum3].y;
        normals[8]=ond[ofd[i].nnum3].z;
        if(obj->IsColored())
        {
        texpose[0]=otd[ofd[i].tnum].x;
        texpose[1]=-otd[ofd[i].tnum].y;
        texpose[2]=otd[ofd[i].tnum2].x;
        texpose[3]=-otd[ofd[i].tnum2].y;
        texpose[4]=otd[ofd[i].tnum3].x;
        texpose[5]=-otd[ofd[i].tnum3].y;
        }
        glDrawArrays(GL_TRIANGLES,0,3);
    }
    glDisableClientState(GL_VERTEX_ARRAY);
    glDisableClientState(GL_NORMAL_ARRAY);
    if(obj->IsColored())
    {
        glBindTexture(GL_TEXTURE_2D,0);
        glDisableClientState(GL_TEXTURE_COORD_ARRAY);
        glDeleteTextures(1,&texture);
    }
}


void GLView::keyPressEvent(QKeyEvent *e)
{


    if(e->key() == Qt::Key_W){if(fspeed<maxspeed)fspeed+=0.2;}
    if(e->key() == Qt::Key_S){if(fspeed>-2)fspeed-=0.2;}
    if(e->key() == Qt::Key_Q){yPos-=10;}
    if(e->key() == Qt::Key_E){yPos+=10;}
    if(e->key() == Qt::Key_A){if(fspeed<4)sspeed+=0.2;}//!!!!!!!!!!!!!! добавить таймер + отображение пофиксить
    if(e->key() == Qt::Key_D){if(fspeed>-4)fspeed-=0.2;}

    if (carsim){
        if(e->key() == Qt::Key_A){ycRot-=1; if(ycRot<-360)ycRot=0;}//!!!!!!!!!!!!!! добавить таймер + отображение пофиксить
        if(e->key() == Qt::Key_D){ycRot+=1; if(ycRot>360)ycRot=0;}
    }
    //qDebug()<<"fspeed: "<<fspeed;
    update();
}
void GLView::moveCar()
{

}

char *GLView::setPath(char *path)
{
    curpath=(QDir::currentPath()+path).toStdString();
    char* result=new char[curpath.size()+1];
    strcpy(result,curpath.c_str());
    return result;
}
void GLView::tTick()
{
    float angel;
    if(fspeed<=0.05 && fspeed>=-0.05)fspeed=0;
    if(fspeed!=0 ){
        if  (!carsim)
        {
        angel=-yRot/180*M_PI;
        xPos+=sin(angel)*fspeed*0.18;
        zPos+=cos(angel)*fspeed*0.18;
        }

        if(fspeed>0){fspeed-=0.05; sspeed-=0.1;}
        else {fspeed+=0.05;sspeed+=0.1;}

    }
    update();
}
GLView::~GLView()
{
    delete ui;
}



