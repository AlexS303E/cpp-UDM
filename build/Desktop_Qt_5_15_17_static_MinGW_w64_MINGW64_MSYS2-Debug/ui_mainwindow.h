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
    QWidget *ThreDWidget;
    QFrame *line_2;
    QLabel *label_2;
    QCustomPlot *widget_2;
    QLabel *label_5;
    QCustomPlot *widget_3;
    QLabel *label_6;
    QCustomPlot *widget_4;
    QSpacerItem *horizontalSpacer;
    QFrame *line;
    QScrollArea *scrollArea_controls;
    QWidget *scrollAreaWidgetContents_controls;
    QVBoxLayout *verticalLayout_controls;
    QLabel *label;
    QDoubleSpinBox *doubleSpinBox;
    QLabel *label_3;
    QDoubleSpinBox *doubleSpinBox_2;
    QLabel *label_4;
    QDoubleSpinBox *doubleSpinBox_3;
    QSpacerItem *horizontalSpacer_2;
    QSpacerItem *verticalSpacer;
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
        scrollAreaWidgetContents_plot->setGeometry(QRect(0, 0, 385, 907));
        verticalLayout_plot = new QVBoxLayout(scrollAreaWidgetContents_plot);
        verticalLayout_plot->setObjectName(QString::fromUtf8("verticalLayout_plot"));
        ThreDWidget = new QWidget(scrollAreaWidgetContents_plot);
        ThreDWidget->setObjectName(QString::fromUtf8("ThreDWidget"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(ThreDWidget->sizePolicy().hasHeightForWidth());
        ThreDWidget->setSizePolicy(sizePolicy);
        ThreDWidget->setMinimumSize(QSize(320, 320));

        verticalLayout_plot->addWidget(ThreDWidget);

        line_2 = new QFrame(scrollAreaWidgetContents_plot);
        line_2->setObjectName(QString::fromUtf8("line_2"));
        line_2->setFrameShape(QFrame::HLine);
        line_2->setFrameShadow(QFrame::Sunken);

        verticalLayout_plot->addWidget(line_2);

        label_2 = new QLabel(scrollAreaWidgetContents_plot);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Maximum);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(label_2->sizePolicy().hasHeightForWidth());
        label_2->setSizePolicy(sizePolicy1);

        verticalLayout_plot->addWidget(label_2);

        widget_2 = new QCustomPlot(scrollAreaWidgetContents_plot);
        widget_2->setObjectName(QString::fromUtf8("widget_2"));
        widget_2->setMinimumSize(QSize(0, 150));

        verticalLayout_plot->addWidget(widget_2);

        label_5 = new QLabel(scrollAreaWidgetContents_plot);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        verticalLayout_plot->addWidget(label_5);

        widget_3 = new QCustomPlot(scrollAreaWidgetContents_plot);
        widget_3->setObjectName(QString::fromUtf8("widget_3"));
        widget_3->setMinimumSize(QSize(0, 150));

        verticalLayout_plot->addWidget(widget_3);

        label_6 = new QLabel(scrollAreaWidgetContents_plot);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        verticalLayout_plot->addWidget(label_6);

        widget_4 = new QCustomPlot(scrollAreaWidgetContents_plot);
        widget_4->setObjectName(QString::fromUtf8("widget_4"));
        widget_4->setMinimumSize(QSize(0, 150));

        verticalLayout_plot->addWidget(widget_4);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        verticalLayout_plot->addItem(horizontalSpacer);

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
        label = new QLabel(scrollAreaWidgetContents_controls);
        label->setObjectName(QString::fromUtf8("label"));
        sizePolicy1.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy1);

        verticalLayout_controls->addWidget(label);

        doubleSpinBox = new QDoubleSpinBox(scrollAreaWidgetContents_controls);
        doubleSpinBox->setObjectName(QString::fromUtf8("doubleSpinBox"));

        verticalLayout_controls->addWidget(doubleSpinBox);

        label_3 = new QLabel(scrollAreaWidgetContents_controls);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        sizePolicy1.setHeightForWidth(label_3->sizePolicy().hasHeightForWidth());
        label_3->setSizePolicy(sizePolicy1);

        verticalLayout_controls->addWidget(label_3);

        doubleSpinBox_2 = new QDoubleSpinBox(scrollAreaWidgetContents_controls);
        doubleSpinBox_2->setObjectName(QString::fromUtf8("doubleSpinBox_2"));

        verticalLayout_controls->addWidget(doubleSpinBox_2);

        label_4 = new QLabel(scrollAreaWidgetContents_controls);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        sizePolicy1.setHeightForWidth(label_4->sizePolicy().hasHeightForWidth());
        label_4->setSizePolicy(sizePolicy1);

        verticalLayout_controls->addWidget(label_4);

        doubleSpinBox_3 = new QDoubleSpinBox(scrollAreaWidgetContents_controls);
        doubleSpinBox_3->setObjectName(QString::fromUtf8("doubleSpinBox_3"));

        verticalLayout_controls->addWidget(doubleSpinBox_3);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        verticalLayout_controls->addItem(horizontalSpacer_2);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_controls->addItem(verticalSpacer);

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
        label_5->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
        label_6->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "PID(P)", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "PID(I)", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "PID(D)", nullptr));
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
