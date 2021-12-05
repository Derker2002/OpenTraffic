/********************************************************************************
** Form generated from reading UI file 'options.ui'
**
** Created by: Qt User Interface Compiler version 6.0.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_OPTIONS_H
#define UI_OPTIONS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_OptBoard
{
public:
    QGridLayout *gridLayout_2;
    QWidget *BackGround;
    QGridLayout *gridLayout;
    QWidget *gridWidget;
    QGridLayout *LeadersView;
    QLabel *OptLabel;
    QPushButton *pushButton;

    void setupUi(QWidget *OptBoard)
    {
        if (OptBoard->objectName().isEmpty())
            OptBoard->setObjectName(QString::fromUtf8("OptBoard"));
        OptBoard->resize(661, 738);
        OptBoard->setAutoFillBackground(false);
        gridLayout_2 = new QGridLayout(OptBoard);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        BackGround = new QWidget(OptBoard);
        BackGround->setObjectName(QString::fromUtf8("BackGround"));
        BackGround->setLayoutDirection(Qt::LeftToRight);
        BackGround->setAutoFillBackground(false);
        BackGround->setStyleSheet(QString::fromUtf8("QWidget#BackGround {\n"
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
        gridLayout = new QGridLayout(BackGround);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setSizeConstraint(QLayout::SetDefaultConstraint);
        gridLayout->setContentsMargins(-1, 10, -1, 30);
        gridWidget = new QWidget(BackGround);
        gridWidget->setObjectName(QString::fromUtf8("gridWidget"));
        gridWidget->setStyleSheet(QString::fromUtf8("border : 0px solid blue;\n"
"border-top : 3px solid rgb(24, 54, 58);\n"
"background-color: rgb(24, 54, 58);"));
        LeadersView = new QGridLayout(gridWidget);
        LeadersView->setObjectName(QString::fromUtf8("LeadersView"));

        gridLayout->addWidget(gridWidget, 2, 0, 1, 1);

        OptLabel = new QLabel(BackGround);
        OptLabel->setObjectName(QString::fromUtf8("OptLabel"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Maximum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(OptLabel->sizePolicy().hasHeightForWidth());
        OptLabel->setSizePolicy(sizePolicy);
        QFont font;
        font.setFamily(QString::fromUtf8("Arial"));
        font.setPointSize(26);
        font.setBold(true);
        OptLabel->setFont(font);
        OptLabel->setStyleSheet(QString::fromUtf8("color: #fff;"));
        OptLabel->setScaledContents(false);
        OptLabel->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(OptLabel, 0, 0, 1, 1);

        pushButton = new QPushButton(BackGround);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        QSizePolicy sizePolicy1(QSizePolicy::MinimumExpanding, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(pushButton->sizePolicy().hasHeightForWidth());
        pushButton->setSizePolicy(sizePolicy1);
        pushButton->setMinimumSize(QSize(300, 40));
        pushButton->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton->setStyleSheet(QString::fromUtf8(" QPushButton {\n"
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

        gridLayout->addWidget(pushButton, 3, 0, 1, 1);


        gridLayout_2->addWidget(BackGround, 1, 0, 1, 1);


        retranslateUi(OptBoard);

        QMetaObject::connectSlotsByName(OptBoard);
    } // setupUi

    void retranslateUi(QWidget *OptBoard)
    {
        OptBoard->setWindowTitle(QCoreApplication::translate("OptBoard", "Form", nullptr));
        OptLabel->setText(QCoreApplication::translate("OptBoard", "\320\235 \320\220 \320\233 \320\220 \320\250 \320\242 \320\243 \320\222 \320\220 \320\235 \320\235 \320\257", nullptr));
        pushButton->setText(QCoreApplication::translate("OptBoard", "\342\206\220  \320\237 \320\236 \320\222 \320\225 \320\240 \320\235 \320\243 \320\242 \320\230 \320\241 \320\257", nullptr));
    } // retranslateUi

};

namespace Ui {
    class OptBoard: public Ui_OptBoard {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_OPTIONS_H
