/********************************************************************************
** Form generated from reading UI file 'leaderboard.ui'
**
** Created by: Qt User Interface Compiler version 6.1.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LEADERBOARD_H
#define UI_LEADERBOARD_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_LeaderBoard
{
public:
    QGridLayout *gridLayout_2;
    QWidget *BackGround;
    QGridLayout *gridLayout;
    QWidget *gridWidget;
    QGridLayout *LeadersView;
    QTextEdit *textEdit;
    QLabel *leadLabel;
    QPushButton *pushButton;

    void setupUi(QWidget *LeaderBoard)
    {
        if (LeaderBoard->objectName().isEmpty())
            LeaderBoard->setObjectName(QString::fromUtf8("LeaderBoard"));
        LeaderBoard->resize(661, 738);
        LeaderBoard->setAutoFillBackground(false);
        gridLayout_2 = new QGridLayout(LeaderBoard);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        BackGround = new QWidget(LeaderBoard);
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
        textEdit = new QTextEdit(gridWidget);
        textEdit->setObjectName(QString::fromUtf8("textEdit"));
        QFont font;
        font.setPointSize(14);
        font.setBold(true);
        textEdit->setFont(font);
        textEdit->setStyleSheet(QString::fromUtf8("color:white;"));

        LeadersView->addWidget(textEdit, 0, 0, 1, 1);


        gridLayout->addWidget(gridWidget, 2, 0, 1, 1);

        leadLabel = new QLabel(BackGround);
        leadLabel->setObjectName(QString::fromUtf8("leadLabel"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Maximum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(leadLabel->sizePolicy().hasHeightForWidth());
        leadLabel->setSizePolicy(sizePolicy);
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Arial")});
        font1.setPointSize(26);
        font1.setBold(true);
        leadLabel->setFont(font1);
        leadLabel->setStyleSheet(QString::fromUtf8("color: #fff;"));
        leadLabel->setScaledContents(false);
        leadLabel->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(leadLabel, 0, 0, 1, 1);

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


        retranslateUi(LeaderBoard);

        QMetaObject::connectSlotsByName(LeaderBoard);
    } // setupUi

    void retranslateUi(QWidget *LeaderBoard)
    {
        LeaderBoard->setWindowTitle(QCoreApplication::translate("LeaderBoard", "Form", nullptr));
        leadLabel->setText(QCoreApplication::translate("LeaderBoard", "\320\241 \320\237 \320\230 \320\241 \320\236 \320\232  \320\233 \320\206 \320\224 \320\225 \320\240 \320\206 \320\222", nullptr));
        pushButton->setText(QCoreApplication::translate("LeaderBoard", "\342\206\220  \320\237 \320\236 \320\222 \320\225 \320\240 \320\235 \320\243 \320\242 \320\230 \320\241 \320\257", nullptr));
    } // retranslateUi

};

namespace Ui {
    class LeaderBoard: public Ui_LeaderBoard {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LEADERBOARD_H
