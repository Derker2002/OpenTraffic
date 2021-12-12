/********************************************************************************
** Form generated from reading UI file 'pauseform.ui'
**
** Created by: Qt User Interface Compiler version 6.1.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PAUSEFORM_H
#define UI_PAUSEFORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_pauseform
{
public:
    QGridLayout *gridLayout_2;
    QWidget *BackGround1;
    QGridLayout *BackGround;
    QLabel *label;
    QWidget *GridLayout;
    QGridLayout *gridLayout;
    QPushButton *backButton;
    QPushButton *menuButton;

    void setupUi(QDialog *pauseform)
    {
        if (pauseform->objectName().isEmpty())
            pauseform->setObjectName(QString::fromUtf8("pauseform"));
        pauseform->setWindowModality(Qt::WindowModal);
        pauseform->resize(656, 426);
        pauseform->setFocusPolicy(Qt::NoFocus);
        pauseform->setModal(true);
        gridLayout_2 = new QGridLayout(pauseform);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        BackGround1 = new QWidget(pauseform);
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

        GridLayout = new QWidget(BackGround1);
        GridLayout->setObjectName(QString::fromUtf8("GridLayout"));
        GridLayout->setFocusPolicy(Qt::NoFocus);
        GridLayout->setStyleSheet(QString::fromUtf8("border : 0px solid blue;\n"
"border-top : 3px solid rgb(24, 54, 58);\n"
"background-color: rgb(24, 54, 58);"));
        gridLayout = new QGridLayout(GridLayout);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(9, 9, 9, 9);
        backButton = new QPushButton(GridLayout);
        backButton->setObjectName(QString::fromUtf8("backButton"));
        backButton->setMinimumSize(QSize(300, 40));
        backButton->setCursor(QCursor(Qt::PointingHandCursor));
        backButton->setStyleSheet(QString::fromUtf8(" QPushButton {\n"
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

        gridLayout->addWidget(backButton, 0, 0, 1, 1);

        menuButton = new QPushButton(GridLayout);
        menuButton->setObjectName(QString::fromUtf8("menuButton"));
        menuButton->setMinimumSize(QSize(300, 40));
        menuButton->setCursor(QCursor(Qt::PointingHandCursor));
        menuButton->setStyleSheet(QString::fromUtf8(" QPushButton {\n"
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

        gridLayout->addWidget(menuButton, 1, 0, 1, 1);


        BackGround->addWidget(GridLayout, 1, 0, 1, 1);


        gridLayout_2->addWidget(BackGround1, 1, 0, 1, 1);


        retranslateUi(pauseform);

        QMetaObject::connectSlotsByName(pauseform);
    } // setupUi

    void retranslateUi(QDialog *pauseform)
    {
        pauseform->setWindowTitle(QCoreApplication::translate("pauseform", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("pauseform", "\320\237 \320\220 \320\243 \320\227 \320\220", nullptr));
        backButton->setText(QCoreApplication::translate("pauseform", "\320\237 \320\240 \320\236 \320\224 \320\236 \320\222 \320\226 \320\230 \320\242 \320\230", nullptr));
        menuButton->setText(QCoreApplication::translate("pauseform", "\320\237 \320\236 \320\222 \320\225 \320\240 \320\235 \320\243 \320\242 \320\230 \320\241 \320\257  \320\224 \320\236  \320\223 \320\236 \320\233 \320\236 \320\222 \320\235 \320\236 \320\223 \320\236  \320\234 \320\225 \320\235 \320\256", nullptr));
    } // retranslateUi

};

namespace Ui {
    class pauseform: public Ui_pauseform {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PAUSEFORM_H
