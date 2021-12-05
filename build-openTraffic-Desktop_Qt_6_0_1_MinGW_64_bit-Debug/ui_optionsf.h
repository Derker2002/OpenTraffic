/********************************************************************************
** Form generated from reading UI file 'optionsf.ui'
**
** Created by: Qt User Interface Compiler version 6.0.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_OPTIONSF_H
#define UI_OPTIONSF_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_OptionsF
{
public:
    QGridLayout *gridLayout_2;
    QWidget *BackGround;
    QGridLayout *gridLayout;
    QPushButton *saveButton;
    QWidget *gridWidget;
    QGridLayout *LeadersView;
    QLabel *renderDSliderValue;
    QSlider *maxSpeedSlider;
    QCheckBox *keyboardMoveCB;
    QLabel *maxSpeedSliderValue;
    QLabel *maxSpeedLabel;
    QSpacerItem *upSpacer;
    QCheckBox *helperCheckBox;
    QCheckBox *fpsCheckBox;
    QSpacerItem *downSpacer;
    QLabel *fpsLabel;
    QLabel *helperLabel;
    QLabel *keyboardMove;
    QSlider *renderDSlider;
    QLabel *renderDLabel;
    QPushButton *pushButton;
    QLabel *optLabel;

    void setupUi(QWidget *OptionsF)
    {
        if (OptionsF->objectName().isEmpty())
            OptionsF->setObjectName(QString::fromUtf8("OptionsF"));
        OptionsF->resize(661, 738);
        OptionsF->setAutoFillBackground(false);
        gridLayout_2 = new QGridLayout(OptionsF);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        BackGround = new QWidget(OptionsF);
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
        saveButton = new QPushButton(BackGround);
        saveButton->setObjectName(QString::fromUtf8("saveButton"));
        saveButton->setMinimumSize(QSize(300, 40));
        saveButton->setCursor(QCursor(Qt::PointingHandCursor));
        saveButton->setStyleSheet(QString::fromUtf8(" QPushButton {\n"
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

        gridLayout->addWidget(saveButton, 3, 1, 1, 1);

        gridWidget = new QWidget(BackGround);
        gridWidget->setObjectName(QString::fromUtf8("gridWidget"));
        gridWidget->setStyleSheet(QString::fromUtf8("border : 0px solid blue;\n"
"border-top : 3px solid rgb(24, 54, 58);\n"
"background-color: rgb(24, 54, 58);"));
        LeadersView = new QGridLayout(gridWidget);
        LeadersView->setObjectName(QString::fromUtf8("LeadersView"));
        renderDSliderValue = new QLabel(gridWidget);
        renderDSliderValue->setObjectName(QString::fromUtf8("renderDSliderValue"));
        QFont font;
        font.setFamily(QString::fromUtf8("Arial"));
        font.setPointSize(14);
        renderDSliderValue->setFont(font);
        renderDSliderValue->setStyleSheet(QString::fromUtf8("color: #fff"));

        LeadersView->addWidget(renderDSliderValue, 3, 2, 1, 1);

        maxSpeedSlider = new QSlider(gridWidget);
        maxSpeedSlider->setObjectName(QString::fromUtf8("maxSpeedSlider"));
        maxSpeedSlider->setStyleSheet(QString::fromUtf8("QSlider::groove:horizontal {\n"
"border: 1px solid #bbb;\n"
"background: qlineargradient(spread:pad, x1:0.5, y1:0, x2:0.5, y2:1, stop:0 rgba(49, 108, 117, 255), stop:0.5 rgba(64, 140, 153, 255), stop:1 rgba(49, 108, 117, 255));\n"
"height: 6px;\n"
"border-radius: 3px;\n"
"}\n"
"\n"
"QSlider::handle:horizontal {\n"
"background: qlineargradient(x1:0, y1:0, x2:1, y2:1,\n"
"    stop:0 #eee, stop:1 #ccc);\n"
"border: 1px solid #777;\n"
"width: 10px;\n"
"line-height: 20px; \n"
"margin-top: -5px; \n"
"margin-bottom: -5px; \n"
"border-radius: 5px; \n"
"}\n"
"\n"
"QSlider::handle:horizontal:hover {\n"
"background: qlineargradient(x1:0, y1:0, x2:1, y2:1,\n"
"    stop:0 #fff, stop:1 #ddd);\n"
"border: 1px solid #444;\n"
"border-radius: 4px;\n"
"}"));
        maxSpeedSlider->setOrientation(Qt::Horizontal);

        LeadersView->addWidget(maxSpeedSlider, 5, 1, 1, 1);

        keyboardMoveCB = new QCheckBox(gridWidget);
        keyboardMoveCB->setObjectName(QString::fromUtf8("keyboardMoveCB"));

        LeadersView->addWidget(keyboardMoveCB, 6, 1, 1, 1);

        maxSpeedSliderValue = new QLabel(gridWidget);
        maxSpeedSliderValue->setObjectName(QString::fromUtf8("maxSpeedSliderValue"));
        maxSpeedSliderValue->setFont(font);
        maxSpeedSliderValue->setStyleSheet(QString::fromUtf8("color: #fff"));

        LeadersView->addWidget(maxSpeedSliderValue, 5, 2, 1, 1);

        maxSpeedLabel = new QLabel(gridWidget);
        maxSpeedLabel->setObjectName(QString::fromUtf8("maxSpeedLabel"));
        maxSpeedLabel->setFont(font);
        maxSpeedLabel->setStyleSheet(QString::fromUtf8("color: #fff"));
        maxSpeedLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        LeadersView->addWidget(maxSpeedLabel, 5, 0, 1, 1);

        upSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        LeadersView->addItem(upSpacer, 7, 0, 1, 1);

        helperCheckBox = new QCheckBox(gridWidget);
        helperCheckBox->setObjectName(QString::fromUtf8("helperCheckBox"));
        helperCheckBox->setChecked(true);

        LeadersView->addWidget(helperCheckBox, 4, 1, 1, 1);

        fpsCheckBox = new QCheckBox(gridWidget);
        fpsCheckBox->setObjectName(QString::fromUtf8("fpsCheckBox"));
        fpsCheckBox->setTristate(false);

        LeadersView->addWidget(fpsCheckBox, 2, 1, 1, 1);

        downSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Minimum);

        LeadersView->addItem(downSpacer, 1, 0, 1, 1);

        fpsLabel = new QLabel(gridWidget);
        fpsLabel->setObjectName(QString::fromUtf8("fpsLabel"));
        fpsLabel->setFont(font);
        fpsLabel->setLayoutDirection(Qt::LeftToRight);
        fpsLabel->setStyleSheet(QString::fromUtf8("color: #fff"));
        fpsLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        LeadersView->addWidget(fpsLabel, 2, 0, 1, 1);

        helperLabel = new QLabel(gridWidget);
        helperLabel->setObjectName(QString::fromUtf8("helperLabel"));
        helperLabel->setFont(font);
        helperLabel->setStyleSheet(QString::fromUtf8("color: #fff"));
        helperLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        LeadersView->addWidget(helperLabel, 4, 0, 1, 1);

        keyboardMove = new QLabel(gridWidget);
        keyboardMove->setObjectName(QString::fromUtf8("keyboardMove"));
        keyboardMove->setFont(font);
        keyboardMove->setStyleSheet(QString::fromUtf8("color: #fff"));
        keyboardMove->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        LeadersView->addWidget(keyboardMove, 6, 0, 1, 1);

        renderDSlider = new QSlider(gridWidget);
        renderDSlider->setObjectName(QString::fromUtf8("renderDSlider"));
        renderDSlider->setStyleSheet(QString::fromUtf8("QSlider::groove:horizontal {\n"
"border: 1px solid #bbb;\n"
"background: qlineargradient(spread:pad, x1:0.5, y1:0, x2:0.5, y2:1, stop:0 rgba(49, 108, 117, 255), stop:0.5 rgba(64, 140, 153, 255), stop:1 rgba(49, 108, 117, 255));\n"
"height: 6px;\n"
"border-radius: 3px;\n"
"}\n"
"\n"
"QSlider::handle:horizontal {\n"
"background: qlineargradient(x1:0, y1:0, x2:1, y2:1,\n"
"    stop:0 #eee, stop:1 #ccc);\n"
"border: 1px solid #777;\n"
"width: 10px;\n"
"line-height: 20px; \n"
"margin-top: -5px; \n"
"margin-bottom: -5px; \n"
"border-radius: 5px; \n"
"}\n"
"\n"
"QSlider::handle:horizontal:hover {\n"
"background: qlineargradient(x1:0, y1:0, x2:1, y2:1,\n"
"    stop:0 #fff, stop:1 #ddd);\n"
"border: 1px solid #444;\n"
"border-radius: 4px;\n"
"}"));
        renderDSlider->setOrientation(Qt::Horizontal);
        renderDSlider->setInvertedAppearance(false);
        renderDSlider->setInvertedControls(false);
        renderDSlider->setTickPosition(QSlider::NoTicks);

        LeadersView->addWidget(renderDSlider, 3, 1, 1, 1);

        renderDLabel = new QLabel(gridWidget);
        renderDLabel->setObjectName(QString::fromUtf8("renderDLabel"));
        renderDLabel->setFont(font);
        renderDLabel->setStyleSheet(QString::fromUtf8("color: #fff"));
        renderDLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        LeadersView->addWidget(renderDLabel, 3, 0, 1, 1);


        gridLayout->addWidget(gridWidget, 2, 0, 1, 2);

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

        optLabel = new QLabel(BackGround);
        optLabel->setObjectName(QString::fromUtf8("optLabel"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Maximum);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(optLabel->sizePolicy().hasHeightForWidth());
        optLabel->setSizePolicy(sizePolicy1);
        QFont font1;
        font1.setFamily(QString::fromUtf8("Arial"));
        font1.setPointSize(26);
        font1.setBold(true);
        optLabel->setFont(font1);
        optLabel->setStyleSheet(QString::fromUtf8("color: #fff;"));
        optLabel->setScaledContents(false);
        optLabel->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(optLabel, 0, 0, 1, 2);


        gridLayout_2->addWidget(BackGround, 1, 0, 1, 1);


        retranslateUi(OptionsF);

        QMetaObject::connectSlotsByName(OptionsF);
    } // setupUi

    void retranslateUi(QWidget *OptionsF)
    {
        OptionsF->setWindowTitle(QCoreApplication::translate("OptionsF", "Form", nullptr));
        saveButton->setText(QCoreApplication::translate("OptionsF", "\320\227 \320\221 \320\225 \320\240 \320\225 \320\223 \320\242 \320\230", nullptr));
        renderDSliderValue->setText(QCoreApplication::translate("OptionsF", "0", nullptr));
        keyboardMoveCB->setText(QString());
        maxSpeedSliderValue->setText(QCoreApplication::translate("OptionsF", "0", nullptr));
        maxSpeedLabel->setText(QCoreApplication::translate("OptionsF", "\320\234\320\260\320\272\321\201\320\270\320\274\320\260\320\273\321\214\320\275\320\260 \321\210\320\262\320\270\320\264\320\272\321\226\321\201\321\202\321\214", nullptr));
        helperCheckBox->setText(QString());
        fpsCheckBox->setText(QString());
        fpsLabel->setText(QCoreApplication::translate("OptionsF", "\320\237\320\276\320\272\320\260\320\267\321\203\320\262\320\260\321\202\320\270 FPS", nullptr));
        helperLabel->setText(QCoreApplication::translate("OptionsF", "\320\237\320\276\320\274\321\226\321\207\320\275\320\270\320\272", nullptr));
        keyboardMove->setText(QCoreApplication::translate("OptionsF", "\320\243\320\277\321\200\320\260\320\262\320\273\321\226\320\275\320\275\321\217 \320\272\320\273\320\260\320\262\321\226\320\260\321\202\321\203\321\200\320\276\321\216 (BETA)", nullptr));
        renderDLabel->setText(QCoreApplication::translate("OptionsF", "\320\224\320\260\320\273\321\214\320\275\321\226\321\201\321\202\321\214 \320\277\321\200\320\276\320\274\320\260\320\273\321\214\320\276\320\262\321\203\320\262\320\260\320\275\320\275\321\217", nullptr));
        pushButton->setText(QCoreApplication::translate("OptionsF", "\342\206\220  \320\237 \320\236 \320\222 \320\225 \320\240 \320\235 \320\243 \320\242 \320\230 \320\241 \320\257", nullptr));
        optLabel->setText(QCoreApplication::translate("OptionsF", "\320\235 \320\220 \320\233 \320\220 \320\250 \320\242 \320\243 \320\222 \320\220 \320\235 \320\235 \320\257", nullptr));
    } // retranslateUi

};

namespace Ui {
    class OptionsF: public Ui_OptionsF {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_OPTIONSF_H
