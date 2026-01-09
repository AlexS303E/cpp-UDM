QT += core gui
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
    td_window.cpp

HEADERS += \
    drone.h \
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

# OpenCV configuration
win32 {
    # Путь к vcpkg
    VCPKG_ROOT = C:/vcpkg

    # Определяем архитектуру
    contains(QT_ARCH, x86_64) {
        VCPKG_TRIPLET = x64-windows
    } else {
        VCPKG_TRIPLET = x86-windows
    }

    VCPKG_INSTALLED_DIR = $$VCPKG_ROOT/installed/$$VCPKG_TRIPLET

    # Заголовочные файлы OpenCV
    INCLUDEPATH += $$VCPKG_INSTALLED_DIR/include

    # Определяем библиотеки в зависимости от режима сборки
    CONFIG(debug, debug|release) {
        # Debug режим
        LIBS += -L$$VCPKG_INSTALLED_DIR/debug/lib

        # Основные библиотеки OpenCV (debug версии с 'd')
        LIBS += -lopencv_core4d
        LIBS += -lopencv_imgproc4d
        LIBS += -lopencv_highgui4d
        LIBS += -lopencv_videoio4d
        LIBS += -lopencv_imgcodecs4d

        # Дополнительные библиотеки, которые могут понадобиться
        LIBS += -lopencv_calib3d4d
        LIBS += -lopencv_features2d4d
        LIBS += -lopencv_flann4d
        LIBS += -lopencv_video4d

    } else {
        # Release режим
        LIBS += -L$$VCPKG_INSTALLED_DIR/lib

        # Основные библиотеки OpenCV (release версии без 'd')
        LIBS += -lopencv_core4
        LIBS += -lopencv_imgproc4
        LIBS += -lopencv_highgui4
        LIBS += -lopencv_videoio4
        LIBS += -lopencv_imgcodecs4

        # Дополнительные библиотеки, которые могут понадобиться
        LIBS += -lopencv_calib3d4
        LIBS += -lopencv_features2d4
        LIBS += -lopencv_flann4
        LIBS += -lopencv_video4
    }

    # Для MinGW добавляем системные библиотеки
    contains(QMAKE_CXX, mingw) {
        LIBS += -lstdc++ -lgcc -lwinpthread -lole32 -lcomctl32 -lgdi32 -lvfw32
    }

    # Для MSVC
    contains(QMAKE_CXX, msvc) {
        LIBS += -lmsvcp140 -lvcruntime140 -lucrt -ladvapi32 -lshell32 -luser32 -lkernel32
    }
}

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
