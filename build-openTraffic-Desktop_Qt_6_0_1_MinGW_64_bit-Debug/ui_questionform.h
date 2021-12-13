/********************************************************************************
** Form generated from reading UI file 'questionform.ui'
**
** Created by: Qt User Interface Compiler version 6.1.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QUESTIONFORM_H
#define UI_QUESTIONFORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_QuestionForm
{
public:
    QGridLayout *gridLayout_2;
    QWidget *BackGround1;
    QGridLayout *BackGround;
    QPushButton *panoButton;
    QLabel *label;
    QWidget *GridLayout;
    QGridLayout *gridLayout;
    QRadioButton *answ2;
    QLabel *questionLabel;
    QRadioButton *answ1;
    QRadioButton *answ3;
    QRadioButton *answ4;
    QPushButton *answButton;

    void setupUi(QDialog *QuestionForm)
    {
        if (QuestionForm->objectName().isEmpty())
            QuestionForm->setObjectName(QString::fromUtf8("QuestionForm"));
        QuestionForm->setWindowModality(Qt::WindowModal);
        QuestionForm->resize(656, 479);
        QuestionForm->setFocusPolicy(Qt::NoFocus);
        QuestionForm->setModal(true);
        gridLayout_2 = new QGridLayout(QuestionForm);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        BackGround1 = new QWidget(QuestionForm);
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
        panoButton = new QPushButton(BackGround1);
        panoButton->setObjectName(QString::fromUtf8("panoButton"));
        panoButton->setMinimumSize(QSize(300, 40));
        panoButton->setCursor(QCursor(Qt::PointingHandCursor));
        panoButton->setStyleSheet(QString::fromUtf8(" QPushButton {\n"
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

        BackGround->addWidget(panoButton, 3, 0, 1, 1);

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
        answ2 = new QRadioButton(GridLayout);
        answ2->setObjectName(QString::fromUtf8("answ2"));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Arial")});
        font1.setPointSize(12);
        answ2->setFont(font1);
        answ2->setStyleSheet(QString::fromUtf8("color:#fff"));

        gridLayout->addWidget(answ2, 4, 0, 1, 1);

        questionLabel = new QLabel(GridLayout);
        questionLabel->setObjectName(QString::fromUtf8("questionLabel"));
        sizePolicy.setHeightForWidth(questionLabel->sizePolicy().hasHeightForWidth());
        questionLabel->setSizePolicy(sizePolicy);
        QFont font2;
        font2.setFamilies({QString::fromUtf8("Arial")});
        font2.setPointSize(18);
        font2.setBold(true);
        questionLabel->setFont(font2);
        questionLabel->setStyleSheet(QString::fromUtf8("color:#fff"));
        questionLabel->setTextFormat(Qt::AutoText);
        questionLabel->setWordWrap(true);

        gridLayout->addWidget(questionLabel, 2, 0, 1, 1);

        answ1 = new QRadioButton(GridLayout);
        answ1->setObjectName(QString::fromUtf8("answ1"));
        answ1->setEnabled(true);
        answ1->setFont(font1);
        answ1->setStyleSheet(QString::fromUtf8("color:#fff"));
        answ1->setChecked(true);

        gridLayout->addWidget(answ1, 3, 0, 1, 1);

        answ3 = new QRadioButton(GridLayout);
        answ3->setObjectName(QString::fromUtf8("answ3"));
        answ3->setFont(font1);
        answ3->setStyleSheet(QString::fromUtf8("color:#fff"));

        gridLayout->addWidget(answ3, 5, 0, 1, 1);

        answ4 = new QRadioButton(GridLayout);
        answ4->setObjectName(QString::fromUtf8("answ4"));
        answ4->setFont(font1);
        answ4->setStyleSheet(QString::fromUtf8("color:#fff"));

        gridLayout->addWidget(answ4, 6, 0, 1, 1);


        BackGround->addWidget(GridLayout, 1, 0, 1, 1);

        answButton = new QPushButton(BackGround1);
        answButton->setObjectName(QString::fromUtf8("answButton"));
        answButton->setMinimumSize(QSize(300, 40));
        answButton->setCursor(QCursor(Qt::PointingHandCursor));
        answButton->setStyleSheet(QString::fromUtf8(" QPushButton {\n"
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

        BackGround->addWidget(answButton, 2, 0, 1, 1);


        gridLayout_2->addWidget(BackGround1, 1, 0, 1, 1);


        retranslateUi(QuestionForm);

        QMetaObject::connectSlotsByName(QuestionForm);
    } // setupUi

    void retranslateUi(QDialog *QuestionForm)
    {
        QuestionForm->setWindowTitle(QCoreApplication::translate("QuestionForm", "Dialog", nullptr));
        panoButton->setText(QCoreApplication::translate("QuestionForm", "\320\237 \320\236 \320\224 \320\230 \320\222 \320\230 \320\242 \320\230 \320\241 \320\257  \320\237 \320\220 \320\235 \320\236 \320\240 \320\220 \320\234 \320\243", nullptr));
        label->setText(QCoreApplication::translate("QuestionForm", "\320\227 \320\220 \320\237 \320\230 \320\242 \320\220 \320\235 \320\235 \320\257  1 / 11", nullptr));
        answ2->setText(QCoreApplication::translate("QuestionForm", "RadioButton", nullptr));
        questionLabel->setText(QCoreApplication::translate("QuestionForm", "1. \320\257\320\272 \321\203 \321\206\321\226\320\271 \321\201\320\270\321\202\321\203\320\260\321\206\321\226\321\227 \320\262\320\270\320\272\320\276\320\275\320\260\321\202\320\270 \320\277\320\276\320\262\320\276\321\200\320\276\321\202 \320\277\321\200\320\260\320\262\320\276\321\200\321\203\321\207?", nullptr));
        answ1->setText(QCoreApplication::translate("QuestionForm", "\320\234\320\270\320\263\320\276\321\202\321\226\320\275\320\275\321\217 \320\267\320\265\320\273\320\265\320\275\320\276\320\263\320\276 \321\201\320\270\320\263\320\275\320\260\320\273\321\203 \320\277\320\276\320\277\320\265\321\200\320\265\320\264\320\266\320\260\321\224 \320\277\321\200\320\276 \320\275\320\265\321\201\320\277\321\200\320\260\320\262\320\275\321\226\321\201\321\202\321\214 \321\201\320\262\321\226\321\202\320\273\320\276\321\204\320\276\321\200\320\260,\n"
"\321\202\320\276\320\274\321\203 \321\201\320\273\321\226\320\264 \320\272\320\265\321\200\321\203\320\262\320\260\321\202\320\270\321\201\321\217 \320\262\320\270\320\274\320\276\320\263\320\260\320\274\320\270 \320\267\320\275\320\260\320\272\321\226\320\262 \320\277\321\200\321\226\320\276\321\200\320\270\321\202\320\265\321\202\321\203.", nullptr));
        answ3->setText(QCoreApplication::translate("QuestionForm", "RadioButton", nullptr));
        answ4->setText(QCoreApplication::translate("QuestionForm", "RadioButton", nullptr));
        answButton->setText(QCoreApplication::translate("QuestionForm", "\320\222 \320\206 \320\224 \320\237 \320\236 \320\222 \320\206 \320\241 \320\242 \320\230", nullptr));
    } // retranslateUi

};

namespace Ui {
    class QuestionForm: public Ui_QuestionForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QUESTIONFORM_H
