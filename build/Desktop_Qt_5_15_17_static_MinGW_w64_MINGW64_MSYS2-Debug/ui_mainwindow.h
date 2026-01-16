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
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStackedWidget>
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
    QScrollArea *scrollArea_controls;
    QWidget *scrollAreaWidgetContents_controls;
    QVBoxLayout *verticalLayout_controls;
    QLabel *label;
    QDoubleSpinBox *doubleSpinBox;
    QLabel *label_3;
    QDoubleSpinBox *doubleSpinBox_2;
    QLabel *label_4;
    QDoubleSpinBox *doubleSpinBox_3;
    QFrame *line_3;
    QSpacerItem *horizontalSpacer_2;
    QSpacerItem *verticalSpacer;
    QFrame *line;
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
    QFrame *line_4;
    QSpacerItem *horizontalSpacer;
    QWidget *tab_esc;
    QGridLayout *gridLayout_3;
    QWidget *tab_ccn;
    QGridLayout *gridLayout_4;
    QHBoxLayout *horizontalLayout;
    QScrollArea *scrollArea_plot_3;
    QWidget *scrollAreaWidgetContents_plot_2;
    QVBoxLayout *verticalLayout_plot_2;
    QLabel *label_7;
    QComboBox *comboBox;
    QFrame *line_5;
    QStackedWidget *stackedWidget;
    QWidget *page;
    QWidget *page_2;
    QFrame *line_6;
    QStackedWidget *stackedWidget_3;
    QWidget *pageSonar;
    QGridLayout *gridLayout_9;
    QGroupBox *groupBox_6;
    QGridLayout *gridLayout_12;
    QScrollArea *scrollArea_9;
    QWidget *scrollAreaWidgetContents_9;
    QVBoxLayout *verticalLayout_5;
    QLabel *label_10;
    QDoubleSpinBox *spinDepth_2;
    QLabel *label_20;
    QDoubleSpinBox *spinAlphaAngleDepth_2;
    QLabel *label_28;
    QDoubleSpinBox *spinOmegaDepth_2;
    QDoubleSpinBox *spinKomegaDepth_2;
    QLabel *label_29;
    QDoubleSpinBox *spinThetaDepth_2;
    QDoubleSpinBox *spinKthetaDepth_2;
    QWidget *pageCamera;
    QGridLayout *gridLayout_13;
    QGroupBox *groupBox_7;
    QGridLayout *gridLayout_14;
    QScrollArea *scrollArea_10;
    QWidget *scrollAreaWidgetContents_10;
    QVBoxLayout *verticalLayout_6;
    QWidget *widget;
    QLabel *label_30;
    QDoubleSpinBox *spinDeltaRmax_2;
    QLabel *label_31;
    QDoubleSpinBox *spinKomegaZ_2;
    QLabel *label_32;
    QDoubleSpinBox *spinK_2;
    QLabel *label_11;
    QDoubleSpinBox *spinKDelta_2;
    QWidget *page_3;
    QWidget *pagepelingator;
    QGridLayout *gridLayout_15;
    QGroupBox *groupBox_8;
    QGridLayout *gridLayout_16;
    QScrollArea *scrollArea_11;
    QWidget *scrollAreaWidgetContents_11;
    QVBoxLayout *verticalLayout_7;
    QLabel *label_33;
    QDoubleSpinBox *spinVxTrajectory_2;
    QLabel *label_34;
    QDoubleSpinBox *spinVyTrajectory_2;
    QLabel *label_35;
    QDoubleSpinBox *spinXi0Trajectory_2;
    QLabel *label_36;
    QDoubleSpinBox *spinEta0Trajectory_2;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(922, 528);
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
        scrollArea_controls = new QScrollArea(tab_main);
        scrollArea_controls->setObjectName(QString::fromUtf8("scrollArea_controls"));
        scrollArea_controls->setWidgetResizable(true);
        scrollAreaWidgetContents_controls = new QWidget();
        scrollAreaWidgetContents_controls->setObjectName(QString::fromUtf8("scrollAreaWidgetContents_controls"));
        scrollAreaWidgetContents_controls->setGeometry(QRect(0, 0, 431, 418));
        verticalLayout_controls = new QVBoxLayout(scrollAreaWidgetContents_controls);
        verticalLayout_controls->setObjectName(QString::fromUtf8("verticalLayout_controls"));
        label = new QLabel(scrollAreaWidgetContents_controls);
        label->setObjectName(QString::fromUtf8("label"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Maximum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy);
        QFont font;
        font.setPointSize(12);
        label->setFont(font);

        verticalLayout_controls->addWidget(label);

        doubleSpinBox = new QDoubleSpinBox(scrollAreaWidgetContents_controls);
        doubleSpinBox->setObjectName(QString::fromUtf8("doubleSpinBox"));
        doubleSpinBox->setFont(font);

        verticalLayout_controls->addWidget(doubleSpinBox);

        label_3 = new QLabel(scrollAreaWidgetContents_controls);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        sizePolicy.setHeightForWidth(label_3->sizePolicy().hasHeightForWidth());
        label_3->setSizePolicy(sizePolicy);
        label_3->setFont(font);

        verticalLayout_controls->addWidget(label_3);

        doubleSpinBox_2 = new QDoubleSpinBox(scrollAreaWidgetContents_controls);
        doubleSpinBox_2->setObjectName(QString::fromUtf8("doubleSpinBox_2"));
        doubleSpinBox_2->setFont(font);

        verticalLayout_controls->addWidget(doubleSpinBox_2);

        label_4 = new QLabel(scrollAreaWidgetContents_controls);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        sizePolicy.setHeightForWidth(label_4->sizePolicy().hasHeightForWidth());
        label_4->setSizePolicy(sizePolicy);
        label_4->setFont(font);

        verticalLayout_controls->addWidget(label_4);

        doubleSpinBox_3 = new QDoubleSpinBox(scrollAreaWidgetContents_controls);
        doubleSpinBox_3->setObjectName(QString::fromUtf8("doubleSpinBox_3"));
        doubleSpinBox_3->setFont(font);

        verticalLayout_controls->addWidget(doubleSpinBox_3);

        line_3 = new QFrame(scrollAreaWidgetContents_controls);
        line_3->setObjectName(QString::fromUtf8("line_3"));
        line_3->setFrameShape(QFrame::HLine);
        line_3->setFrameShadow(QFrame::Sunken);

        verticalLayout_controls->addWidget(line_3);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        verticalLayout_controls->addItem(horizontalSpacer_2);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_controls->addItem(verticalSpacer);

        scrollArea_controls->setWidget(scrollAreaWidgetContents_controls);

        gridLayout_2->addWidget(scrollArea_controls, 0, 1, 1, 1);

        line = new QFrame(tab_main);
        line->setObjectName(QString::fromUtf8("line"));
        line->setFrameShape(QFrame::VLine);
        line->setFrameShadow(QFrame::Sunken);

        gridLayout_2->addWidget(line, 0, 2, 1, 1);

        scrollArea_plot = new QScrollArea(tab_main);
        scrollArea_plot->setObjectName(QString::fromUtf8("scrollArea_plot"));
        scrollArea_plot->setWidgetResizable(true);
        scrollAreaWidgetContents_plot = new QWidget();
        scrollAreaWidgetContents_plot->setObjectName(QString::fromUtf8("scrollAreaWidgetContents_plot"));
        scrollAreaWidgetContents_plot->setGeometry(QRect(0, 0, 413, 931));
        verticalLayout_plot = new QVBoxLayout(scrollAreaWidgetContents_plot);
        verticalLayout_plot->setObjectName(QString::fromUtf8("verticalLayout_plot"));
        ThreDWidget = new QWidget(scrollAreaWidgetContents_plot);
        ThreDWidget->setObjectName(QString::fromUtf8("ThreDWidget"));
        QSizePolicy sizePolicy1(QSizePolicy::Minimum, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(ThreDWidget->sizePolicy().hasHeightForWidth());
        ThreDWidget->setSizePolicy(sizePolicy1);
        ThreDWidget->setMinimumSize(QSize(320, 320));
        ThreDWidget->setLayoutDirection(Qt::LeftToRight);

        verticalLayout_plot->addWidget(ThreDWidget);

        line_2 = new QFrame(scrollAreaWidgetContents_plot);
        line_2->setObjectName(QString::fromUtf8("line_2"));
        line_2->setFrameShape(QFrame::HLine);
        line_2->setFrameShadow(QFrame::Sunken);

        verticalLayout_plot->addWidget(line_2);

        label_2 = new QLabel(scrollAreaWidgetContents_plot);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        sizePolicy.setHeightForWidth(label_2->sizePolicy().hasHeightForWidth());
        label_2->setSizePolicy(sizePolicy);
        label_2->setFont(font);

        verticalLayout_plot->addWidget(label_2);

        widget_2 = new QCustomPlot(scrollAreaWidgetContents_plot);
        widget_2->setObjectName(QString::fromUtf8("widget_2"));
        widget_2->setMinimumSize(QSize(0, 150));

        verticalLayout_plot->addWidget(widget_2);

        label_5 = new QLabel(scrollAreaWidgetContents_plot);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setFont(font);

        verticalLayout_plot->addWidget(label_5);

        widget_3 = new QCustomPlot(scrollAreaWidgetContents_plot);
        widget_3->setObjectName(QString::fromUtf8("widget_3"));
        widget_3->setMinimumSize(QSize(0, 150));

        verticalLayout_plot->addWidget(widget_3);

        label_6 = new QLabel(scrollAreaWidgetContents_plot);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setFont(font);

        verticalLayout_plot->addWidget(label_6);

        widget_4 = new QCustomPlot(scrollAreaWidgetContents_plot);
        widget_4->setObjectName(QString::fromUtf8("widget_4"));
        widget_4->setMinimumSize(QSize(0, 150));

        verticalLayout_plot->addWidget(widget_4);

        line_4 = new QFrame(scrollAreaWidgetContents_plot);
        line_4->setObjectName(QString::fromUtf8("line_4"));
        line_4->setFrameShape(QFrame::HLine);
        line_4->setFrameShadow(QFrame::Sunken);

        verticalLayout_plot->addWidget(line_4);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        verticalLayout_plot->addItem(horizontalSpacer);

        scrollArea_plot->setWidget(scrollAreaWidgetContents_plot);

        gridLayout_2->addWidget(scrollArea_plot, 0, 3, 1, 1);

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
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        scrollArea_plot_3 = new QScrollArea(tab_ccn);
        scrollArea_plot_3->setObjectName(QString::fromUtf8("scrollArea_plot_3"));
        QSizePolicy sizePolicy2(QSizePolicy::Fixed, QSizePolicy::Expanding);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(scrollArea_plot_3->sizePolicy().hasHeightForWidth());
        scrollArea_plot_3->setSizePolicy(sizePolicy2);
        scrollArea_plot_3->setMinimumSize(QSize(268, 0));
        scrollArea_plot_3->setBaseSize(QSize(140, 0));
        scrollArea_plot_3->setWidgetResizable(true);
        scrollAreaWidgetContents_plot_2 = new QWidget();
        scrollAreaWidgetContents_plot_2->setObjectName(QString::fromUtf8("scrollAreaWidgetContents_plot_2"));
        scrollAreaWidgetContents_plot_2->setGeometry(QRect(0, 0, 268, 399));
        verticalLayout_plot_2 = new QVBoxLayout(scrollAreaWidgetContents_plot_2);
        verticalLayout_plot_2->setObjectName(QString::fromUtf8("verticalLayout_plot_2"));
        verticalLayout_plot_2->setContentsMargins(9, 9, 9, 9);
        label_7 = new QLabel(scrollAreaWidgetContents_plot_2);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        QSizePolicy sizePolicy3(QSizePolicy::Maximum, QSizePolicy::Maximum);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(label_7->sizePolicy().hasHeightForWidth());
        label_7->setSizePolicy(sizePolicy3);
        label_7->setMinimumSize(QSize(250, 0));
        label_7->setFont(font);

        verticalLayout_plot_2->addWidget(label_7);

        comboBox = new QComboBox(scrollAreaWidgetContents_plot_2);
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->setObjectName(QString::fromUtf8("comboBox"));
        QSizePolicy sizePolicy4(QSizePolicy::Maximum, QSizePolicy::Fixed);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(comboBox->sizePolicy().hasHeightForWidth());
        comboBox->setSizePolicy(sizePolicy4);
        comboBox->setMinimumSize(QSize(250, 0));
        comboBox->setFont(font);

        verticalLayout_plot_2->addWidget(comboBox);

        line_5 = new QFrame(scrollAreaWidgetContents_plot_2);
        line_5->setObjectName(QString::fromUtf8("line_5"));
        sizePolicy4.setHeightForWidth(line_5->sizePolicy().hasHeightForWidth());
        line_5->setSizePolicy(sizePolicy4);
        line_5->setMinimumSize(QSize(250, 0));
        line_5->setFrameShape(QFrame::HLine);
        line_5->setFrameShadow(QFrame::Sunken);

        verticalLayout_plot_2->addWidget(line_5);

        stackedWidget = new QStackedWidget(scrollAreaWidgetContents_plot_2);
        stackedWidget->setObjectName(QString::fromUtf8("stackedWidget"));
        QSizePolicy sizePolicy5(QSizePolicy::Fixed, QSizePolicy::Preferred);
        sizePolicy5.setHorizontalStretch(0);
        sizePolicy5.setVerticalStretch(0);
        sizePolicy5.setHeightForWidth(stackedWidget->sizePolicy().hasHeightForWidth());
        stackedWidget->setSizePolicy(sizePolicy5);
        stackedWidget->setMinimumSize(QSize(250, 0));
        page = new QWidget();
        page->setObjectName(QString::fromUtf8("page"));
        stackedWidget->addWidget(page);
        page_2 = new QWidget();
        page_2->setObjectName(QString::fromUtf8("page_2"));
        stackedWidget->addWidget(page_2);

        verticalLayout_plot_2->addWidget(stackedWidget);

        scrollArea_plot_3->setWidget(scrollAreaWidgetContents_plot_2);

        horizontalLayout->addWidget(scrollArea_plot_3);

        line_6 = new QFrame(tab_ccn);
        line_6->setObjectName(QString::fromUtf8("line_6"));
        line_6->setFrameShape(QFrame::VLine);
        line_6->setFrameShadow(QFrame::Sunken);

        horizontalLayout->addWidget(line_6);

        stackedWidget_3 = new QStackedWidget(tab_ccn);
        stackedWidget_3->setObjectName(QString::fromUtf8("stackedWidget_3"));
        sizePolicy1.setHeightForWidth(stackedWidget_3->sizePolicy().hasHeightForWidth());
        stackedWidget_3->setSizePolicy(sizePolicy1);
        pageSonar = new QWidget();
        pageSonar->setObjectName(QString::fromUtf8("pageSonar"));
        gridLayout_9 = new QGridLayout(pageSonar);
        gridLayout_9->setObjectName(QString::fromUtf8("gridLayout_9"));
        groupBox_6 = new QGroupBox(pageSonar);
        groupBox_6->setObjectName(QString::fromUtf8("groupBox_6"));
        groupBox_6->setFont(font);
        gridLayout_12 = new QGridLayout(groupBox_6);
        gridLayout_12->setObjectName(QString::fromUtf8("gridLayout_12"));
        gridLayout_12->setContentsMargins(9, 0, 0, 0);
        scrollArea_9 = new QScrollArea(groupBox_6);
        scrollArea_9->setObjectName(QString::fromUtf8("scrollArea_9"));
        scrollArea_9->setWidgetResizable(true);
        scrollAreaWidgetContents_9 = new QWidget();
        scrollAreaWidgetContents_9->setObjectName(QString::fromUtf8("scrollAreaWidgetContents_9"));
        scrollAreaWidgetContents_9->setGeometry(QRect(0, 0, 371, 300));
        verticalLayout_5 = new QVBoxLayout(scrollAreaWidgetContents_9);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        verticalLayout_5->setContentsMargins(0, 0, 0, 0);
        label_10 = new QLabel(scrollAreaWidgetContents_9);
        label_10->setObjectName(QString::fromUtf8("label_10"));

        verticalLayout_5->addWidget(label_10);

        spinDepth_2 = new QDoubleSpinBox(scrollAreaWidgetContents_9);
        spinDepth_2->setObjectName(QString::fromUtf8("spinDepth_2"));

        verticalLayout_5->addWidget(spinDepth_2);

        label_20 = new QLabel(scrollAreaWidgetContents_9);
        label_20->setObjectName(QString::fromUtf8("label_20"));
        label_20->setFont(font);

        verticalLayout_5->addWidget(label_20);

        spinAlphaAngleDepth_2 = new QDoubleSpinBox(scrollAreaWidgetContents_9);
        spinAlphaAngleDepth_2->setObjectName(QString::fromUtf8("spinAlphaAngleDepth_2"));
        spinAlphaAngleDepth_2->setFont(font);

        verticalLayout_5->addWidget(spinAlphaAngleDepth_2);

        label_28 = new QLabel(scrollAreaWidgetContents_9);
        label_28->setObjectName(QString::fromUtf8("label_28"));
        label_28->setFont(font);

        verticalLayout_5->addWidget(label_28);

        spinOmegaDepth_2 = new QDoubleSpinBox(scrollAreaWidgetContents_9);
        spinOmegaDepth_2->setObjectName(QString::fromUtf8("spinOmegaDepth_2"));
        spinOmegaDepth_2->setFont(font);

        verticalLayout_5->addWidget(spinOmegaDepth_2);

        spinKomegaDepth_2 = new QDoubleSpinBox(scrollAreaWidgetContents_9);
        spinKomegaDepth_2->setObjectName(QString::fromUtf8("spinKomegaDepth_2"));
        spinKomegaDepth_2->setFont(font);

        verticalLayout_5->addWidget(spinKomegaDepth_2);

        label_29 = new QLabel(scrollAreaWidgetContents_9);
        label_29->setObjectName(QString::fromUtf8("label_29"));
        label_29->setFont(font);

        verticalLayout_5->addWidget(label_29);

        spinThetaDepth_2 = new QDoubleSpinBox(scrollAreaWidgetContents_9);
        spinThetaDepth_2->setObjectName(QString::fromUtf8("spinThetaDepth_2"));
        spinThetaDepth_2->setFont(font);
        spinThetaDepth_2->setMinimum(-100.000000000000000);
        spinThetaDepth_2->setMaximum(100.000000000000000);

        verticalLayout_5->addWidget(spinThetaDepth_2);

        spinKthetaDepth_2 = new QDoubleSpinBox(scrollAreaWidgetContents_9);
        spinKthetaDepth_2->setObjectName(QString::fromUtf8("spinKthetaDepth_2"));
        spinKthetaDepth_2->setFont(font);

        verticalLayout_5->addWidget(spinKthetaDepth_2);

        scrollArea_9->setWidget(scrollAreaWidgetContents_9);

        gridLayout_12->addWidget(scrollArea_9, 0, 0, 1, 1);


        gridLayout_9->addWidget(groupBox_6, 0, 0, 1, 1);

        stackedWidget_3->addWidget(pageSonar);
        pageCamera = new QWidget();
        pageCamera->setObjectName(QString::fromUtf8("pageCamera"));
        gridLayout_13 = new QGridLayout(pageCamera);
        gridLayout_13->setObjectName(QString::fromUtf8("gridLayout_13"));
        gridLayout_13->setContentsMargins(0, 0, 0, 0);
        groupBox_7 = new QGroupBox(pageCamera);
        groupBox_7->setObjectName(QString::fromUtf8("groupBox_7"));
        groupBox_7->setFont(font);
        gridLayout_14 = new QGridLayout(groupBox_7);
        gridLayout_14->setObjectName(QString::fromUtf8("gridLayout_14"));
        gridLayout_14->setContentsMargins(9, 0, 0, 0);
        scrollArea_10 = new QScrollArea(groupBox_7);
        scrollArea_10->setObjectName(QString::fromUtf8("scrollArea_10"));
        scrollArea_10->setWidgetResizable(true);
        scrollAreaWidgetContents_10 = new QWidget();
        scrollAreaWidgetContents_10->setObjectName(QString::fromUtf8("scrollAreaWidgetContents_10"));
        scrollAreaWidgetContents_10->setGeometry(QRect(0, 0, 565, 580));
        verticalLayout_6 = new QVBoxLayout(scrollAreaWidgetContents_10);
        verticalLayout_6->setObjectName(QString::fromUtf8("verticalLayout_6"));
        verticalLayout_6->setContentsMargins(0, 0, 0, 0);
        widget = new QWidget(scrollAreaWidgetContents_10);
        widget->setObjectName(QString::fromUtf8("widget"));
        QSizePolicy sizePolicy6(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy6.setHorizontalStretch(32);
        sizePolicy6.setVerticalStretch(0);
        sizePolicy6.setHeightForWidth(widget->sizePolicy().hasHeightForWidth());
        widget->setSizePolicy(sizePolicy6);
        widget->setMinimumSize(QSize(340, 340));
        widget->setMaximumSize(QSize(320, 320));
        widget->setLayoutDirection(Qt::LeftToRight);

        verticalLayout_6->addWidget(widget);

        label_30 = new QLabel(scrollAreaWidgetContents_10);
        label_30->setObjectName(QString::fromUtf8("label_30"));
        sizePolicy1.setHeightForWidth(label_30->sizePolicy().hasHeightForWidth());
        label_30->setSizePolicy(sizePolicy1);
        label_30->setFont(font);

        verticalLayout_6->addWidget(label_30);

        spinDeltaRmax_2 = new QDoubleSpinBox(scrollAreaWidgetContents_10);
        spinDeltaRmax_2->setObjectName(QString::fromUtf8("spinDeltaRmax_2"));
        QSizePolicy sizePolicy7(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy7.setHorizontalStretch(0);
        sizePolicy7.setVerticalStretch(0);
        sizePolicy7.setHeightForWidth(spinDeltaRmax_2->sizePolicy().hasHeightForWidth());
        spinDeltaRmax_2->setSizePolicy(sizePolicy7);
        spinDeltaRmax_2->setMinimumSize(QSize(340, 0));
        spinDeltaRmax_2->setFont(font);

        verticalLayout_6->addWidget(spinDeltaRmax_2);

        label_31 = new QLabel(scrollAreaWidgetContents_10);
        label_31->setObjectName(QString::fromUtf8("label_31"));
        sizePolicy1.setHeightForWidth(label_31->sizePolicy().hasHeightForWidth());
        label_31->setSizePolicy(sizePolicy1);
        label_31->setFont(font);

        verticalLayout_6->addWidget(label_31);

        spinKomegaZ_2 = new QDoubleSpinBox(scrollAreaWidgetContents_10);
        spinKomegaZ_2->setObjectName(QString::fromUtf8("spinKomegaZ_2"));
        sizePolicy7.setHeightForWidth(spinKomegaZ_2->sizePolicy().hasHeightForWidth());
        spinKomegaZ_2->setSizePolicy(sizePolicy7);
        spinKomegaZ_2->setMinimumSize(QSize(340, 0));
        spinKomegaZ_2->setFont(font);

        verticalLayout_6->addWidget(spinKomegaZ_2);

        label_32 = new QLabel(scrollAreaWidgetContents_10);
        label_32->setObjectName(QString::fromUtf8("label_32"));
        sizePolicy1.setHeightForWidth(label_32->sizePolicy().hasHeightForWidth());
        label_32->setSizePolicy(sizePolicy1);
        label_32->setFont(font);

        verticalLayout_6->addWidget(label_32);

        spinK_2 = new QDoubleSpinBox(scrollAreaWidgetContents_10);
        spinK_2->setObjectName(QString::fromUtf8("spinK_2"));
        sizePolicy7.setHeightForWidth(spinK_2->sizePolicy().hasHeightForWidth());
        spinK_2->setSizePolicy(sizePolicy7);
        spinK_2->setMinimumSize(QSize(340, 0));
        spinK_2->setFont(font);

        verticalLayout_6->addWidget(spinK_2);

        label_11 = new QLabel(scrollAreaWidgetContents_10);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        sizePolicy1.setHeightForWidth(label_11->sizePolicy().hasHeightForWidth());
        label_11->setSizePolicy(sizePolicy1);

        verticalLayout_6->addWidget(label_11);

        spinKDelta_2 = new QDoubleSpinBox(scrollAreaWidgetContents_10);
        spinKDelta_2->setObjectName(QString::fromUtf8("spinKDelta_2"));
        sizePolicy7.setHeightForWidth(spinKDelta_2->sizePolicy().hasHeightForWidth());
        spinKDelta_2->setSizePolicy(sizePolicy7);
        spinKDelta_2->setMinimumSize(QSize(340, 0));

        verticalLayout_6->addWidget(spinKDelta_2);

        scrollArea_10->setWidget(scrollAreaWidgetContents_10);

        gridLayout_14->addWidget(scrollArea_10, 1, 0, 1, 1);


        gridLayout_13->addWidget(groupBox_7, 0, 0, 1, 1);

        stackedWidget_3->addWidget(pageCamera);
        page_3 = new QWidget();
        page_3->setObjectName(QString::fromUtf8("page_3"));
        stackedWidget_3->addWidget(page_3);
        pagepelingator = new QWidget();
        pagepelingator->setObjectName(QString::fromUtf8("pagepelingator"));
        gridLayout_15 = new QGridLayout(pagepelingator);
        gridLayout_15->setObjectName(QString::fromUtf8("gridLayout_15"));
        groupBox_8 = new QGroupBox(pagepelingator);
        groupBox_8->setObjectName(QString::fromUtf8("groupBox_8"));
        groupBox_8->setFont(font);
        gridLayout_16 = new QGridLayout(groupBox_8);
        gridLayout_16->setObjectName(QString::fromUtf8("gridLayout_16"));
        gridLayout_16->setContentsMargins(9, 0, 0, 0);
        scrollArea_11 = new QScrollArea(groupBox_8);
        scrollArea_11->setObjectName(QString::fromUtf8("scrollArea_11"));
        scrollArea_11->setWidgetResizable(true);
        scrollAreaWidgetContents_11 = new QWidget();
        scrollAreaWidgetContents_11->setObjectName(QString::fromUtf8("scrollAreaWidgetContents_11"));
        scrollAreaWidgetContents_11->setGeometry(QRect(0, 0, 233, 234));
        verticalLayout_7 = new QVBoxLayout(scrollAreaWidgetContents_11);
        verticalLayout_7->setObjectName(QString::fromUtf8("verticalLayout_7"));
        verticalLayout_7->setContentsMargins(0, 0, 0, 0);
        label_33 = new QLabel(scrollAreaWidgetContents_11);
        label_33->setObjectName(QString::fromUtf8("label_33"));
        label_33->setFont(font);

        verticalLayout_7->addWidget(label_33);

        spinVxTrajectory_2 = new QDoubleSpinBox(scrollAreaWidgetContents_11);
        spinVxTrajectory_2->setObjectName(QString::fromUtf8("spinVxTrajectory_2"));
        spinVxTrajectory_2->setFont(font);

        verticalLayout_7->addWidget(spinVxTrajectory_2);

        label_34 = new QLabel(scrollAreaWidgetContents_11);
        label_34->setObjectName(QString::fromUtf8("label_34"));
        label_34->setFont(font);

        verticalLayout_7->addWidget(label_34);

        spinVyTrajectory_2 = new QDoubleSpinBox(scrollAreaWidgetContents_11);
        spinVyTrajectory_2->setObjectName(QString::fromUtf8("spinVyTrajectory_2"));
        spinVyTrajectory_2->setFont(font);

        verticalLayout_7->addWidget(spinVyTrajectory_2);

        label_35 = new QLabel(scrollAreaWidgetContents_11);
        label_35->setObjectName(QString::fromUtf8("label_35"));
        label_35->setFont(font);

        verticalLayout_7->addWidget(label_35);

        spinXi0Trajectory_2 = new QDoubleSpinBox(scrollAreaWidgetContents_11);
        spinXi0Trajectory_2->setObjectName(QString::fromUtf8("spinXi0Trajectory_2"));
        spinXi0Trajectory_2->setFont(font);

        verticalLayout_7->addWidget(spinXi0Trajectory_2);

        label_36 = new QLabel(scrollAreaWidgetContents_11);
        label_36->setObjectName(QString::fromUtf8("label_36"));
        label_36->setFont(font);

        verticalLayout_7->addWidget(label_36);

        spinEta0Trajectory_2 = new QDoubleSpinBox(scrollAreaWidgetContents_11);
        spinEta0Trajectory_2->setObjectName(QString::fromUtf8("spinEta0Trajectory_2"));
        spinEta0Trajectory_2->setFont(font);

        verticalLayout_7->addWidget(spinEta0Trajectory_2);

        scrollArea_11->setWidget(scrollAreaWidgetContents_11);

        gridLayout_16->addWidget(scrollArea_11, 0, 0, 1, 1);


        gridLayout_15->addWidget(groupBox_8, 0, 0, 1, 1);

        stackedWidget_3->addWidget(pagepelingator);

        horizontalLayout->addWidget(stackedWidget_3);


        gridLayout_4->addLayout(horizontalLayout, 0, 0, 1, 1);

        tabWidget->addTab(tab_ccn, QString());

        gridLayout->addWidget(tabWidget, 0, 0, 1, 1);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 922, 22));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        tabWidget->setCurrentIndex(2);
        stackedWidget->setCurrentIndex(1);
        stackedWidget_3->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "PID(P)", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "PID(I)", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "PID(D)", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "\320\232\321\200\320\265\320\275(roll, \317\206)", nullptr));
        label_5->setText(QCoreApplication::translate("MainWindow", "\320\240\321\213\321\201\320\272\320\260\320\275\320\270\320\265 (yaw, \317\210)", nullptr));
        label_6->setText(QCoreApplication::translate("MainWindow", "\320\242\320\260\320\275\320\263\320\260\320\266 (pitch, \316\270)", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_main), QCoreApplication::translate("MainWindow", "Main", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_esc), QCoreApplication::translate("MainWindow", "ESC", nullptr));
        label_7->setText(QCoreApplication::translate("MainWindow", "\320\242\320\270\320\277 \320\223\320\241\320\235/\320\241\320\241\320\235", nullptr));
        comboBox->setItemText(0, QCoreApplication::translate("MainWindow", "None", nullptr));
        comboBox->setItemText(1, QCoreApplication::translate("MainWindow", "Camera", nullptr));
        comboBox->setItemText(2, QCoreApplication::translate("MainWindow", "Sonar", nullptr));
        comboBox->setItemText(3, QCoreApplication::translate("MainWindow", "Pelingator", nullptr));

        groupBox_6->setTitle(QCoreApplication::translate("MainWindow", "Sonar", nullptr));
        label_10->setText(QCoreApplication::translate("MainWindow", "\320\227\320\260\320\264\320\260\320\275\320\275\320\276\320\265 \321\203\320\263\320\273\321\203\320\261\320\273\320\265\320\275\320\270\320\265", nullptr));
        label_20->setText(QCoreApplication::translate("MainWindow", "\320\243\320\263\320\276\320\273 \320\260\321\202\320\260\320\272\320\270", nullptr));
        label_28->setText(QCoreApplication::translate("MainWindow", "\320\243\320\263\320\273\320\276\320\262\320\260\321\217 \321\201\320\272\320\276\321\200\320\276\321\201\321\202\321\214 \320\270 \320\272\320\276\321\215\321\204\321\204\320\270\321\206\320\270\320\265\320\275\321\202 \321\203\320\263\320\273\320\276\320\262\320\276\320\271 \321\201\320\272\320\276\321\200\320\276\321\201\321\202\320\270", nullptr));
        label_29->setText(QCoreApplication::translate("MainWindow", "\320\243\320\263\320\276\320\273 \320\264\320\270\321\204\321\204\320\265\321\200\320\265\320\275\321\202\320\260  \320\270 \320\272\320\276\321\215\321\204\321\204\320\270\321\206\320\270\320\265\320\275\321\202 \321\203\320\263\320\273\320\260 \320\264\320\270\321\204\321\204\320\265\321\200\320\265\320\275\321\202\320\260", nullptr));
        groupBox_7->setTitle(QCoreApplication::translate("MainWindow", "Camera", nullptr));
        label_30->setText(QCoreApplication::translate("MainWindow", "\320\246\320\265\320\273\320\265\320\262\320\260\321\217 \321\203\320\263\320\273\320\276\320\262\320\260\321\217 \321\201\320\272\320\276\321\200\320\276\321\201\321\202\321\214, \321\200\320\260\320\264/\321\201 (\317\211)", nullptr));
        label_31->setText(QCoreApplication::translate("MainWindow", "\320\234\320\260\320\272\321\201\320\270\320\274\320\260\320\273\321\214\320\275\320\276\320\265 \320\276\321\202\320\272\320\273\320\276\320\275\320\265\320\275\320\270\320\265 \321\200\321\203\320\273\321\217 (K\317\211z)", nullptr));
        label_32->setText(QCoreApplication::translate("MainWindow", "\320\232\320\276\321\215\321\204\321\204\320\270\321\206\320\270\320\265\320\275\321\202 \321\203\320\277\321\200\320\260\320\262\320\273\320\265\320\275\320\270\321\217, \302\260 (\316\264)", nullptr));
        label_11->setText(QCoreApplication::translate("MainWindow", "\316\224K", nullptr));
        groupBox_8->setTitle(QCoreApplication::translate("MainWindow", "Pelingator", nullptr));
        label_33->setText(QCoreApplication::translate("MainWindow", "\320\223\320\276\321\200\320\270\320\267\320\276\320\275\321\202\320\260\320\273\321\214\320\275\320\260\321\217 \321\201\320\272\320\276\321\200\320\276\321\201\321\202\321\214 V\342\202\223, \320\274/\321\201", nullptr));
        label_34->setText(QCoreApplication::translate("MainWindow", "\320\222\320\265\321\200\321\202\320\270\320\272\320\260\320\273\321\214\320\275\320\260\321\217 \321\201\320\272\320\276\321\200\320\276\321\201\321\202\321\214 V\341\265\247, \320\274/\321\201", nullptr));
        label_35->setText(QCoreApplication::translate("MainWindow", "\320\235\320\260\321\207\320\260\320\273\321\214\320\275\320\260\321\217 \320\272\320\276\320\276\321\200\320\264\320\270\320\275\320\260\321\202\320\260 \316\276\342\202\200, \320\274", nullptr));
        label_36->setText(QCoreApplication::translate("MainWindow", "\320\235\320\260\321\207\320\260\320\273\321\214\320\275\320\260\321\217 \320\263\320\273\321\203\320\261\320\270\320\275\320\260 \316\267\342\202\200, \320\274", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_ccn), QCoreApplication::translate("MainWindow", "\320\223\320\241\320\235/\320\241\320\241\320\235", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
