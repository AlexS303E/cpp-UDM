#pragma once

#include <QMainWindow>
#include <Qt3DExtras/Qt3DWindow>

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class Scene;  // Предварительное объявление

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private:
    Ui::MainWindow *ui;
    Qt3DExtras::Qt3DWindow* m_3dWindow;
    Scene* m_scene;  // Добавляем указатель на сцену
};

