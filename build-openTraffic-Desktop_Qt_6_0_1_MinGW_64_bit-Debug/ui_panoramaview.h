/********************************************************************************
** Form generated from reading UI file 'panoramaview.ui'
**
** Created by: Qt User Interface Compiler version 6.0.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PANORAMAVIEW_H
#define UI_PANORAMAVIEW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>
#include "customgraphicsview.h"

QT_BEGIN_NAMESPACE

class Ui_PanoramaView
{
public:
    QGridLayout *gridLayout_2;
    QPushButton *nextButton;
    QGridLayout *gridLayout;
    CustomGraphicsView *graphicsView;
    QPushButton *stopButton;

    void setupUi(QWidget *PanoramaView)
    {
        if (PanoramaView->objectName().isEmpty())
            PanoramaView->setObjectName(QString::fromUtf8("PanoramaView"));
        PanoramaView->resize(400, 300);
        PanoramaView->setStyleSheet(QString::fromUtf8("background: qlineargradient(spread:pad, x1:0.5, y1:0, x2:0.5, y2:1, stop:0 rgba(89, 155, 179, 255), stop:0.2 rgba(64, 140, 153, 255));"));
        gridLayout_2 = new QGridLayout(PanoramaView);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        nextButton = new QPushButton(PanoramaView);
        nextButton->setObjectName(QString::fromUtf8("nextButton"));
        nextButton->setStyleSheet(QString::fromUtf8(" QPushButton {\n"
"     background: qlineargradient(spread:pad, x1:0.5, y1:0, x2:0.5, y2:1, stop:0 rgba(89, 155, 179, 255), stop:0.2 rgba(64, 140, 153, 255));\n"
"	border-style: solid;\n"
"	border-width: 1px;\n"
"	border-color: rgb(24, 54, 58);\n"
"	border-radius: 10px;\n"
"	font-family: \"Arial\";\n"
"	font-size: 20px;\n"
"	font-weight: bold;\n"
"	color: #fff;\n"
" }\n"
" QPushButton:hover {\n"
"     background: qlineargradient(spread:pad, x1:0.5, y1:1, x2:0.5, y2:0.011, stop:0 rgba(89, 155, 179, 255), stop:0.2 rgba(64, 140, 153, 255));\n"
" }\n"
" QPushButton:pressed {\n"
"     background: qlineargradient(spread:pad, x1:0.5, y1:0, x2:0.5, y2:1, stop:0 rgba(49, 108, 117, 255), stop:0.2 rgba(64, 140, 153, 255));\n"
" }"));

        gridLayout_2->addWidget(nextButton, 0, 0, 1, 1);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        graphicsView = new CustomGraphicsView(PanoramaView);
        graphicsView->setObjectName(QString::fromUtf8("graphicsView"));

        gridLayout->addWidget(graphicsView, 1, 0, 1, 1);


        gridLayout_2->addLayout(gridLayout, 1, 0, 1, 1);

        stopButton = new QPushButton(PanoramaView);
        stopButton->setObjectName(QString::fromUtf8("stopButton"));
        stopButton->setStyleSheet(QString::fromUtf8(" QPushButton {\n"
"     background: qlineargradient(spread:pad, x1:0.5, y1:0, x2:0.5, y2:1, stop:0 rgba(89, 155, 179, 255), stop:0.2 rgba(64, 140, 153, 255));\n"
"	border-style: solid;\n"
"	border-width: 1px;\n"
"	border-color: rgb(24, 54, 58);\n"
"	border-radius: 10px;\n"
"	font-family: \"Arial\";\n"
"	font-size: 20px;\n"
"	font-weight: bold;\n"
"	color: #fff;\n"
" }\n"
" QPushButton:hover {\n"
"     background: qlineargradient(spread:pad, x1:0.5, y1:1, x2:0.5, y2:0.011, stop:0 rgba(89, 155, 179, 255), stop:0.2 rgba(64, 140, 153, 255));\n"
" }\n"
" QPushButton:pressed {\n"
"     background: qlineargradient(spread:pad, x1:0.5, y1:0, x2:0.5, y2:1, stop:0 rgba(49, 108, 117, 255), stop:0.2 rgba(64, 140, 153, 255));\n"
" }"));

        gridLayout_2->addWidget(stopButton, 2, 0, 1, 1);


        retranslateUi(PanoramaView);

        QMetaObject::connectSlotsByName(PanoramaView);
    } // setupUi

    void retranslateUi(QWidget *PanoramaView)
    {
        PanoramaView->setWindowTitle(QCoreApplication::translate("PanoramaView", "Form", nullptr));
        nextButton->setText(QCoreApplication::translate("PanoramaView", "\320\235\320\260\321\201\321\202\321\203\320\277\320\275\320\260 \320\277\320\260\320\275\320\276\321\200\320\260\320\274\320\260", nullptr));
        stopButton->setText(QCoreApplication::translate("PanoramaView", "\320\227\320\260\320\262\320\265\321\200\321\210\320\270\321\202\320\270", nullptr));
    } // retranslateUi

};

namespace Ui {
    class PanoramaView: public Ui_PanoramaView {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PANORAMAVIEW_H
