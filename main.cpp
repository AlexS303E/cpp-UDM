#include "mainwindow.h"
#include "scene.h"

#include <QApplication>
#include <QLocale>
#include <QTranslator>



int main(int argc, char *argv[])
{
    QApplication a(argc, argv);


    QTranslator translator;
    const QStringList uiLanguages = QLocale::system().uiLanguages();
    for (const QString &locale : uiLanguages) {
        const QString baseName = "UDM2_" + QLocale(locale).name();
        if (translator.load(":/i18n/" + baseName)) {
            a.installTranslator(&translator);
            break;
        }
    }
    MainWindow w;
    w.show();


    Qt3DExtras::Qt3DWindow view;

    Qt3DCore::QEntity *root_entity = createScene();

    Qt3DRender::QCamera *camera = view.camera();
    camera->setFieldOfView(60.0f);
    camera->setPosition(QVector3D(0,0,40));
    camera->setViewCenter(QVector3D(0,0,0));

    Qt3DExtras::QOrbitCameraController* camera_controller =  new Qt3DExtras::QOrbitCameraController(root_entity);
    camera_controller->setCamera(camera);
    camera_controller->setLookSpeed(-180);
    camera_controller->setLinearSpeed(50);

    view.setRootEntity(root_entity);
    view.show();
    view.showMaximized();

    return a.exec();
}
