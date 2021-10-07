#include "glview.h"
#include "ui_glview.h"
#include "stb_image.h"
GLView::GLView(QWidget *parent)
    : QOpenGLWidget(parent)

{
    connect(&timer,SIGNAL(timeout()),SLOT(changeZ()));
    timer.start(100);
}

void GLView::initializeGL(){
glEnable(GL_DEPTH_TEST);
glEnable(GL_LIGHTING);
glEnable(GL_COLOR_MATERIAL);
glEnable(GL_TEXTURE_2D);
glBindTexture(GL_TEXTURE_2D,texture);
city=new Parser("buildings.obj");
roads=new Parser("roads2.obj");
}

void GLView::resizeGL(int w, int h){
    //qDebug() <<"resized";
    glViewport(0,0,w,h);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    glFrustum(-1,1,-1,1,1,10000);
    glScalef(h/(float)w,1,1);

}

void GLView::paintGL(){
    glClearColor(0.8,0.9,1,0);
    glClear(GL_COLOR_BUFFER_BIT|GL_DEPTH_BUFFER_BIT);
    glMatrixMode(GL_MODELVIEW);
    glLoadIdentity();
    glColor3d(0.6,0.6,0);
    moveCamera();
    draw(city,"none");
    glTranslatef(0,-5,0);
    draw(roads,"none");
}
void GLView::mousePressEvent(QMouseEvent* mo){
mPos=mo->pos();
}
void GLView::mouseMoveEvent(QMouseEvent* e){
    qDebug()<<"Moved";

xRot+=1/M_PI*(e->pos().y()-mPos.y());
yRot+=1/M_PI*(e->pos().x()-mPos.x());
mPos = e->pos();
update();
}
void GLView::moveCamera()
{
    glRotatef(xRot,1,0,0);
    glRotatef(yRot,0,1,0);
    glTranslatef(xPos,yPos,zPos);
    qDebug()<<xPos<<" "<<yPos<<" "<<zPos;
}
void GLView::draw(Parser *obj,char* texture_path)
{
    bool colored=true;
    if(!strcmp(texture_path,"none")) colored=false;
    glEnableClientState(GL_VERTEX_ARRAY);
     //parse->SetPath(obj_path);
   opd=obj->GetPointsPose();
    ofd=obj->GetFaces();
   if(colored)
   {
       otd=obj->GetTexture();
       glEnableClientState(GL_TEXTURE_COORD_ARRAY);
       data = stbi_load(texture_path, &width, &height, &cntr, 0);
       glGenTextures(1,&texture);
           glTexParameteri(GL_TEXTURE_2D,GL_TEXTURE_WRAP_S,GL_REPEAT);
           glTexParameteri(GL_TEXTURE_2D,GL_TEXTURE_WRAP_T,GL_REPEAT);
           glTexParameteri(GL_TEXTURE_2D,GL_TEXTURE_MIN_FILTER,GL_NEAREST);
           glTexParameteri(GL_TEXTURE_2D,GL_TEXTURE_MAG_FILTER,GL_NEAREST);
           glTexImage2D(GL_TEXTURE_2D,0,GL_RGBA,width,height,0,GL_RGBA,GL_UNSIGNED_BYTE,data);
           glTexCoordPointer(2,GL_FLOAT,0,texpose);
   }
    glVertexPointer(3,GL_FLOAT,0,pointpose);
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
        if(colored)
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
    if(colored)
    {
        glBindTexture(GL_TEXTURE_2D,0);
        glDisableClientState(GL_TEXTURE_COORD_ARRAY);
        glDeleteTextures(1,&texture);
    }
}

void GLView::keyPressEvent(QKeyEvent *e)
{
    float fspeed=0,sspeed=0,angel;

    if(e->key() == Qt::Key_W){fspeed=10;}
    if(e->key() == Qt::Key_S){fspeed=-10;}
    if(e->key() == Qt::Key_A){sspeed=-1;}
    if(e->key() == Qt::Key_D){sspeed=1;}
    if(e->key() == Qt::Key_Q){yPos-=10;}
    if(e->key() == Qt::Key_E){yPos+=10;}
    if(fspeed!=0){
        angel=-yRot/180*M_PI;
        xPos+=sin(angel)*fspeed;
        zPos+=cos(angel)*fspeed;
    }
    update();
}

GLView::~GLView()
{
    delete ui;
}



