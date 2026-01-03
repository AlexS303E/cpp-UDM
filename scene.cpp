#include "scene.h"
#include <QCoreApplication>
#include <QFile>
#include <QDebug>

Scene::Scene(Qt3DCore::QNode *parent)
    : Qt3DCore::QEntity(parent)
    , m_floor_(nullptr)
    , m_material_(nullptr)
    , m_floorMaterial_(nullptr)
    , m_transform_(nullptr)
    , m_floorTransform_(nullptr)
    , m_light_(nullptr)
    , m_lightTransform_(nullptr)
    , m_lightEntity_(nullptr)
    , m_floorEntity_(nullptr)
    , m_objectEntity_(nullptr)
    , m_objectLoader_(nullptr)
    , m_objectTransform_(nullptr)
    , m_objectMaterial_(nullptr)
{

    // ========== СОЗДАЕМ ПОЛ ==========
    m_floorEntity_ = new Qt3DCore::QEntity(this);

    m_floor_ = new Qt3DExtras::QPlaneMesh(m_floorEntity_);
    m_floor_->setWidth(150.0f);   // Ширина пола
    m_floor_->setHeight(150.0f);  // Длина пола

    m_floorMaterial_ = new Qt3DExtras::QPhongMaterial(m_floorEntity_);
    m_floorMaterial_->setDiffuse(QColor(100, 140, 100)); // Зеленый цвет
    m_floorMaterial_->setAmbient(QColor(80, 80, 80));

    m_floorTransform_ = new Qt3DCore::QTransform(m_floorEntity_);
    // Поворачиваем плоскость на 90 градусов вокруг оси X, чтобы она лежала горизонтально
    setDefaultFloorRotation(90);

    m_floorEntity_->addComponent(m_floor_);
    m_floorEntity_->addComponent(m_floorMaterial_);
    m_floorEntity_->addComponent(m_floorTransform_);

    // ======== ЗАГРУЗКА МОДЕЛИ ========
    m_objectEntity_ = new Qt3DCore::QEntity(this);
    //ТОЛЬКО ЧЕРЕЗ FILE, QRC не работает
    QString modelPath = QCoreApplication::applicationDirPath() + "/3D_models/FPV.obj";
    modelPath = modelPath.replace("\\", "\\\\");

    if (QFile::exists(modelPath)) {
        qDebug() << "Loading model from:" << modelPath;

        m_objectLoader_ = new Qt3DRender::QSceneLoader(m_objectEntity_);
        m_objectLoader_->setSource(QUrl::fromLocalFile(modelPath));
        m_objectEntity_->addComponent(m_objectLoader_);

        m_objectTransform_ = new Qt3DCore::QTransform(m_objectEntity_);
        m_objectTransform_->setScale(2);
        m_objectTransform_->setRotationZ(45);

        m_objectTransform_->setTranslation(drone_default_location_);
        m_objectEntity_->addComponent(m_objectTransform_);

        m_objectMaterial_ = new Qt3DExtras::QPhongMaterial(m_objectEntity_);
        m_objectEntity_->addComponent(m_objectMaterial_);
    } else {
        qDebug() << "Model file not found at:" << modelPath;
        m_objectLoader_ = nullptr;
        m_objectTransform_ = nullptr;
        m_objectMaterial_ = nullptr;
    }

    // ========== СОЗДАЕМ ИСТОЧНИК СВЕТА ==========
    m_lightEntity_ = new Qt3DCore::QEntity(this);
    m_light_ = new Qt3DRender::QPointLight(m_lightEntity_);
    m_light_->setColor(Qt::white);
    m_light_->setIntensity(1.0f);

    m_lightTransform_ = new Qt3DCore::QTransform(m_lightEntity_);
    m_lightTransform_->setTranslation(QVector3D(10, 20, 30)); // Поднимаем источник света выше

    m_lightEntity_->addComponent(m_light_);
    m_lightEntity_->addComponent(m_lightTransform_);
}

Scene::~Scene()
{
    // Деструктор пустой, так как Qt управляет памятью через родительские связи
}



void Scene::setMaterialColor(const QColor& color)
{
    if (m_material_) {
        m_material_->setDiffuse(color);
    }
}

void Scene::setLightPosition(const QVector3D& position)
{
    if (m_lightTransform_) {
        m_lightTransform_->setTranslation(position);
    }
}

void Scene::setFloorSize(float width, float height)
{
    if (m_floor_) {
        m_floor_->setWidth(width);
        m_floor_->setHeight(height);
    }
}

void Scene::setFloorColor(const QColor& color)
{
    if (m_floorMaterial_) {
        m_floorMaterial_->setDiffuse(color);
    }
}

void Scene::setFloorRotation(float degrees)
{
    if (m_floorTransform_) {
        m_floorTransform_->setRotationX(degrees);
    }
}

void Scene::setDefaultFloorRotation(float degrees)
{
    // Устанавливаем новое значение по умолчанию
    m_defaultFloorRotation_ = degrees;
    // Применяем это значение к текущему повороту
    setFloorRotation(degrees);
}

void Scene::resetFloorRotation()
{
    // Сбрасываем поворот пола к значению по умолчанию
    setFloorRotation(m_defaultFloorRotation_);
}
