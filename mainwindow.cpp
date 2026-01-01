#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "scene.h"

#include <QVBoxLayout>
#include <QHBoxLayout>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
    , m_3dWindow(nullptr)
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
    Qt3DCore::QEntity *root_entity = createScene();

    // Настраиваем камеру
    Qt3DRender::QCamera *camera = m_3dWindow->camera();
    camera->setFieldOfView(60.0f);
    camera->setPosition(QVector3D(0, 0, 40));
    camera->setViewCenter(QVector3D(0, 0, 0));

    Qt3DExtras::QOrbitCameraController* camera_controller = new Qt3DExtras::QOrbitCameraController(root_entity);
    camera_controller->setCamera(camera);
    camera_controller->setLookSpeed(-180);
    camera_controller->setLinearSpeed(50);

    m_3dWindow->setRootEntity(root_entity);

    // Настраиваем layout для виджета и добавляем контейнер с 3D сценой
    QVBoxLayout* layout = new QVBoxLayout(ui->widget);
    layout->setContentsMargins(0, 0, 0, 0);
    layout->setSpacing(0);
    layout->addWidget(container);
}

MainWindow::~MainWindow()
{
    delete ui;
    // m_3dWindow будет удален автоматически, так как контейнер является его родителем
}
