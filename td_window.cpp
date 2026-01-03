#include "td_window.h"
#include "scene.h"

#include <QCoreApplication>
#include <QFile>
#include <QDebug>
#include <Qt3DExtras/QOrbitCameraController>
#include <Qt3DExtras/QSphereMesh>
#include <Qt3DExtras/QPhongMaterial>
#include <Qt3DRender/QSceneLoader>

td_window::td_window()
{
    // Создаем сцену
    m_scene_ = new Scene();

    //Загрузка модели





    // Настраиваем камеру
    camera_ = this->camera();
    camera_->setFieldOfView(60.0f);
    camera_->setPosition(QVector3D(0, 0, 40));
    camera_->setViewCenter(QVector3D(0, 0, 0));

    // Создаем контроллер камеры
    camera_controller_ = new Qt3DExtras::QOrbitCameraController(m_scene_);
    camera_controller_->setCamera(camera_);
    camera_controller_->setLookSpeed(-180);
    camera_controller_->setLinearSpeed(50);

    // Устанавливаем сцену как корневую сущность
    this->setRootEntity(m_scene_);
}
