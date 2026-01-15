T += core gui
QT += 3dcore 3dlogic 3dextras 3dinput 3drender
QT += printsupport

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++23
CONFIG += no_qmlimportscanner

TARGET = UDM3
TEMPLATE = app

SOURCES += \
    drone.cpp \
    main.cpp \
    mainwindow.cpp \
    qcustomplot.cpp \
    scene.cpp \
    td_window.cpp \
    json.cpp \

HEADERS += \
    drone.h \
    mainwindow.h \
    qcustomplot.h \
    scene.h \
    td_window.h \
    json.h \

FORMS += \
    mainwindow.ui

TRANSLATIONS += \
    UDM_ru_RU.ts

CONFIG += lrelease
CONFIG += embed_translations




# Копирование папки 3D_models в директорию сборки
CONFIG(debug, debug|release) {
    BUILD_PATH = $$OUT_PWD/debug
} else {
    BUILD_PATH = $$OUT_PWD/release
}
# Копируем папку 3D_models с помощью встроенной функции COPIES
3d_models.files = $$PWD/3D_models
3d_models.path = $$BUILD_PATH
COPIES += 3d_models



# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target




# win32:CONFIG(release, debug|release): LIBS += -L$$PWD/../../../../../libs/opencv-4.5.1/opencv/build/x64/vc15/release/ -lopencv_world451d
# else:win32:CONFIG(debug, debug|release): LIBS += -L$$PWD/../../../../../libs/opencv-4.5.1/opencv/build/x64/vc15/debug/ -lopencv_world451d

# INCLUDEPATH += $$PWD/../../../../../libs/opencv-4.5.1/opencv/build/include
# DEPENDPATH += $$PWD/../../../../../libs/opencv-4.5.1/opencv/build/include

# win32-g++:CONFIG(release, debug|release): PRE_TARGETDEPS += $$PWD/../../../../../libs/opencv-4.5.1/opencv/build/x64/vc15/release/libopencv_world451d.a
# else:win32-g++:CONFIG(debug, debug|release): PRE_TARGETDEPS += $$PWD/../../../../../libs/opencv-4.5.1/opencv/build/x64/vc15/debug/libopencv_world451d.a
# else:win32:!win32-g++:CONFIG(release, debug|release): PRE_TARGETDEPS += $$PWD/../../../../../libs/opencv-4.5.1/opencv/build/x64/vc15/release/opencv_world451d.lib
# else:win32:!win32-g++:CONFIG(debug, debug|release): PRE_TARGETDEPS += $$PWD/../../../../../libs/opencv-4.5.1/opencv/build/x64/vc15/debug/opencv_world451d.lib
