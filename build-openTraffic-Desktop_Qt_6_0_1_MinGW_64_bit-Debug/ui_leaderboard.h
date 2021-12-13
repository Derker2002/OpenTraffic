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
#include <QtWidgets/QFrame>
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
    QPushButton *pushButton;
    QLabel *leadLabel;
    QWidget *gridWidget;
    QGridLayout *LeadersView;
    QLabel *label;
    QFrame *line;
    QLabel *label_2;
    QTextEdit *nameEdit;
    QTextEdit *scoreEdit;
    QFrame *line_2;

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
        pushButton = new QPushButton(BackGround);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        QSizePolicy sizePolicy(QSizePolicy::MinimumExpanding, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(pushButton->sizePolicy().hasHeightForWidth());
        pushButton->setSizePolicy(sizePolicy);
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

        leadLabel = new QLabel(BackGround);
        leadLabel->setObjectName(QString::fromUtf8("leadLabel"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Maximum);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(leadLabel->sizePolicy().hasHeightForWidth());
        leadLabel->setSizePolicy(sizePolicy1);
        QFont font;
        font.setFamilies({QString::fromUtf8("Arial")});
        font.setPointSize(26);
        font.setBold(true);
        leadLabel->setFont(font);
        leadLabel->setStyleSheet(QString::fromUtf8("color: #fff;"));
        leadLabel->setScaledContents(false);
        leadLabel->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(leadLabel, 0, 0, 1, 1);

        gridWidget = new QWidget(BackGround);
        gridWidget->setObjectName(QString::fromUtf8("gridWidget"));
        gridWidget->setStyleSheet(QString::fromUtf8("border : 0px solid blue;\n"
"border-top : 3px solid rgb(24, 54, 58);\n"
"background-color: rgb(24, 54, 58);"));
        LeadersView = new QGridLayout(gridWidget);
        LeadersView->setObjectName(QString::fromUtf8("LeadersView"));
        label = new QLabel(gridWidget);
        label->setObjectName(QString::fromUtf8("label"));
        QSizePolicy sizePolicy2(QSizePolicy::Maximum, QSizePolicy::Preferred);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy2);
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Arial")});
        font1.setPointSize(16);
        font1.setBold(true);
        label->setFont(font1);
        label->setStyleSheet(QString::fromUtf8("color:#fff"));
        label->setAlignment(Qt::AlignCenter);

        LeadersView->addWidget(label, 0, 1, 1, 1);

        line = new QFrame(gridWidget);
        line->setObjectName(QString::fromUtf8("line"));
        line->setAutoFillBackground(false);
        line->setStyleSheet(QString::fromUtf8("border: 1px solid white;"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        LeadersView->addWidget(line, 1, 0, 1, 5);

        label_2 = new QLabel(gridWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        sizePolicy2.setHeightForWidth(label_2->sizePolicy().hasHeightForWidth());
        label_2->setSizePolicy(sizePolicy2);
        label_2->setFont(font1);
        label_2->setStyleSheet(QString::fromUtf8("color:#fff"));

        LeadersView->addWidget(label_2, 0, 4, 1, 1, Qt::AlignHCenter);

        nameEdit = new QTextEdit(gridWidget);
        nameEdit->setObjectName(QString::fromUtf8("nameEdit"));
        QFont font2;
        font2.setFamilies({QString::fromUtf8("Arial")});
        font2.setPointSize(14);
        font2.setBold(true);
        nameEdit->setFont(font2);
        nameEdit->setStyleSheet(QString::fromUtf8("color:white;"));
        nameEdit->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        nameEdit->setUndoRedoEnabled(false);
        nameEdit->setReadOnly(true);

        LeadersView->addWidget(nameEdit, 2, 0, 2, 3);

        scoreEdit = new QTextEdit(gridWidget);
        scoreEdit->setObjectName(QString::fromUtf8("scoreEdit"));
        QSizePolicy sizePolicy3(QSizePolicy::Fixed, QSizePolicy::Expanding);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(scoreEdit->sizePolicy().hasHeightForWidth());
        scoreEdit->setSizePolicy(sizePolicy3);
        scoreEdit->setFont(font2);
        scoreEdit->setStyleSheet(QString::fromUtf8("color:white;"));
        scoreEdit->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        scoreEdit->setUndoRedoEnabled(false);
        scoreEdit->setReadOnly(true);

        LeadersView->addWidget(scoreEdit, 2, 4, 1, 1);

        line_2 = new QFrame(gridWidget);
        line_2->setObjectName(QString::fromUtf8("line_2"));
        line_2->setStyleSheet(QString::fromUtf8("border: 1px solid white;"));
        line_2->setFrameShape(QFrame::VLine);
        line_2->setFrameShadow(QFrame::Sunken);

        LeadersView->addWidget(line_2, 2, 3, 1, 1);


        gridLayout->addWidget(gridWidget, 2, 0, 1, 1);


        gridLayout_2->addWidget(BackGround, 1, 0, 1, 1);


        retranslateUi(LeaderBoard);

        QMetaObject::connectSlotsByName(LeaderBoard);
    } // setupUi

    void retranslateUi(QWidget *LeaderBoard)
    {
        LeaderBoard->setWindowTitle(QCoreApplication::translate("LeaderBoard", "Form", nullptr));
        pushButton->setText(QCoreApplication::translate("LeaderBoard", "\342\206\220  \320\237 \320\236 \320\222 \320\225 \320\240 \320\235 \320\243 \320\242 \320\230 \320\241 \320\257", nullptr));
        leadLabel->setText(QCoreApplication::translate("LeaderBoard", "\320\241 \320\237 \320\230 \320\241 \320\236 \320\232  \320\233 \320\206 \320\224 \320\225 \320\240 \320\206 \320\222", nullptr));
        label->setText(QCoreApplication::translate("LeaderBoard", "\320\206 \320\234 ' \320\257", nullptr));
        label_2->setText(QCoreApplication::translate("LeaderBoard", "\320\240 \320\220 \320\245 \320\243 \320\235 \320\236 \320\232", nullptr));
        nameEdit->setHtml(QCoreApplication::translate("LeaderBoard", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Arial'; font-size:14pt; font-weight:600; font-style:normal;\">\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p></body></html>", nullptr));
    } // retranslateUi

};

namespace Ui {
    class LeaderBoard: public Ui_LeaderBoard {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LEADERBOARD_H
