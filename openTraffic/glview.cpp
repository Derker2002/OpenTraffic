#include "glview.h"

#include "stb_image.h"

GLView::GLView(QWidget *parent)
    : QOpenGLWidget(parent)

{
    for(int i = 0; i < 11; i++)
        panorams_cheked[i]=false;
    openPanorama = new QPushButton(this);
    openPanorama->setText("Панорама");
    openPanorama->setGeometry(0,50,100,50);
    fps=new QLabel(this);
    fps->setFont(QFont("Tahoma",14,1,false));
    fps->resize(100,50);
    qf = new QuestionForm(this);
    Qt::WindowFlags flags = qf->windowFlags();
    qf->setWindowFlags(flags | Qt::Dialog | Qt::WindowStaysOnTopHint | Qt::X11BypassWindowManagerHint  | Qt::FramelessWindowHint);
    qf->setAttribute(Qt::WA_TranslucentBackground);
}

void GLView::initializeGL(){
QString set_str;
QFile settingsF(QDir::currentPath() + "/settings.ini");
if (!settingsF.open(QFile::ReadOnly | QFile::Text))
    QMessageBox::critical(0,"Помилка","Не вдалося відкрити файл!");
QTextStream stream(&settingsF);
while (!stream.atEnd()){
    set_str.append(stream.readLine());
}
settingsF.close();
QStringList L = set_str.split(";");
showfps=L[0].split("=")[1].toInt();
distance=L[1].split("=")[1].toInt()*100;
helper=L[2].split("=")[1].toInt();
maxspeed= L[3].split("=")[1].toInt();
mmove = L[4].split("=")[1].toInt();
if(showfps)fps->show();

QFile file(QDir::currentPath() + "/files/PDRQUESTIONS.pdr");
QString questform;
if (file.open(QFile::ReadOnly | QFile::Text)){
    QTextStream stream(&file);
    while (!stream.atEnd())
        questform.append(stream.readLine());
}
QUEST = questform.split(";");
file.close();

glEnable(GL_DEPTH_TEST);
glEnable(GL_LIGHTING);
glEnable(GL_LIGHT0);
glEnable(GL_COLOR_MATERIAL);
glEnable(GL_TEXTURE_2D);
glEnable(GL_NORMALIZE);
glBindTexture(GL_TEXTURE_2D,texture);

city=new Parser(setPath("/obj/SHORT_TOWN_MAIN.obj"),setPath("/textures/town/TOWN.png"));
cityroof=new Parser(setPath("/obj/SHORT_TOWN_ROOF.obj"),"none");
signs=new Parser(setPath("/obj/SHORT_SIGNS.obj"),setPath("/textures/signs/SHORT_SIGNS.png"));
skybox=new Parser(setPath("/obj/skybox.obj"),setPath("/textures/skybox/skytext.png"));
mroads=new Parser(setPath("/obj/SHORT_ROADS.obj"),setPath("/textures/roads/road.png"));
trotuar=new Parser(setPath("/obj/TROTUAR.obj"),setPath("/textures/buildings/RoadPlitka.png"));
zaparik=new Parser(setPath("/obj/ShcodaCar.obj"),setPath("/textures/CarColor.png"));
//atb=new Parser(setPath("/obj/ATB1.obj"),setPath("/textures/buildings/ATB.png"));
//atb2=new Parser(setPath("/obj/ATB2.obj"),setPath("/textures/buildings/ATB.png"));
//aurora=new Parser(setPath("/obj/Aurora.obj"),setPath("/textures/buildings/Aurora.png"));
//cerkov2=new Parser(setPath("/obj/Cerkov2.obj"),setPath("/textures/buildings/zolotie_grivni.png"));
//cerkov3=new Parser(setPath("/obj/Cerkov3.obj"),setPath("/textures/buildings/Gold.png"));
//papich=new Parser(setPath("/obj/Papich.obj"),setPath("/textures/buildings/Papich.png"));
glinka=new Parser(setPath("/obj/Glinka.obj"),setPath("/textures/buildings/glina.png"));
//zazik=new Parser(setPath("/obj/Zaz1k.obj"),setPath("/textures/buildings/zaz.png"));
//zhd1=new Parser(setPath("/obj/ZHD1.obj"),setPath("/textures/buildings/zhd.png"));
//ecotown=new Parser(setPath("/obj/EcoTower.obj"),setPath("/textures/buildings/ECO1.png"));
//panorama=new Parser(setPath("/obj/Panorama.obj"),setPath("/textures/buildings/ATB.png"));
//zapor=new Parser(setPath("/obj/Zapor.obj"),setPath("/textures/buildings/Zapor.png"));
//intour=new Parser(setPath("/obj/Intour.obj"),setPath("/textures/buildings/intour2.png"));
//ukraine=new Parser(setPath("/obj/Ukraina.obj"),setPath("/textures/buildings/ukraina.png"));
//cerkov1=new Parser(setPath("/obj/Cerkov1.obj"),setPath("/textures/buildings/cerkov1.png"));
timer=new QTimer();
connect(timer,SIGNAL(timeout()),this,SLOT(tTick()));
connect(openPanorama,SIGNAL(clicked()),this,SLOT(on_openPanorama_clicked()));
timer->start(5);
xPos=10152.4;
yPos=-66;
zPos=11328.8;
glTranslatef(xPos,yPos,zPos);
if(carsim)xRot=35;
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
    if(showfps) pT=QTime::currentTime();

    float position[]= {-500,600,-200,0};
    glClearColor(0.8,0.9,1,0);
    glClear(GL_COLOR_BUFFER_BIT|GL_DEPTH_BUFFER_BIT);
    glMatrixMode(GL_MODELVIEW);
    glLoadIdentity();
    glColor3d(0.6,0.6,0);
    if(carsim)
    {
        moveCar();
    }
        else
    {
        moveCamera();
    }
    glLightfv(GL_LIGHT0,GL_POSITION,position);
    //оптимезировать!!!
    draw(mroads);
    draw(city);
    draw(cityroof);
    draw(trotuar);

    draw(signs);
    //draw(aurora);
    //draw(papich);
    //draw(cerkov3);
    draw(glinka);

    /*  draw(ukraine);
    */

    if(showfps){
        cT=QTime::currentTime();
        fps->setText("fps: "+QString::number((int)600/(int)(cT.msec()-pT.msec())));
    }
}
void GLView::mousePressEvent(QMouseEvent* mo){
mPos=mo->pos();
}
void GLView::mouseMoveEvent(QMouseEvent* e){
    //qDebug()<<"Moved";

if(!carsim)xRot+=1/M_PI*(e->pos().y()-mPos.y());
yRot+=(1/M_PI*(e->pos().x()-mPos.x()));
if(yRot>360 || yRot<-360)yRot=yRot/360;
mPos = e->pos();
//qDebug()<<yRot;
update();
}
void GLView::moveCar()
{

    glDisable(GL_LIGHTING);
    glDisable(GL_DEPTH_TEST);
    glRotatef(xRot,1,0,0);
    glRotatef(yRot,0,1,0);
    draw(skybox);
    glEnable(GL_DEPTH_TEST);
    glEnable(GL_LIGHTING);
    glRotatef(-yRot,0,1,0);
    glTranslatef(0,-13,-20);

    glRotatef(ycRot+yRot,0,1,0);
    draw(zaparik);
    glRotatef(-ycRot-yRot,0,1,0);
    glRotatef(yRot,0,1,0);
    glTranslatef(xPos,yPos,zPos);

    //qDebug()<<xPos<<" "<<yPos<<" "<<zPos;
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
    if(!carsim){
        if(e->nativeScanCode() == 17 && fspeed<maxspeed){fspeed+=0.2;}
        if(e->nativeScanCode() == 31){if(fspeed>-2)fspeed-=0.2;}
        if(e->nativeScanCode() == 16){yPos-=10;}
        if(e->nativeScanCode() == 18){yPos+=10;}
        if(e->nativeScanCode() == 30){if(fspeed<4)sspeed+=0.2;}//!!!!!!!!!!!!!! добавить таймер + отображение пофиксить
        if(e->nativeScanCode() == 32){if(fspeed>-4)fspeed-=0.2;}
    }
    else
    {
        if(e->nativeScanCode() == 16){yPos-=1;}
        if(e->nativeScanCode() == 18){yPos+=1;}
        if(e->nativeScanCode() == 17 && fspeed<maxspeed){fspeed+=0.2;}
        if(e->nativeScanCode() == 31 && fspeed>-5){fspeed-=0.2;}
        if(mmove)
        {
            if(e->nativeScanCode() == 30  ){ycRot+=fspeed*0.17; if(ycRot<-360)ycRot=0;} //A//!!!!!!!!!!!!!! добавить таймер + отображение пофиксить
            if(e->nativeScanCode() == 32 ){ycRot-=fspeed*0.17; if(ycRot>360)ycRot=0;} //D
        }
    }
    //qDebug()<<"fspeed: "<<fspeed;
    if (e->nativeScanCode() == 1) {
        pf = new pauseform(this);
        Qt::WindowFlags flags = pf->windowFlags();
        pf->setFocus();
        pf->setWindowFlags(flags | Qt::Dialog | Qt::WindowStaysOnTopHint | Qt::X11BypassWindowManagerHint  | Qt::FramelessWindowHint);
        pf->setAttribute(Qt::WA_TranslucentBackground);
        pf->show();

    }
    update();

}
char *GLView::setPath(char *path)
{
    curpath=(QDir::currentPath()+path).toStdString();
    char* result=new char[curpath.size()+1];
    strcpy(result,curpath.c_str());
    return result;
}
void GLView::on_openPanorama_clicked()
{

}
void GLView::tTick()
{

    float angel,rot;

    if(ycRot>360 || ycRot<-360)ycRot=ycRot/360;
    if(fspeed<=0.05 && fspeed>=-0.05)fspeed=0;
    if(fspeed!=0 ){
        show_q=true;
        if(!carsim)angel=-yRot/180*M_PI;
        else if(carsim){
            //qDebug()<<yRot<<" "<<ycRot;
            if(!mmove)
            {
                if(abs(yRot)-abs(ycRot)<1 && abs(yRot)-abs(ycRot)>-1)
                {
                    ycRot=-yRot;
                }
                else
                {
                    if (0.09*fspeed>1.8) rot=1.8;
                    else   rot=0.09*fspeed;
                    if(abs(yRot)-abs(ycRot)>1 || abs(yRot)-abs(ycRot)<-1)
                    if(ycRot<-yRot )ycRot+=rot;
                    else ycRot-=rot;
                }
            }
            angel=ycRot/180*M_PI;}
        xPos+=sin(angel)*fspeed*0.03;
        zPos+=cos(angel)*fspeed*0.03;
        if(fspeed>0){fspeed-=0.05; sspeed-=0.1;}
        else {fspeed+=0.05;sspeed+=0.1;}

    }else
        if(fspeed==0 && show_q)
    {
        if(xPos < 10140.5 && zPos < 11338.4 && xPos>10075.2  && zPos>11309.1){
            qDebug()<<"Panorama1";
            indexq = 0;
            qf->panonum = 1;
            qf->setmLabel("З А П И Т А Н Н Я  1 / 11");
            qf->setQuestionLabel(QUEST[indexq]);
            qf->setAnswers(QUEST[indexq+1], QUEST[indexq+2], QUEST[indexq+3], QUEST[indexq+4]);
            qf->show();
        }

        if(xPos < 10008 && zPos < 11246 && xPos>9965 && zPos>11219){
            qDebug()<<"Panorama2";
            indexq = 5;
            qf->setmLabel("З А П И Т А Н Н Я  2 / 11");
            qf->setQuestionLabel(QUEST[indexq]);
            qf->setAnswers(QUEST[indexq+1], QUEST[indexq+2], QUEST[indexq+3], QUEST[indexq+4]);
            qf->show();
        }

        if(xPos < 9602 && zPos < 10899 && xPos>9553 && zPos>10871){
            qDebug()<<"Panorama3";
            indexq = 10;
            qf->setmLabel("З А П И Т А Н Н Я  3 / 11");
            qf->setQuestionLabel(QUEST[indexq]);
            qf->setAnswers(QUEST[indexq+1], QUEST[indexq+2], QUEST[indexq+3], QUEST[indexq+4]);
            qf->show();
        }

        if(xPos < 9245 && zPos < 10587 && xPos>9039 && zPos>10480){
            qDebug()<<"Panorama4";
            indexq = 15;
            qf->setmLabel("З А П И Т А Н Н Я  4 / 11");
            qf->setQuestionLabel(QUEST[indexq]);
            qf->setAnswers(QUEST[indexq+1], QUEST[indexq+2], QUEST[indexq+3], QUEST[indexq+4]);
            qf->show();
        }

        if(xPos < 8811 && zPos < 10256 && xPos>8760 && zPos>10223){
            indexq = 20;
            qDebug()<<"Panorama5";
            qf->setmLabel("З А П И Т А Н Н Я  5 / 11");
            qf->setQuestionLabel(QUEST[indexq]);
            qf->setAnswers(QUEST[indexq+1], QUEST[indexq+2], QUEST[indexq+3], QUEST[indexq+4]);
            qf->show();
        }

        if(xPos < 8389 && zPos < 9913 && xPos>8342 && zPos>9880){
            qDebug()<<"Panorama6";
            indexq = 25;
            qf->setmLabel("З А П И Т А Н Н Я  6 / 11");
            qf->setQuestionLabel(QUEST[indexq]);
            qf->setAnswers(QUEST[indexq+1], QUEST[indexq+2], QUEST[indexq+3], QUEST[indexq+4]);
            qf->show();
        }

        if(xPos < 10008 && zPos < 9419 && xPos>7744 && zPos>9389){
            qDebug()<<"Panorama7";
            indexq = 30;
            qf->setmLabel("З А П И Т А Н Н Я  7 / 11");
            qf->setQuestionLabel(QUEST[indexq]);
            qf->setAnswers(QUEST[indexq+1], QUEST[indexq+2], QUEST[indexq+3], QUEST[indexq+4]);
            qf->show();
        }

        if(xPos < 7581 && zPos < 9249 && xPos>7534 && zPos>9217){
            qDebug()<<"Panorama8";
            indexq = 35;
            qf->setmLabel("З А П И Т А Н Н Я  8 / 11");
            qf->setQuestionLabel(QUEST[indexq]);
            qf->setAnswers(QUEST[indexq+1], QUEST[indexq+2], QUEST[indexq+3], QUEST[indexq+4]);
            qf->show();
        }

        if(xPos < 7195 && zPos < 8928 && xPos>7142 && zPos>8893){
            qDebug()<<"Panorama9";
            indexq = 40;
            qf->setmLabel("З А П И Т А Н Н Я  9 / 11");
            qf->setQuestionLabel(QUEST[indexq]);
            qf->setAnswers(QUEST[indexq+1], QUEST[indexq+2], QUEST[indexq+3], QUEST[indexq+4]);
            qf->show();
        }

        if(xPos < 7040 && zPos < 8804 && xPos>6994 && zPos>8775){
            qDebug()<<"Panorama10";
            indexq = 45;
            qf->setmLabel("З А П И Т А Н Н Я  10 / 11");
            qf->setQuestionLabel(QUEST[indexq]);
            qf->setAnswers(QUEST[indexq+1], QUEST[indexq+2], QUEST[indexq+3], QUEST[indexq+4]);
            qf->show();
        }

        if(xPos < 6763 && zPos < 8586 && xPos>6704 && zPos>8558){
            qDebug()<<"Panorama11";
            indexq = 50;
            qf->setmLabel("З А П И Т А Н Н Я  11 / 11");
            qf->setQuestionLabel(QUEST[indexq]);
            qf->setAnswers(QUEST[indexq+1], QUEST[indexq+2], QUEST[indexq+3], QUEST[indexq+4]);
            qf->show();
        }

            qDebug()<<xPos<<" "<<zPos;
        show_q=false;
    }
    update();
}
GLView::~GLView()
{
    delete city,cityroof,zaparik,skybox,mroads,biblio,trotuar,ui;
    //del ,atb,atb2,aurora,cerkov1,cerkov2,cerkov3,papich,glinka,teatr,zazik,zhd1,ecotown,panorama,zapor,intour,macdak;
}
