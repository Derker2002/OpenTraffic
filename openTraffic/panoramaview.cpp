#include "panoramaview.h"
#include "ui_panoramaview.h"

QPen clickedPen = QPen(QColor(78,228,78));
QString jsonSigns;

PanoramaView::PanoramaView(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::PanoramaView)
{
    ui->setupUi(this);
    try{
        QFile file(QDir::currentPath() + "/files/jsonPanorams.json");
        file.open(QFile::ReadOnly | QFile::Text);
        if(!file.isOpen()){
            throw Exceptions();
        }
        jsonSigns = file.readAll();
        file.close();

        ui->graphicsView->pano_num = 1;
        if(!QFile::exists(QDir::currentPath() + "/imgs/panorama_" + QString::number(ui->graphicsView->pano_num) + ".jpg")){
            throw Exceptions(ui->graphicsView->pano_num);
        }
        pip.load(QDir::currentPath() + "/imgs/panorama_" + QString::number(ui->graphicsView->pano_num) + ".jpg");
        loadSigns(ui->graphicsView->pano_num);
        ui->graphicsView->setPanorama->setPixmap(pip);
    }
    catch(Exceptions &exp){
        if(exp.index!=0){
            exp.panoramanotfound();
        }
        else{
        exp.filenotfound();
        }
        close();
        parentWidget()->close();
    }
}

PanoramaView::~PanoramaView()
{
    delete ui;
}

void PanoramaView::loadSigns(int panoNum){

    for (int i = 0; i < lastItems.size(); i++)
    {
        QGraphicsItem *gi = lastItems[i];
        if(gi->parentItem()==NULL) {
            delete gi;
        }
    }
    lastItems.clear();
    QJsonDocument jd = QJsonDocument::fromJson(jsonSigns.toUtf8());
    QJsonObject obj = jd.object();
    QJsonArray panoItems = obj["panorama_" + QString::number(panoNum)].toArray();
    QVector<QVector <QString>> items;
    QVector<QString> qtxts;

    foreach (const QJsonValue &val, panoItems){
        QVector<QString> item;
        qtxts.push_back(val.toObject().value("text").toString());
        item.push_back(val.toObject().value("x1").toString());
        item.push_back(val.toObject().value("y1").toString());
        item.push_back(val.toObject().value("x2").toString());
        item.push_back(val.toObject().value("y2").toString());
        items.push_back(item);
    }

    for (int i = 0; i < items.count(); i++){
        QGraphicsRectItem *rectItem =
                new QGraphicsRectItem(items[i][0].toInt(), items[i][1].toInt(),
                                    items[i][2].toInt() - items[i][0].toInt(),
                                    items[i][3].toInt() - items[i][1].toInt());
        rectItem->setPen(clickedPen);
        ui->graphicsView->myScene->addItem(rectItem);
        lastItems.append(rectItem);
    }
    ui->graphicsView->allItems = lastItems;
    ui->graphicsView->qTexts = qtxts;
}

void PanoramaView::on_nextButton_clicked()
{
//    ui->graphicsView->pano_num++;
//    pip.load(QDir::currentPath() + "/imgs/panorama_" + QString::number(ui->graphicsView->pano_num) + ".jpg");
//    loadSigns(ui->graphicsView->pano_num);
//    ui->graphicsView->setPanorama->setPixmap(pip);
//    ui->graphicsView->horizontalScrollBar()->setValue(pip.width() / 2.3);
//    ui->graphicsView->verticalScrollBar()->setValue(pip.height() / 2.3);
}

void PanoramaView::loadingPanorama(uint panon){
    ui->graphicsView->pano_num = panon;
    pip.load(QDir::currentPath() + "/imgs/panorama_" + QString::number(ui->graphicsView->pano_num) + ".jpg");
    loadSigns(ui->graphicsView->pano_num);
    ui->graphicsView->setPanorama->setPixmap(pip);
    ui->graphicsView->horizontalScrollBar()->setValue(pip.width() / 2.3);
    ui->graphicsView->verticalScrollBar()->setValue(pip.height() / 2.3);
}

void PanoramaView::on_stopButton_clicked()
{
    parentWidget()->setGeometry(pgeom);
    close();
}
