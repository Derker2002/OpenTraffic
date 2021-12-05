/********************************************************************************
** Form generated from reading UI file 'aboutus.ui'
**
** Created by: Qt User Interface Compiler version 6.0.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ABOUTUS_H
#define UI_ABOUTUS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AboutUs
{
public:
    QGridLayout *gridLayout_2;
    QWidget *BackGround;
    QGridLayout *gridLayout;
    QWidget *pageWidget;
    QGridLayout *LeadersView;
    QLabel *pageLabel;
    QWidget *imgLinks;
    QGridLayout *gridLayout_3;
    QPushButton *GitHub;
    QLabel *aboutLab;
    QPushButton *pushButton;

    void setupUi(QWidget *AboutUs)
    {
        if (AboutUs->objectName().isEmpty())
            AboutUs->setObjectName(QString::fromUtf8("AboutUs"));
        AboutUs->resize(661, 740);
        AboutUs->setAutoFillBackground(false);
        gridLayout_2 = new QGridLayout(AboutUs);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        BackGround = new QWidget(AboutUs);
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
        pageWidget = new QWidget(BackGround);
        pageWidget->setObjectName(QString::fromUtf8("pageWidget"));
        pageWidget->setStyleSheet(QString::fromUtf8("border : 0px solid blue;\n"
"border-top : 3px solid rgb(24, 54, 58);\n"
"background-color: rgb(24, 54, 58);"));
        LeadersView = new QGridLayout(pageWidget);
        LeadersView->setObjectName(QString::fromUtf8("LeadersView"));
        pageLabel = new QLabel(pageWidget);
        pageLabel->setObjectName(QString::fromUtf8("pageLabel"));
        QFont font;
        font.setFamily(QString::fromUtf8("Arial"));
        font.setPointSize(14);
        font.setBold(true);
        pageLabel->setFont(font);
        pageLabel->setStyleSheet(QString::fromUtf8("color: #fff"));
        pageLabel->setAlignment(Qt::AlignCenter);
        pageLabel->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        LeadersView->addWidget(pageLabel, 0, 0, 1, 3);

        imgLinks = new QWidget(pageWidget);
        imgLinks->setObjectName(QString::fromUtf8("imgLinks"));
        QSizePolicy sizePolicy(QSizePolicy::Maximum, QSizePolicy::Maximum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(imgLinks->sizePolicy().hasHeightForWidth());
        imgLinks->setSizePolicy(sizePolicy);
        gridLayout_3 = new QGridLayout(imgLinks);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        GitHub = new QPushButton(imgLinks);
        GitHub->setObjectName(QString::fromUtf8("GitHub"));
        GitHub->setCursor(QCursor(Qt::PointingHandCursor));
        GitHub->setStyleSheet(QString::fromUtf8(""));
        GitHub->setIconSize(QSize(54, 54));

        gridLayout_3->addWidget(GitHub, 0, 0, 1, 1);


        LeadersView->addWidget(imgLinks, 1, 1, 1, 1);


        gridLayout->addWidget(pageWidget, 2, 0, 1, 1);

        aboutLab = new QLabel(BackGround);
        aboutLab->setObjectName(QString::fromUtf8("aboutLab"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Maximum);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(aboutLab->sizePolicy().hasHeightForWidth());
        aboutLab->setSizePolicy(sizePolicy1);
        QFont font1;
        font1.setFamily(QString::fromUtf8("Arial"));
        font1.setPointSize(26);
        font1.setBold(true);
        aboutLab->setFont(font1);
        aboutLab->setStyleSheet(QString::fromUtf8("color: #fff;"));
        aboutLab->setScaledContents(false);
        aboutLab->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(aboutLab, 0, 0, 1, 1);

        pushButton = new QPushButton(BackGround);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        QSizePolicy sizePolicy2(QSizePolicy::MinimumExpanding, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(pushButton->sizePolicy().hasHeightForWidth());
        pushButton->setSizePolicy(sizePolicy2);
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


        retranslateUi(AboutUs);

        QMetaObject::connectSlotsByName(AboutUs);
    } // setupUi

    void retranslateUi(QWidget *AboutUs)
    {
        AboutUs->setWindowTitle(QCoreApplication::translate("AboutUs", "Form", nullptr));
        pageLabel->setText(QCoreApplication::translate("AboutUs", "<html><head/><body><p>\320\233\320\260\321\201\320\272\320\260\320\262\320\276 \320\277\321\200\320\276\321\201\320\270\320\274\320\276 \320\264\320\276 \320\275\320\260\321\210\320\276\320\263\320\276 \320\264\320\276\320\264\320\260\321\202\320\272\321\203 - openTraffic</p><p><br/></p><p>\320\246\320\265\320\271 \320\264\320\276\320\264\320\260\321\202\320\276\320\272 \320\261\321\203\320\262 \321\201\321\202\320\262\320\276\321\200\320\265\320\275\320\275\320\270\320\271 \321\217\320\272 \320\272\321\203\321\200\321\201\320\276\320\262\320\260 \321\200\320\276\320\261\320\276\321\202\320\260 \320\267 \320\236\320\236\320\237</p><p>\320\243 \321\200\320\276\320\267\321\200\320\276\320\261\321\206\321\226 \320\277\321\200\320\270\320\271\320\274\320\260\320\273\320\270 \321\203\321\207\320\260\321\201\321\202\321\214 \321\201\321\202\321\203\320\264\320\265\320\275\321\202\320\270 \320\263\321\200\321\203\320\277\320\277\320\270 \320\232\320\235\320\242-110:<br/></p><p>\320\245\320\276\321\205\320\273\320\276"
                        "\320\262 \320\235\320\260\320\267\320\260\321\200</p><p>\320\232\321\203\321\207\320\265\321\200 \320\220\320\275\320\264\321\200\321\226\320\271</p><p>\320\233\320\260\320\262\321\200\320\276\320\262 \320\221\320\276\320\263\320\264\320\260\320\275</p><p>\320\250\320\265\320\277\320\273\321\217\320\272\320\276\320\262 \320\223\320\265\320\276\321\200\320\263\321\226\320\271<br/></p><p>\320\257\320\272\321\211\320\276 \320\262\320\260\320\274 \321\211\320\276\321\201\321\214 \320\277\320\276\321\202\321\200\321\226\320\261\320\275\320\276, \320\267\320\262\320\265\321\200\321\202\320\260\320\271\321\202\320\265\321\201\321\217 \320\267\320\260 \320\277\320\276\321\201\320\270\320\273\320\260\320\275\320\275\321\217\320\274 \320\275\320\270\320\266\321\207\320\265!</p><p>\320\224\321\217\320\272\321\203\321\224\320\274\320\276!</p></body></html>", nullptr));
        GitHub->setText(QString());
        aboutLab->setText(QCoreApplication::translate("AboutUs", "\320\237 \320\240 \320\236  \320\235 \320\220 \320\241", nullptr));
        pushButton->setText(QCoreApplication::translate("AboutUs", "\342\206\220  \320\237 \320\236 \320\222 \320\225 \320\240 \320\235 \320\243 \320\242 \320\230 \320\241 \320\257", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AboutUs: public Ui_AboutUs {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ABOUTUS_H
