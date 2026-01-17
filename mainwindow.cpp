#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "td_window.h"

#include <QVBoxLayout>
#include <QHBoxLayout>
#include <iostream>
#include <string>


void MainWindow::InitGraphs(){
    // Настройка внешнего вида графика
    ui->widget_2->setInteractions(QCP::iRangeDrag | QCP::iRangeZoom | QCP::iSelectPlottables);
    ui->widget_2->xAxis->setLabel("Время, с");
    ui->widget_2->yAxis->setLabel("Значение");
    ui->widget_2->legend->setBrush(QBrush(QColor("Red")));

    ui->widget_3->setInteractions(QCP::iRangeDrag | QCP::iRangeZoom | QCP::iSelectPlottables);
    ui->widget_3->xAxis->setLabel("Время, с");
    ui->widget_3->yAxis->setLabel("Значение");
    ui->widget_3->legend->setBrush(QBrush(QColor("Blue")));

    ui->widget_4->setInteractions(QCP::iRangeDrag | QCP::iRangeZoom | QCP::iSelectPlottables);
    ui->widget_4->xAxis->setLabel("Время, с");
    ui->widget_4->yAxis->setLabel("Значение");
    ui->widget_4->legend->setBrush(QBrush(QColor("Green")));
}

void MainWindow::resizeEvent(QResizeEvent* event)
{
    QMainWindow::resizeEvent(event);

    // Обновляем геометрию ThreDWidget при изменении размера
    if (ui->ThreDWidget->layout()) {
        ui->ThreDWidget->layout()->update();
    }
}

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

    // ВАЖНО: Отключаем полосы прокрутки для контейнера
    container->setAttribute(Qt::WA_TransparentForMouseEvents, false);
    container->setFocusPolicy(Qt::NoFocus);

    // Настраиваем scrollArea
    ui->scrollArea_plot->setWidgetResizable(true);
    ui->scrollArea_plot->setAlignment(Qt::AlignCenter); // Центрируем содержимое
    ui->scrollArea_plot->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    ui->scrollArea_plot->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);

    // Настраиваем layout для ThreDWidget
    QVBoxLayout* layout = new QVBoxLayout(ui->ThreDWidget);
    layout->setContentsMargins(0, 0, 0, 0);
    layout->setSpacing(0);
    layout->setAlignment(Qt::AlignCenter); // Центрируем содержимое

    // Создаем промежуточный виджет для правильного центрирования
    QWidget* centeringWidget = new QWidget();
    QVBoxLayout* centeringLayout = new QVBoxLayout(centeringWidget);
    centeringLayout->setContentsMargins(0, 0, 0, 0);
    centeringLayout->setAlignment(Qt::AlignCenter);
    centeringLayout->addWidget(container);

    layout->addWidget(centeringWidget);

    InitGraphs();
}

MainWindow::~MainWindow()
{
    delete ui;
    // m_tdWindow будет удален автоматически через родительские связи
}
