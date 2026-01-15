#pragma once

#include <Qt3DExtras>
#include <Qt3DCore/QEntity>
#include <Qt3DRender/QCamera>

class Scene;  // Предварительное объявление

class td_window : public Qt3DExtras::Qt3DWindow
{
public:
    td_window();

private:
    Scene* m_scene_;
    Qt3DRender::QCamera* camera_;
    Qt3DExtras::QOrbitCameraController* camera_controller_;
};
