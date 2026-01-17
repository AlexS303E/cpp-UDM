#pragma once

#include <QMainWindow>

//#include "opencv2/core/core.hpp"

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class td_window;  // Предварительное объявление

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
protected:
    void resizeEvent(QResizeEvent* event) override;

private:
    Ui::MainWindow *ui;
    td_window* m_tdWindow;

    void InitGraphs();
};
