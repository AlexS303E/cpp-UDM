/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.17
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "qcustomplot.h"

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QGridLayout *gridLayout;
    QTabWidget *tabWidget;
    QWidget *tab_main;
    QGridLayout *gridLayout_2;
    QVBoxLayout *verticalLayout;
    QFrame *line_2;
    QCustomPlot *widget;
    QFrame *line;
    QVBoxLayout *verticalLayout_2;
    QLabel *label;
    QDoubleSpinBox *doubleSpinBox;
    QWidget *tab_esc;
    QGridLayout *gridLayout_3;
    QWidget *tab_ccn;
    QGridLayout *gridLayout_4;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(834, 481);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        gridLayout = new QGridLayout(centralwidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        tabWidget = new QTabWidget(centralwidget);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tab_main = new QWidget();
        tab_main->setObjectName(QString::fromUtf8("tab_main"));
        gridLayout_2 = new QGridLayout(tab_main);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        line_2 = new QFrame(tab_main);
        line_2->setObjectName(QString::fromUtf8("line_2"));
        line_2->setFrameShape(QFrame::HLine);
        line_2->setFrameShadow(QFrame::Sunken);

        verticalLayout->addWidget(line_2);

        widget = new QCustomPlot(tab_main);
        widget->setObjectName(QString::fromUtf8("widget"));

        verticalLayout->addWidget(widget);


        gridLayout_2->addLayout(verticalLayout, 0, 3, 1, 1);

        line = new QFrame(tab_main);
        line->setObjectName(QString::fromUtf8("line"));
        line->setFrameShape(QFrame::VLine);
        line->setFrameShadow(QFrame::Sunken);

        gridLayout_2->addWidget(line, 0, 2, 1, 1);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        label = new QLabel(tab_main);
        label->setObjectName(QString::fromUtf8("label"));

        verticalLayout_2->addWidget(label);

        doubleSpinBox = new QDoubleSpinBox(tab_main);
        doubleSpinBox->setObjectName(QString::fromUtf8("doubleSpinBox"));

        verticalLayout_2->addWidget(doubleSpinBox);


        gridLayout_2->addLayout(verticalLayout_2, 0, 1, 1, 1);

        tabWidget->addTab(tab_main, QString());
        tab_esc = new QWidget();
        tab_esc->setObjectName(QString::fromUtf8("tab_esc"));
        gridLayout_3 = new QGridLayout(tab_esc);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        tabWidget->addTab(tab_esc, QString());
        tab_ccn = new QWidget();
        tab_ccn->setObjectName(QString::fromUtf8("tab_ccn"));
        gridLayout_4 = new QGridLayout(tab_ccn);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        tabWidget->addTab(tab_ccn, QString());

        gridLayout->addWidget(tabWidget, 0, 0, 1, 1);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 834, 22));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_main), QCoreApplication::translate("MainWindow", "Main", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_esc), QCoreApplication::translate("MainWindow", "ESC", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_ccn), QCoreApplication::translate("MainWindow", "\320\241\320\241\320\235", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
