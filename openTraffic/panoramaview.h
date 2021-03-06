#ifndef PANORAMAVIEW_H
#define PANORAMAVIEW_H

#include <QWidget>
#include <QGraphicsRectItem>
#include <QDir>
#include "QJsonDocument"
#include "QJsonObject"
#include "QJsonValue"
#include "QJsonArray"
#include <exceptions.h>

namespace Ui {
class PanoramaView;
}

class PanoramaView : public QWidget
{
    Q_OBJECT

public:
    explicit PanoramaView(QWidget *parent = nullptr);
    ~PanoramaView();
    QList<QGraphicsRectItem*> lastItems;
    QPixmap pip;
    void loadingPanorama(uint panon);
    QRect pgeom;
private slots:
    void loadSigns(int panoNum);
    void on_stopButton_clicked();

private:
    Ui::PanoramaView *ui;
};

#endif // PANORAMAVIEW_H
