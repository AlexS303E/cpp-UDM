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
    Qt3DExtras::QTorusMesh* torusMesh() const { return m_torus_; }
    Qt3DExtras::QPlaneMesh* floorMesh() const { return m_floor_; }
    Qt3DExtras::QPhongMaterial* material() const { return m_material_; }
    Qt3DCore::QTransform* transform() const { return m_transform_; }

    // Методы для изменения параметров сцены
    void setTorusRadius(float radius);
    void setTorusMinorRadius(float minorRadius);
    void setMaterialColor(const QColor& color);
    void setLightPosition(const QVector3D& position);
    void setFloorSize(float width, float height);
    void setFloorColor(const QColor& color);

private:
    Qt3DExtras::QTorusMesh* m_torus_;
    Qt3DExtras::QPlaneMesh* m_floor_;
    Qt3DExtras::QPhongMaterial* m_material_;
    Qt3DExtras::QPhongMaterial* m_floorMaterial_;
    Qt3DCore::QTransform* m_transform_;
    Qt3DCore::QTransform* m_floorTransform_;
    Qt3DRender::QPointLight* m_light_;
    Qt3DCore::QTransform* m_lightTransform_;
    Qt3DCore::QEntity* m_lightEntity_;
    Qt3DCore::QEntity* m_floorEntity_;
};

