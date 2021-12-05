#include "customgraphicsview.h"
#include "algorithm"
#include "QDir"
QPen transPenG = QPen(QColor(Qt::transparent));
QPen clickedPenG = QPen(QColor(78,228,78));
QLabel *lbl;
CustomGraphicsView::CustomGraphicsView(QWidget *parent) : QGraphicsView(parent)
{
    lbl=new QLabel(this);

    myScene = new QGraphicsScene();
    this->setScene(myScene);
    this->setDragMode(ScrollHandDrag);
    this->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    this->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);

    QPixmap pip;
    setPanorama = myScene->addPixmap(pip);
}

double mainScale = 1.0;
double scaleF = 1.1;
void CustomGraphicsView::wheelEvent(QWheelEvent *event)
{
    setTransformationAnchor(QGraphicsView::AnchorUnderMouse);

    qDebug() << "event->pos() = " << event->position();
    qDebug() << "this->pos() = " << this->pos();
    qDebug() << "pos = " << mapFromGlobal(QCursor::pos());
    qDebug() << "event->scenePosition() = " << event->scenePosition();
    qDebug() << "ScenePos = " << mapToScene(mapFromGlobal(QCursor::pos()));

    if (event->angleDelta().y() > 0 && mainScale < 5){
            scale(scaleF, scaleF);
            mainScale *= scaleF;
        } else if (mainScale > 1.0 && event->angleDelta().y() < 0) {
            scale(1/scaleF, 1/scaleF);
            mainScale /= scaleF;
    }
}

void CustomGraphicsView::showEvent(QShowEvent *event){
    QGraphicsView::showEvent(event);
    this->horizontalScrollBar()->setValue(2893);
    this->verticalScrollBar()->setValue(1446);
}

void CustomGraphicsView::mouseReleaseEvent(QMouseEvent *event)
{
    QGraphicsView::mouseReleaseEvent(event);
    lbl->hide();
    for (int i = 0; i < allItems.count(); i++)
        allItems[i]->setPen(transPenG);
}

void CustomGraphicsView::mousePressEvent(QMouseEvent *event){
    QGraphicsView::mousePressEvent(event);
    qDebug() << mapToScene(event->pos());
        for (int i = 0; i < allItems.count(); i++){
            if (itemAt(event->pos()) == allItems[i]) {
                allItems[i]->setPen(clickedPenG);
                qTexts[i].replace("PATH", QDir::currentPath());
                lbl->setSizePolicy(QSizePolicy::Preferred, QSizePolicy::Minimum);
                lbl->setWordWrap(true);
                lbl->setGeometry(QCursor::pos().x(),QCursor::pos().y(),300,50);
                lbl->setText(qTexts[i]);
                lbl->setStyleSheet("background: #F5F5DC; padding: 4px; border: 1px solid; border-radius: 5px;");
                lbl->adjustSize();
                lbl->setMaximumHeight(400);
                lbl->show();
        }
    }
}
