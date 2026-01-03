#pragma once

#include <Qt3DCore>
#include <Qt3DExtras>
#include <Qt3DRender>
#include <QColor>

class Scene : public Qt3DCore::QEntity
{
public:
    explicit Scene(Qt3DCore::QNode *parent = nullptr);
    virtual ~Scene();

    // Геттеры для доступа к компонентам сцены
    Qt3DExtras::QPlaneMesh* floorMesh() const { return m_floor_; }
    Qt3DExtras::QPhongMaterial* material() const { return m_material_; }
    Qt3DCore::QTransform* transform() const { return m_transform_; }
   QVector3D GetDroneLocation() const { return drone_default_location_; }

    // Методы для изменения параметров сцены
    void setMaterialColor(const QColor& color);
    void setLightPosition(const QVector3D& position);
    void setFloorSize(float width, float height);
    void setFloorColor(const QColor& color);

    void setFloorRotation(float degrees);
    void setDefaultFloorRotation(float degrees);
    void resetFloorRotation();

private:
    Qt3DExtras::QPlaneMesh* m_floor_;
    Qt3DExtras::QPhongMaterial* m_material_;
    Qt3DExtras::QPhongMaterial* m_floorMaterial_;
    Qt3DCore::QTransform* m_transform_;
    Qt3DCore::QTransform* m_floorTransform_;
    Qt3DRender::QPointLight* m_light_;
    Qt3DCore::QTransform* m_lightTransform_;
    Qt3DCore::QEntity* m_lightEntity_;
    Qt3DCore::QEntity* m_floorEntity_;

    Qt3DCore::QEntity* m_objectEntity_;
    Qt3DRender::QSceneLoader* m_objectLoader_;
    Qt3DCore::QTransform* m_objectTransform_;
    Qt3DExtras::QPhongMaterial* m_objectMaterial_;
    QVector3D drone_default_location_ = QVector3D(0,0,5);

    float m_defaultFloorRotation_;
};

