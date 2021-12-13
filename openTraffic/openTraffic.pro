QT       += core gui opengl openglwidgets

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

LIBS += \
    -lglu32 \
    -lopengl32

SOURCES += \
    aboutus.cpp \
    customgraphicsview.cpp \
    glview.cpp \
    leaderboard.cpp \
    main.cpp \
    mainwindow.cpp \
    optionsf.cpp \
    panoramaview.cpp \
    parser.cpp \
    pauseform.cpp \
    questionform.cpp \
    saveform.cpp

HEADERS += \
    customgraphicsview.h \
    glview.h\
    aboutus.h \
    glview.h \
    leaderboard.h \
    mainwindow.h \
    optionsf.h \
    panoramaview.h \
    parser.h \
    pauseform.h \
    questionform.h \
    saveform.h

FORMS += \
    aboutus.ui \
    leaderboard.ui \
    mainwindow.ui \
    optionsf.ui \
    panoramaview.ui \
    pauseform.ui \
    questionform.ui \
    saveform.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
