QT += core gui
QT += 3dcore 3dlogic 3dextras 3dinput 3drender
QT += printsupport

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++23
CONFIG += no_qmlimportscanner

TARGET = UDM3
TEMPLATE = app

SOURCES += \
    main.cpp \
    mainwindow.cpp \
    qcustomplot.cpp \
    scene.cpp \
    td_window.cpp

HEADERS += \
    mainwindow.h \
    qcustomplot.h \
    scene.h \
    td_window.h

FORMS += \
    mainwindow.ui


TRANSLATIONS += \
    UDM3_ru_RU.ts

CONFIG += lrelease
CONFIG += embed_translations


# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

