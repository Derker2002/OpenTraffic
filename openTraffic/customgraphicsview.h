#ifndef CUSTOMGRAPHICSVIEW_H
#define CUSTOMGRAPHICSVIEW_H

#include <QGraphicsView>
#include <QWidget>
#include <QtWidgets>

class CustomGraphicsView : public QGraphicsView
{
public:
    CustomGraphicsView(QWidget *parent = 0);
    virtual ~CustomGraphicsView() {};
    QGraphicsPixmapItem *setPanorama;
    QGraphicsScene *myScene;
    QList<QGraphicsRectItem*> allItems;
    int pano_num;
    QVector<QString> qTexts;

protected:
    virtual void wheelEvent(QWheelEvent *event);
    virtual void mousePressEvent(QMouseEvent *event);
    virtual void showEvent(QShowEvent *event);
    virtual void mouseReleaseEvent(QMouseEvent *event);
private:

};

#endif // CUSTOMGRAPHICSVIEW_H
