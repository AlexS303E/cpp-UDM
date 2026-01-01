#include "scene.h"


Qt3DCore::QEntity* createScene(){
    Qt3DCore::QEntity* result_entity = new Qt3DCore::QEntity;
    Qt3DExtras::QTorusMesh* tourus = new Qt3DExtras::QTorusMesh(result_entity);
    tourus->setRadius(9);
    tourus->setMinorRadius(3);
    tourus->setSlices(32);
    tourus->setRings(64);

    Qt3DExtras::QPhongMaterial* phong_mat = new Qt3DExtras::QPhongMaterial(result_entity);
    phong_mat->setDiffuse(QColor(50,220,220));

    Qt3DCore::QTransform* tourus_transform = new Qt3DCore::QTransform(result_entity);

    result_entity->addComponent(tourus);
    result_entity->addComponent(phong_mat);
    result_entity->addComponent(tourus_transform);

    Qt3DCore::QEntity* light_entity = new Qt3DCore::QEntity(result_entity);
    Qt3DRender::QPointLight* light = new Qt3DRender::QPointLight(light_entity);
    Qt3DCore::QTransform* light_transform = new Qt3DCore::QTransform(result_entity);
    light_transform->setTranslation(QVector3D(0,0,30));

    light_entity->addComponent(light);
    light_entity->addComponent(light_transform);
    return result_entity;
}
