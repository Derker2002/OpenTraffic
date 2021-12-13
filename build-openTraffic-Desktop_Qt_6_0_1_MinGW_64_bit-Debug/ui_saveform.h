/********************************************************************************
** Form generated from reading UI file 'saveform.ui'
**
** Created by: Qt User Interface Compiler version 6.0.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SAVEFORM_H
#define UI_SAVEFORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SaveForm
{
public:
    QGridLayout *gridLayout_2;
    QWidget *BackGround1;
    QGridLayout *BackGround;
    QWidget *GridLayout;
    QGridLayout *gridLayout;
    QLabel *label_2;
    QLineEdit *name;
    QLabel *label_3;
    QSpacerItem *verticalSpacer;
    QPushButton *panoButton;
    QLabel *label;

    void setupUi(QDialog *SaveForm)
    {
        if (SaveForm->objectName().isEmpty())
            SaveForm->setObjectName(QString::fromUtf8("SaveForm"));
        SaveForm->setWindowModality(Qt::WindowModal);
        SaveForm->resize(656, 479);
        SaveForm->setFocusPolicy(Qt::NoFocus);
        SaveForm->setModal(true);
        gridLayout_2 = new QGridLayout(SaveForm);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        BackGround1 = new QWidget(SaveForm);
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
        GridLayout = new QWidget(BackGround1);
        GridLayout->setObjectName(QString::fromUtf8("GridLayout"));
        GridLayout->setFocusPolicy(Qt::NoFocus);
        GridLayout->setStyleSheet(QString::fromUtf8("border : 0px solid blue;\n"
"border-top : 3px solid rgb(24, 54, 58);\n"
"background-color: rgb(24, 54, 58);"));
        gridLayout = new QGridLayout(GridLayout);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(9, 9, 9, 9);
        label_2 = new QLabel(GridLayout);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Maximum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label_2->sizePolicy().hasHeightForWidth());
        label_2->setSizePolicy(sizePolicy);
        QFont font;
        font.setFamily(QString::fromUtf8("Arial"));
        font.setPointSize(26);
        font.setBold(true);
        label_2->setFont(font);
        label_2->setStyleSheet(QString::fromUtf8("color:#fff"));
        label_2->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_2, 0, 0, 1, 1);

        name = new QLineEdit(GridLayout);
        name->setObjectName(QString::fromUtf8("name"));
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(name->sizePolicy().hasHeightForWidth());
        name->setSizePolicy(sizePolicy1);
        name->setMinimumSize(QSize(300, 40));
        QFont font1;
        font1.setPointSize(16);
        name->setFont(font1);
        name->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"	border: 2px solid rgb(15, 34, 36);\n"
"	border-radius: 20px;\n"
"	color: #fff;\n"
"	padding-left: 20px;\n"
"	padding-right: 20px;\n"
"	background-color: rgb(15, 34, 36); \n"
"}\n"
"\n"
"QLineEdit:hover {\n"
"	border: 2px solid rgb(39, 89, 95)\n"
"}\n"
"\n"
"QLineEdit:focus{\n"
"	border: 2px solid rgb(64, 140, 153)\n"
"}"));
        name->setMaxLength(14);
        name->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(name, 4, 0, 1, 1, Qt::AlignHCenter);

        label_3 = new QLabel(GridLayout);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        sizePolicy.setHeightForWidth(label_3->sizePolicy().hasHeightForWidth());
        label_3->setSizePolicy(sizePolicy);
        QFont font2;
        font2.setFamily(QString::fromUtf8("Arial"));
        font2.setPointSize(16);
        font2.setBold(true);
        label_3->setFont(font2);
        label_3->setStyleSheet(QString::fromUtf8("color:#fff"));
        label_3->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_3, 3, 0, 1, 1);

        verticalSpacer = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Fixed);

        gridLayout->addItem(verticalSpacer, 1, 0, 1, 1);


        BackGround->addWidget(GridLayout, 1, 0, 1, 1);

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

        BackGround->addWidget(panoButton, 2, 0, 1, 1);

        label = new QLabel(BackGround1);
        label->setObjectName(QString::fromUtf8("label"));
        sizePolicy.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy);
        label->setFont(font);
        label->setStyleSheet(QString::fromUtf8("color:#fff"));
        label->setAlignment(Qt::AlignCenter);

        BackGround->addWidget(label, 0, 0, 1, 1);


        gridLayout_2->addWidget(BackGround1, 1, 0, 1, 1);


        retranslateUi(SaveForm);

        QMetaObject::connectSlotsByName(SaveForm);
    } // setupUi

    void retranslateUi(QDialog *SaveForm)
    {
        SaveForm->setWindowTitle(QCoreApplication::translate("SaveForm", "Dialog", nullptr));
        label_2->setText(QCoreApplication::translate("SaveForm", "\320\237\321\200\320\260\320\262\320\270\320\273\321\214\320\275\320\270\321\205 \320\262i\320\264\320\277\320\276\320\262i\320\264\320\265\320\271:", nullptr));
        name->setText(QString());
        name->setPlaceholderText(QCoreApplication::translate("SaveForm", "\320\222\320\260\321\210\320\265 \321\226\320\274'\321\217", nullptr));
        label_3->setText(QCoreApplication::translate("SaveForm", "\320\222\320\262\320\265\320\264\321\226\321\202\321\214 \320\262\320\260\321\210\320\265 \321\226\320\274'\321\217", nullptr));
        panoButton->setText(QCoreApplication::translate("SaveForm", "\320\227 \320\221 \320\225 \320\240 \320\225 \320\223 \320\242 \320\230  \320\242 \320\220  \320\227 \320\220 \320\232 I \320\235 \320\247 \320\230 \320\242 \320\230", nullptr));
        label->setText(QCoreApplication::translate("SaveForm", "\320\227 \320\220 \320\222 \320\224 \320\220 \320\235 \320\235 \320\257  \320\222 \320\230 \320\232 \320\236 \320\235 \320\220 \320\235 \320\236", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SaveForm: public Ui_SaveForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SAVEFORM_H
