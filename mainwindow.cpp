#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "td_window.h"

#include <QVBoxLayout>
#include <QHBoxLayout>
#include <iostream>
#include <string>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
    , m_tdWindow(nullptr)
{
    ui->setupUi(this);

    // Создаем наш кастомный 3D window
    m_tdWindow = new td_window();

    // Создаем контейнер для td_window
    QWidget* container = QWidget::createWindowContainer(m_tdWindow);

    // Настраиваем политику размеров для контейнера
    container->setMinimumSize(QSize(400, 300));
    container->setSizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);

    // Настраиваем layout для виджета и добавляем контейнер с 3D сценой
    QVBoxLayout* layout = new QVBoxLayout(ui->ThreDWidget);
    layout->setContentsMargins(0, 0, 0, 0);
    layout->setSpacing(0);
    layout->addWidget(container);
}

MainWindow::~MainWindow()
{
    delete ui;
    // m_tdWindow будет удален автоматически через родительские связи
}
