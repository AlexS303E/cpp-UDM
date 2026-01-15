#pragma once

#include <Qt3DCore>
#include <Qt3DExtras>
#include <Qt3DRender>
#include <QColor>

#include "drone.h"

struct OBJInSceneData{
    Qt3DCore::QEntity* Entity = nullptr;
    Qt3DRender::QMesh* Mesh = nullptr; // ← Заменили QSceneLoader на QMesh
    Qt3DCore::QTransform* Transform = nullptr;
    Qt3DExtras::QPhongMaterial* Material = nullptr;
    QVector3D Location = QVector3D(0,0,0);
};

class Scene : public Qt3DCore::QEntity
{
public:
    explicit Scene(Qt3DCore::QNode *parent = nullptr);
    virtual ~Scene();

    // Геттеры для доступа к компонентам сцены
    Qt3DExtras::QPlaneMesh* floorMesh() const { return m_floor_; }
    Qt3DExtras::QPhongMaterial* material() const { return m_material_; }
    Qt3DCore::QTransform* transform() const { return m_transform_; }
    QVector3D GetDroneLocation() const { return drone_data_.Location; }

    // Методы для изменения параметров сцены
    void setMaterialColor(const QColor& color);
    void setLightPosition(const QVector3D& position);
    void setFloorSize(float width, float height);
    void setFloorColor(const QColor& color);

    void setFloorRotation(float degrees);
    void setDefaultFloorRotation(float degrees);
    void resetFloorRotation();

    // Методы для управления фоном
    void setSkyboxEnabled(bool enabled);
    void setBackgroundColor(const QColor& color);
    void setSkyboxTexture(const QString& texturePath);
    void setSkyboxColor(const QColor& color);

    void LinkDroneToModel(Drone* drone);

private:
    void LoadOBJ(OBJInSceneData& obj_data, const QString&);

    Qt3DExtras::QPlaneMesh* m_floor_;
    Qt3DExtras::QPhongMaterial* m_material_;
    Qt3DExtras::QPhongMaterial* m_floorMaterial_;
    Qt3DCore::QTransform* m_transform_;
    Qt3DCore::QTransform* m_floorTransform_;
    Qt3DRender::QPointLight* m_light_;
    Qt3DCore::QTransform* m_lightTransform_;
    Qt3DCore::QEntity* m_lightEntity_;
    Qt3DCore::QEntity* m_floorEntity_;

    OBJInSceneData drone_data_;
    OBJInSceneData sky_box_;

    float m_defaultFloorRotation_;
    bool m_skyboxEnabled_;
    QColor m_skyboxColor_;
};
