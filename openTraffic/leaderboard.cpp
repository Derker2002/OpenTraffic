#include "leaderboard.h"
#include "ui_leaderboard.h"

#include <QDir>
#include <QFile>
#include <QMessageBox>
#include <QScrollBar>
LeaderBoard::LeaderBoard(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::LeaderBoard)
{
    ui->setupUi(this);
    ui->nameEdit->setText("");
    ui->scoreEdit->setText("");
    ui->nameEdit->setAlignment(Qt::AlignHCenter);
    ui->scoreEdit->setAlignment(Qt::AlignHCenter);
    QString set_str;
    QFile leaderBoard(QDir::currentPath() + "/files/scores.scor");
    try{
        if (!leaderBoard.open(QFile::ReadOnly | QFile::Text))
            throw Exceptions();

    } catch(Exceptions &exp){
        exp.filenotfound();
    }
    QTextStream stream(&leaderBoard);
    while (!stream.atEnd()){
        set_str.append(stream.readLine());
    }
    leaderBoard.close();
    QStringList leaders=set_str.split(";");


    QString temp;
    int bindex;
            for (int i = 0; i < leaders.length(); i++)
            {
                bindex=i;
                while (bindex-1>=0 && leaders[bindex]!="" && leaders[bindex].split('\t')[1].toInt() > leaders[bindex-1].split('\t')[1].toInt() )
                {
                   temp=leaders[bindex];
                   leaders[bindex]=leaders[bindex-1];
                   leaders[bindex-1]=temp;
                   bindex--;
                }
            }


    for(int i=0;i<leaders.length();i++){
        if (leaders[i] != ""){
            ui->nameEdit->append(leaders[i].split('\t')[0]+"\n");
            ui->scoreEdit->append(leaders[i].split('\t')[1]+"\n");
        }
    }
    connect(ui->nameEdit->verticalScrollBar(), SIGNAL(valueChanged(int)),ui->scoreEdit->verticalScrollBar(), SLOT(setValue(int)));
    connect(ui->scoreEdit->verticalScrollBar(), SIGNAL(valueChanged(int)),ui->nameEdit->verticalScrollBar(), SLOT(setValue(int)));
}

LeaderBoard::~LeaderBoard()
{
    delete ui;
}

void LeaderBoard::on_pushButton_clicked()
{
    close();
    wui->centralwidget->setVisible(1);
}

void LeaderBoard::scroll()
{

}
