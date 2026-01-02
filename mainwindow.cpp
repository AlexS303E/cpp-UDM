#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "scene.h"

#include <QVBoxLayout>
#include <QHBoxLayout>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
    , m_3dWindow(nullptr)
    , m_scene(nullptr)
{
    ui->setupUi(this);

    // Создаем Qt3DWindow
    m_3dWindow = new Qt3DExtras::Qt3DWindow();

    // Создаем контейнер для Qt3DWindow
    QWidget* container = QWidget::createWindowContainer(m_3dWindow);

    // Настраиваем политику размеров для контейнера
    container->setMinimumSize(QSize(400, 300));
    container->setSizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);

    // Создаем сцену
    m_scene = new Scene();

    //Загрузка модели
    Qt3DCore::QEntity* object_Entity = new  Qt3DCore::QEntity(m_scene);
    Qt3DRender::QSceneLoader* sceneLoader = new Qt3DRender::QSceneLoader(object_Entity);
    sceneLoader->setSource(QUrl(""));
    // Настраиваем камеру
    Qt3DRender::QCamera *camera = m_3dWindow->camera();
    camera->setFieldOfView(60.0f);
    camera->setPosition(QVector3D(0, 0, 40));
    camera->setViewCenter(QVector3D(0, 0, 0));

    // Создаем контроллер камеры
    Qt3DExtras::QOrbitCameraController* camera_controller = new Qt3DExtras::QOrbitCameraController(m_scene);
    camera_controller->setCamera(camera);
    camera_controller->setLookSpeed(-180);
    camera_controller->setLinearSpeed(50);

    // Устанавливаем сцену как корневую сущность
    m_3dWindow->setRootEntity(m_scene);

    // Настраиваем layout для виджета и добавляем контейнер с 3D сценой
    QVBoxLayout* layout = new QVBoxLayout(ui->ThreDWidget);
    layout->setContentsMargins(0, 0, 0, 0);
    layout->setSpacing(0);
    layout->addWidget(container);
}

MainWindow::~MainWindow()
{
    delete ui;
    // m_3dWindow и m_scene будут удалены автоматически через родительские связи
}
