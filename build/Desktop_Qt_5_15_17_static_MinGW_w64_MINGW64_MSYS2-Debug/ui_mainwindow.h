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
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QSpacerItem>
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
    QScrollArea *scrollArea_plot;
    QWidget *scrollAreaWidgetContents_plot;
    QVBoxLayout *verticalLayout_plot;
    QSpacerItem *horizontalSpacer;
    QWidget *widget;
    QFrame *line_2;
    QLabel *label_2;
    QCustomPlot *widget_2;
    QFrame *line;
    QScrollArea *scrollArea_controls;
    QWidget *scrollAreaWidgetContents_controls;
    QVBoxLayout *verticalLayout_controls;
    QSpacerItem *horizontalSpacer_2;
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
        MainWindow->resize(865, 502);
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
        scrollArea_plot = new QScrollArea(tab_main);
        scrollArea_plot->setObjectName(QString::fromUtf8("scrollArea_plot"));
        scrollArea_plot->setWidgetResizable(true);
        scrollAreaWidgetContents_plot = new QWidget();
        scrollAreaWidgetContents_plot->setObjectName(QString::fromUtf8("scrollAreaWidgetContents_plot"));
        scrollAreaWidgetContents_plot->setGeometry(QRect(0, 0, 402, 392));
        verticalLayout_plot = new QVBoxLayout(scrollAreaWidgetContents_plot);
        verticalLayout_plot->setObjectName(QString::fromUtf8("verticalLayout_plot"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        verticalLayout_plot->addItem(horizontalSpacer);

        widget = new QWidget(scrollAreaWidgetContents_plot);
        widget->setObjectName(QString::fromUtf8("widget"));

        verticalLayout_plot->addWidget(widget);

        line_2 = new QFrame(scrollAreaWidgetContents_plot);
        line_2->setObjectName(QString::fromUtf8("line_2"));
        line_2->setFrameShape(QFrame::HLine);
        line_2->setFrameShadow(QFrame::Sunken);

        verticalLayout_plot->addWidget(line_2);

        label_2 = new QLabel(scrollAreaWidgetContents_plot);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Maximum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label_2->sizePolicy().hasHeightForWidth());
        label_2->setSizePolicy(sizePolicy);

        verticalLayout_plot->addWidget(label_2);

        widget_2 = new QCustomPlot(scrollAreaWidgetContents_plot);
        widget_2->setObjectName(QString::fromUtf8("widget_2"));
        widget_2->setMinimumSize(QSize(0, 150));

        verticalLayout_plot->addWidget(widget_2);

        scrollArea_plot->setWidget(scrollAreaWidgetContents_plot);

        gridLayout_2->addWidget(scrollArea_plot, 0, 3, 1, 1);

        line = new QFrame(tab_main);
        line->setObjectName(QString::fromUtf8("line"));
        line->setFrameShape(QFrame::VLine);
        line->setFrameShadow(QFrame::Sunken);

        gridLayout_2->addWidget(line, 0, 2, 1, 1);

        scrollArea_controls = new QScrollArea(tab_main);
        scrollArea_controls->setObjectName(QString::fromUtf8("scrollArea_controls"));
        scrollArea_controls->setWidgetResizable(true);
        scrollAreaWidgetContents_controls = new QWidget();
        scrollAreaWidgetContents_controls->setObjectName(QString::fromUtf8("scrollAreaWidgetContents_controls"));
        scrollAreaWidgetContents_controls->setGeometry(QRect(0, 0, 402, 392));
        verticalLayout_controls = new QVBoxLayout(scrollAreaWidgetContents_controls);
        verticalLayout_controls->setObjectName(QString::fromUtf8("verticalLayout_controls"));
        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        verticalLayout_controls->addItem(horizontalSpacer_2);

        label = new QLabel(scrollAreaWidgetContents_controls);
        label->setObjectName(QString::fromUtf8("label"));

        verticalLayout_controls->addWidget(label);

        doubleSpinBox = new QDoubleSpinBox(scrollAreaWidgetContents_controls);
        doubleSpinBox->setObjectName(QString::fromUtf8("doubleSpinBox"));

        verticalLayout_controls->addWidget(doubleSpinBox);

        scrollArea_controls->setWidget(scrollAreaWidgetContents_controls);

        gridLayout_2->addWidget(scrollArea_controls, 0, 1, 1, 1);

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
        menubar->setGeometry(QRect(0, 0, 865, 22));
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
        label_2->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
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
