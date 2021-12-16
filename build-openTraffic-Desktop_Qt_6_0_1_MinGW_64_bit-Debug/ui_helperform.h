/********************************************************************************
** Form generated from reading UI file 'helperform.ui'
**
** Created by: Qt User Interface Compiler version 6.1.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HELPERFORM_H
#define UI_HELPERFORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_HelperForm
{
public:
    QGridLayout *gridLayout_2;
    QWidget *BackGround1;
    QGridLayout *BackGround;
    QLabel *label;
    QPushButton *startBtn;
    QWidget *GridLayout;
    QGridLayout *gridLayout;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QGridLayout *gridLayout_3;
    QFrame *line;
    QLabel *label_3;
    QLabel *carinf;
    QFrame *line_2;
    QLabel *label_2;
    QLabel *label_4;

    void setupUi(QDialog *HelperForm)
    {
        if (HelperForm->objectName().isEmpty())
            HelperForm->setObjectName(QString::fromUtf8("HelperForm"));
        HelperForm->setWindowModality(Qt::WindowModal);
        HelperForm->resize(943, 667);
        HelperForm->setFocusPolicy(Qt::NoFocus);
        HelperForm->setModal(true);
        gridLayout_2 = new QGridLayout(HelperForm);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        BackGround1 = new QWidget(HelperForm);
        BackGround1->setObjectName(QString::fromUtf8("BackGround1"));
        BackGround1->setStyleSheet(QString::fromUtf8("QWidget#BackGround1 {\n"
"	background: qlineargradient(spread:pad, x1:0.5, y1:0, x2:0.5, y2:1, stop:0 rgba(49, 108, 117, 255), stop:0.5 rgba(64, 140, 153, 255), stop:1 rgba(49, 108, 117, 255));\n"
"	border-style: solid;\n"
"	border-width: 3px;\n"
"	border-color: rgb(24, 54, 58);\n"
"	border-radius: 30px;\n"
"	font-family: \"Arial\";\n"
"	font-size: 20px;\n"
"	font-weight: bold;\n"
"	color: #fff;\n"
"}"));
        BackGround = new QGridLayout(BackGround1);
        BackGround->setObjectName(QString::fromUtf8("BackGround"));
        BackGround->setContentsMargins(9, 10, 9, 30);
        label = new QLabel(BackGround1);
        label->setObjectName(QString::fromUtf8("label"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Maximum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy);
        QFont font;
        font.setFamilies({QString::fromUtf8("Arial")});
        font.setPointSize(26);
        font.setBold(true);
        label->setFont(font);
        label->setStyleSheet(QString::fromUtf8("color:#fff"));
        label->setAlignment(Qt::AlignCenter);

        BackGround->addWidget(label, 0, 0, 1, 1);

        startBtn = new QPushButton(BackGround1);
        startBtn->setObjectName(QString::fromUtf8("startBtn"));
        startBtn->setMinimumSize(QSize(300, 40));
        startBtn->setCursor(QCursor(Qt::PointingHandCursor));
        startBtn->setStyleSheet(QString::fromUtf8(" QPushButton {\n"
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

        BackGround->addWidget(startBtn, 3, 0, 1, 1);

        GridLayout = new QWidget(BackGround1);
        GridLayout->setObjectName(QString::fromUtf8("GridLayout"));
        GridLayout->setFocusPolicy(Qt::NoFocus);
        GridLayout->setStyleSheet(QString::fromUtf8("border : 0px solid blue;\n"
"border-top : 3px solid rgb(24, 54, 58);\n"
"background-color: rgb(24, 54, 58);"));
        gridLayout = new QGridLayout(GridLayout);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(9, 9, 9, 9);
        scrollArea = new QScrollArea(GridLayout);
        scrollArea->setObjectName(QString::fromUtf8("scrollArea"));
        scrollArea->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOn);
        scrollArea->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QString::fromUtf8("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 875, 1351));
        gridLayout_3 = new QGridLayout(scrollAreaWidgetContents);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        line = new QFrame(scrollAreaWidgetContents);
        line->setObjectName(QString::fromUtf8("line"));
        line->setAutoFillBackground(false);
        line->setStyleSheet(QString::fromUtf8("background-color:  rgba(64, 140, 153, 255);\n"
""));
        line->setFrameShape(QFrame::VLine);
        line->setFrameShadow(QFrame::Sunken);

        gridLayout_3->addWidget(line, 0, 2, 1, 1);

        label_3 = new QLabel(scrollAreaWidgetContents);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setPixmap(QPixmap(QString::fromUtf8("../build-openTraffic-Desktop_Qt_6_0_1_MinGW_64_bit-Debug/imgs/helper/panoinf.png")));
        label_3->setAlignment(Qt::AlignCenter);

        gridLayout_3->addWidget(label_3, 2, 1, 1, 3);

        carinf = new QLabel(scrollAreaWidgetContents);
        carinf->setObjectName(QString::fromUtf8("carinf"));
        carinf->setPixmap(QPixmap(QString::fromUtf8("../build-openTraffic-Desktop_Qt_6_0_1_MinGW_64_bit-Debug/imgs/helper/carcontrl.png")));

        gridLayout_3->addWidget(carinf, 0, 1, 1, 1);

        line_2 = new QFrame(scrollAreaWidgetContents);
        line_2->setObjectName(QString::fromUtf8("line_2"));
        line_2->setStyleSheet(QString::fromUtf8("background-color:  rgba(64, 140, 153, 255);\n"
"border-color:  rgba(64, 140, 153, 255);"));
        line_2->setFrameShape(QFrame::HLine);
        line_2->setFrameShadow(QFrame::Sunken);

        gridLayout_3->addWidget(line_2, 1, 1, 1, 3);

        label_2 = new QLabel(scrollAreaWidgetContents);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setPixmap(QPixmap(QString::fromUtf8("../build-openTraffic-Desktop_Qt_6_0_1_MinGW_64_bit-Debug/imgs/helper/questinf.png")));

        gridLayout_3->addWidget(label_2, 0, 3, 1, 1);

        label_4 = new QLabel(scrollAreaWidgetContents);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setPixmap(QPixmap(QString::fromUtf8("../build-openTraffic-Desktop_Qt_6_0_1_MinGW_64_bit-Debug/imgs/helper/gl.png")));
        label_4->setAlignment(Qt::AlignCenter);

        gridLayout_3->addWidget(label_4, 3, 1, 1, 3);

        scrollArea->setWidget(scrollAreaWidgetContents);

        gridLayout->addWidget(scrollArea, 0, 1, 1, 1);


        BackGround->addWidget(GridLayout, 1, 0, 1, 1);


        gridLayout_2->addWidget(BackGround1, 1, 0, 1, 1);


        retranslateUi(HelperForm);

        QMetaObject::connectSlotsByName(HelperForm);
    } // setupUi

    void retranslateUi(QDialog *HelperForm)
    {
        HelperForm->setWindowTitle(QCoreApplication::translate("HelperForm", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("HelperForm", "\320\237 \320\240 \320\220 \320\222 \320\230 \320\233 \320\220  \320\223 \320\240 \320\230  \320\242 \320\220  \320\243 \320\237 \320\240 \320\220 \320\222 \320\233 I \320\235 \320\235 \320\257", nullptr));
        startBtn->setText(QCoreApplication::translate("HelperForm", "\320\237 \320\236 \320\247 \320\220 \320\242 \320\230  \320\242 \320\225 \320\241 \320\242 ", nullptr));
        label_3->setText(QString());
        carinf->setText(QString());
        label_2->setText(QString());
        label_4->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class HelperForm: public Ui_HelperForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HELPERFORM_H
