/********************************************************************************
** Form generated from reading UI file 'glview.ui'
**
** Created by: Qt User Interface Compiler version 6.1.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GLVIEW_H
#define UI_GLVIEW_H

#include <QtCore/QVariant>
#include <QtOpenGLWidgets/QOpenGLWidget>
#include <QtWidgets/QApplication>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_GLView
{
public:
    QOpenGLWidget *openGLWidget;

    void setupUi(QWidget *GLView)
    {
        if (GLView->objectName().isEmpty())
            GLView->setObjectName(QString::fromUtf8("GLView"));
        GLView->resize(800, 600);
        GLView->setMaximumSize(QSize(800, 600));
        openGLWidget = new QOpenGLWidget(GLView);
        openGLWidget->setObjectName(QString::fromUtf8("openGLWidget"));
        openGLWidget->setGeometry(QRect(0, 10, 791, 581));

        retranslateUi(GLView);

        QMetaObject::connectSlotsByName(GLView);
    } // setupUi

    void retranslateUi(QWidget *GLView)
    {
        GLView->setWindowTitle(QCoreApplication::translate("GLView", "GLView", nullptr));
    } // retranslateUi

};

namespace Ui {
    class GLView: public Ui_GLView {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GLVIEW_H
