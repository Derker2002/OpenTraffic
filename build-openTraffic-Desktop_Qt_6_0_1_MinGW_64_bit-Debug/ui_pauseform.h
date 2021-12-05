/********************************************************************************
** Form generated from reading UI file 'pauseform.ui'
**
** Created by: Qt User Interface Compiler version 6.0.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PAUSEFORM_H
#define UI_PAUSEFORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_pauseform
{
public:
    QGridLayout *gridLayout_2;
    QGridLayout *gridLayout;
    QPushButton *pushButton_2;
    QPushButton *pushButton;

    void setupUi(QWidget *pauseform)
    {
        if (pauseform->objectName().isEmpty())
            pauseform->setObjectName(QString::fromUtf8("pauseform"));
        pauseform->resize(400, 300);
        pauseform->setStyleSheet(QString::fromUtf8("background: #808080"));
        gridLayout_2 = new QGridLayout(pauseform);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        pushButton_2 = new QPushButton(pauseform);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));

        gridLayout->addWidget(pushButton_2, 1, 0, 1, 1);

        pushButton = new QPushButton(pauseform);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        gridLayout->addWidget(pushButton, 2, 0, 1, 1);


        gridLayout_2->addLayout(gridLayout, 0, 0, 1, 1);


        retranslateUi(pauseform);

        QMetaObject::connectSlotsByName(pauseform);
    } // setupUi

    void retranslateUi(QWidget *pauseform)
    {
        pauseform->setWindowTitle(QCoreApplication::translate("pauseform", "Form", nullptr));
        pushButton_2->setText(QCoreApplication::translate("pauseform", "PushButton", nullptr));
        pushButton->setText(QCoreApplication::translate("pauseform", "PushButton", nullptr));
    } // retranslateUi

};

namespace Ui {
    class pauseform: public Ui_pauseform {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PAUSEFORM_H
