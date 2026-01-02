#include "scene.h"

Scene::Scene(Qt3DCore::QNode *parent)
    : Qt3DCore::QEntity(parent)
    , m_torus_(nullptr)
    , m_floor_(nullptr)
    , m_material_(nullptr)
    , m_floorMaterial_(nullptr)
    , m_transform_(nullptr)
    , m_floorTransform_(nullptr)
    , m_light_(nullptr)
    , m_lightTransform_(nullptr)
    , m_lightEntity_(nullptr)
    , m_floorEntity_(nullptr)
{

    // ========== СОЗДАЕМ ПОЛ ==========
    m_floorEntity_ = new Qt3DCore::QEntity(this);

    m_floor_ = new Qt3DExtras::QPlaneMesh(m_floorEntity_);
    m_floor_->setWidth(50.0f);   // Ширина пола
    m_floor_->setHeight(50.0f);  // Длина пола

    m_floorMaterial_ = new Qt3DExtras::QPhongMaterial(m_floorEntity_);
    m_floorMaterial_->setDiffuse(QColor(100, 100, 100)); // Серый цвет
    m_floorMaterial_->setAmbient(QColor(80, 80, 80));

    m_floorTransform_ = new Qt3DCore::QTransform(m_floorEntity_);
    // Поворачиваем плоскость на 90 градусов вокруг оси X, чтобы она лежала горизонтально
    m_floorTransform_->setRotationX(90);
    m_floorTransform_->setTranslation(QVector3D(0, 0, -2)); // Опускаем пол ниже

    m_floorEntity_->addComponent(m_floor_);
    m_floorEntity_->addComponent(m_floorMaterial_);
    m_floorEntity_->addComponent(m_floorTransform_);

    // ========== СОЗДАЕМ ТОР ==========
    m_torus_ = new Qt3DExtras::QTorusMesh(this);
    m_torus_->setRadius(5.0f);      // Уменьшил радиус тора
    m_torus_->setMinorRadius(2.0f); // Уменьшил минорный радиус
    m_torus_->setSlices(32);
    m_torus_->setRings(64);

    m_material_ = new Qt3DExtras::QPhongMaterial(this);
    m_material_->setDiffuse(QColor(50, 220, 220));

    m_transform_ = new Qt3DCore::QTransform(this);
    m_transform_->setTranslation(QVector3D(0, 0, 0)); // Подняли тор над полом

    // Добавляем компоненты тора к текущей сущности
    addComponent(m_torus_);
    addComponent(m_material_);
    addComponent(m_transform_);

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

void Scene::setTorusRadius(float radius)
{
    if (m_torus_ && radius > 0) {
        m_torus_->setRadius(radius);
    }
}

void Scene::setTorusMinorRadius(float minorRadius)
{
    if (m_torus_ && minorRadius > 0) {
        m_torus_->setMinorRadius(minorRadius);
    }
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
