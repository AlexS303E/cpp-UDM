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
    , m_defaultFloorRotation_(0.0f)
    , m_skyboxEnabled_(true)
    , m_skyboxColor_(144, 208, 255)
{
    // ========== СОЗДАЕМ ПОЛ ==========
    m_floorEntity_ = new Qt3DCore::QEntity(this);

    m_floor_ = new Qt3DExtras::QPlaneMesh(m_floorEntity_);
    m_floor_->setWidth(1500.0f);
    m_floor_->setHeight(1500.0f);

    m_floorMaterial_ = new Qt3DExtras::QPhongMaterial(m_floorEntity_);
    m_floorMaterial_->setDiffuse(QColor(100, 140, 100));
    m_floorMaterial_->setAmbient(QColor(80, 80, 80));

    m_floorTransform_ = new Qt3DCore::QTransform(m_floorEntity_);
    m_floorTransform_->setRotationY(90);
    m_floorTransform_->setTranslation(QVector3D(0,-50,0));

    m_floorEntity_->addComponent(m_floor_);
    m_floorEntity_->addComponent(m_floorMaterial_);
    m_floorEntity_->addComponent(m_floorTransform_);

    // ======== ЗАГРУЗКА МОДЕЛИ FPV ========
    LoadOBJ(drone_data_, "FPV.obj");
    if (drone_data_.Transform && drone_data_.Material) {
        drone_data_.Transform->setScale(2);
        drone_data_.Material->setDiffuse(QColor(120,120,120));
    }

    // ======== ЗАГРУЗКА SkyBox ========
    LoadOBJ(sky_box_, "SkyBox.obj");
    if (sky_box_.Transform && sky_box_.Material) {
        sky_box_.Transform->setScale(1000);
        sky_box_.Material->setDiffuse(m_skyboxColor_);
        sky_box_.Material->setAmbient(Qt::black);
        sky_box_.Material->setSpecular(Qt::black);
    }

    // ========== СОЗДАЕМ ИСТОЧНИК СВЕТА ==========
    m_lightEntity_ = new Qt3DCore::QEntity(this);
    m_light_ = new Qt3DRender::QPointLight(m_lightEntity_);
    m_light_->setColor(Qt::white);
    m_light_->setIntensity(1.4f);

    m_lightTransform_ = new Qt3DCore::QTransform(m_lightEntity_);
    m_lightTransform_->setTranslation(QVector3D(20, 80, 90));

    m_lightEntity_->addComponent(m_light_);
    m_lightEntity_->addComponent(m_lightTransform_);
}

Scene::~Scene()
{
    // Деструктор пустой, так как Qt управляет памятью через родительские связи
}

void Scene::setMaterialColor(const QColor& color){
    if (m_material_) {
        m_material_->setDiffuse(color);
    }
}

void Scene::setLightPosition(const QVector3D& position){
    if (m_lightTransform_) {
        m_lightTransform_->setTranslation(position);
    }
}

void Scene::setFloorSize(float width, float height){
    if (m_floor_) {
        m_floor_->setWidth(width);
        m_floor_->setHeight(height);
    }
}

void Scene::setFloorColor(const QColor& color){
    if (m_floorMaterial_) {
        m_floorMaterial_->setDiffuse(color);
    }
}

void Scene::setFloorRotation(float degrees){
    if (m_floorTransform_) {
        m_floorTransform_->setRotationX(degrees);
    }
}

void Scene::setDefaultFloorRotation(float degrees){
    m_defaultFloorRotation_ = degrees;
    setFloorRotation(degrees);
}

void Scene::resetFloorRotation(){
    setFloorRotation(m_defaultFloorRotation_);
}

void Scene::setSkyboxColor(const QColor& color){
    m_skyboxColor_ = color;
    if (sky_box_.Material) {
        sky_box_.Material->setDiffuse(color);
        sky_box_.Material->setAmbient(color);
    }
}

// Реализация остальных методов управления фоном
void Scene::setSkyboxEnabled(bool enabled){
    m_skyboxEnabled_ = enabled;
    if (sky_box_.Entity) {
        sky_box_.Entity->setEnabled(enabled);
    }
}

void Scene::setBackgroundColor(const QColor& color){
    // Для изменения цвета фона (не SkyBox) нужно настроить камеру или viewport
    // Этот метод оставлен для будущей реализации
    Q_UNUSED(color)
}

void Scene::setSkyboxTexture(const QString& texturePath){
    // Для текстур нужно использовать QTextureLoader
    // Этот метод можно реализовать по необходимости
    Q_UNUSED(texturePath)
}

void Scene::LoadOBJ(OBJInSceneData& obj_data, const QString& obj_name) {
    // Очищаем предыдущую сущность, если она существует
    if (obj_data.Entity) {
        delete obj_data.Entity;
        obj_data.Entity = nullptr;
        obj_data.Mesh = nullptr;
        obj_data.Transform = nullptr;
        obj_data.Material = nullptr;
    }

    QString modelPath = QCoreApplication::applicationDirPath() + "/3D_models/" + obj_name;

    if (!QFile::exists(modelPath)) {
        qDebug() << "Model file not found at:" << modelPath;
        return;
    }

    qDebug() << "Loading model from:" << modelPath;

    // Создаём новую сущность с родителем this (сцена)
    obj_data.Entity = new Qt3DCore::QEntity(this);

    // ← СОЗДАЁМ И НАСТРАИВАЕМ MESH
    obj_data.Mesh = new Qt3DRender::QMesh(obj_data.Entity);
    obj_data.Mesh->setSource(QUrl::fromLocalFile(modelPath));

    // Создаём и настраиваем трансформацию
    obj_data.Transform = new Qt3DCore::QTransform(obj_data.Entity);
    obj_data.Transform->setTranslation(obj_data.Location);

    // Создаём и настраиваем материал
    obj_data.Material = new Qt3DExtras::QPhongMaterial(obj_data.Entity);

    // Добавляем все компоненты к сущности
    obj_data.Entity->addComponent(obj_data.Mesh);
    obj_data.Entity->addComponent(obj_data.Transform);
    obj_data.Entity->addComponent(obj_data.Material);
}
