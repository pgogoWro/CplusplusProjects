/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QWidget>
#include "qcustomplot.h"

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QCustomPlot *mainPlot;
    QFrame *settings;
    QLabel *temStartTitle;
    QLabel *label_2;
    QSpinBox *spinBox;
    QSpinBox *spinBox_2;
    QCheckBox *dmpcChcekBox;
    QCheckBox *dmpcChcekBox_2;
    QCheckBox *dmpcChcekBox_3;
    QCheckBox *dmpcChcekBox_4;
    QPushButton *startButton;
    QLabel *settingsTitle;
    QFrame *settings_2;
    QLabel *temStartTitle_3;
    QLabel *label_4;
    QSpinBox *spinBox_5;
    QSpinBox *spinBox_6;
    QPushButton *startButton_3;
    QLabel *temStartTitle_4;
    QLabel *label_5;
    QTextBrowser *textBrowser;
    QTextBrowser *textBrowser_2;
    QLabel *label_6;
    QTextBrowser *textBrowser_3;
    QLabel *settingsTitle_2;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(1000, 700);
        MainWindow->setMinimumSize(QSize(1000, 700));
        MainWindow->setMaximumSize(QSize(1000, 700));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        mainPlot = new QCustomPlot(centralwidget);
        mainPlot->setObjectName(QString::fromUtf8("mainPlot"));
        mainPlot->setGeometry(QRect(10, 10, 800, 500));
        settings = new QFrame(centralwidget);
        settings->setObjectName(QString::fromUtf8("settings"));
        settings->setGeometry(QRect(820, 10, 170, 190));
        settings->setFrameShape(QFrame::WinPanel);
        settings->setFrameShadow(QFrame::Raised);
        temStartTitle = new QLabel(settings);
        temStartTitle->setObjectName(QString::fromUtf8("temStartTitle"));
        temStartTitle->setGeometry(QRect(5, 20, 80, 40));
        temStartTitle->setTextFormat(Qt::AutoText);
        temStartTitle->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        label_2 = new QLabel(settings);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(85, 20, 80, 40));
        label_2->setAlignment(Qt::AlignHCenter|Qt::AlignTop);
        spinBox = new QSpinBox(settings);
        spinBox->setObjectName(QString::fromUtf8("spinBox"));
        spinBox->setGeometry(QRect(10, 55, 70, 20));
        spinBox->setMaximumSize(QSize(70, 20));
        spinBox->setMaximum(400);
        spinBox_2 = new QSpinBox(settings);
        spinBox_2->setObjectName(QString::fromUtf8("spinBox_2"));
        spinBox_2->setGeometry(QRect(90, 55, 70, 20));
        dmpcChcekBox = new QCheckBox(settings);
        dmpcChcekBox->setObjectName(QString::fromUtf8("dmpcChcekBox"));
        dmpcChcekBox->setGeometry(QRect(90, 90, 60, 20));
        dmpcChcekBox_2 = new QCheckBox(settings);
        dmpcChcekBox_2->setObjectName(QString::fromUtf8("dmpcChcekBox_2"));
        dmpcChcekBox_2->setGeometry(QRect(90, 110, 60, 20));
        dmpcChcekBox_3 = new QCheckBox(settings);
        dmpcChcekBox_3->setObjectName(QString::fromUtf8("dmpcChcekBox_3"));
        dmpcChcekBox_3->setGeometry(QRect(90, 130, 60, 20));
        dmpcChcekBox_4 = new QCheckBox(settings);
        dmpcChcekBox_4->setObjectName(QString::fromUtf8("dmpcChcekBox_4"));
        dmpcChcekBox_4->setGeometry(QRect(90, 150, 60, 20));
        startButton = new QPushButton(settings);
        startButton->setObjectName(QString::fromUtf8("startButton"));
        startButton->setGeometry(QRect(10, 90, 70, 70));
        QPalette palette;
        QBrush brush(QColor(0, 255, 0, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Button, brush);
        QBrush brush1(QColor(240, 240, 240, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        startButton->setPalette(palette);
        settingsTitle = new QLabel(centralwidget);
        settingsTitle->setObjectName(QString::fromUtf8("settingsTitle"));
        settingsTitle->setGeometry(QRect(820, 10, 170, 20));
        settingsTitle->setAlignment(Qt::AlignCenter);
        settings_2 = new QFrame(centralwidget);
        settings_2->setObjectName(QString::fromUtf8("settings_2"));
        settings_2->setGeometry(QRect(820, 210, 170, 311));
        settings_2->setFrameShape(QFrame::WinPanel);
        settings_2->setFrameShadow(QFrame::Raised);
        temStartTitle_3 = new QLabel(settings_2);
        temStartTitle_3->setObjectName(QString::fromUtf8("temStartTitle_3"));
        temStartTitle_3->setGeometry(QRect(5, 20, 80, 40));
        temStartTitle_3->setTextFormat(Qt::AutoText);
        temStartTitle_3->setAlignment(Qt::AlignHCenter|Qt::AlignTop);
        label_4 = new QLabel(settings_2);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(85, 20, 80, 40));
        label_4->setAlignment(Qt::AlignHCenter|Qt::AlignTop);
        spinBox_5 = new QSpinBox(settings_2);
        spinBox_5->setObjectName(QString::fromUtf8("spinBox_5"));
        spinBox_5->setGeometry(QRect(10, 55, 70, 20));
        spinBox_5->setMaximumSize(QSize(70, 20));
        spinBox_5->setMaximum(400);
        spinBox_6 = new QSpinBox(settings_2);
        spinBox_6->setObjectName(QString::fromUtf8("spinBox_6"));
        spinBox_6->setGeometry(QRect(90, 55, 70, 20));
        startButton_3 = new QPushButton(settings_2);
        startButton_3->setObjectName(QString::fromUtf8("startButton_3"));
        startButton_3->setGeometry(QRect(10, 90, 151, 31));
        QPalette palette1;
        palette1.setBrush(QPalette::Active, QPalette::Button, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette1.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        startButton_3->setPalette(palette1);
        temStartTitle_4 = new QLabel(settings_2);
        temStartTitle_4->setObjectName(QString::fromUtf8("temStartTitle_4"));
        temStartTitle_4->setGeometry(QRect(5, 125, 80, 51));
        temStartTitle_4->setTextFormat(Qt::AutoText);
        temStartTitle_4->setAlignment(Qt::AlignHCenter|Qt::AlignTop);
        label_5 = new QLabel(settings_2);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(85, 125, 80, 51));
        label_5->setAlignment(Qt::AlignHCenter|Qt::AlignTop);
        textBrowser = new QTextBrowser(settings_2);
        textBrowser->setObjectName(QString::fromUtf8("textBrowser"));
        textBrowser->setGeometry(QRect(10, 180, 71, 31));
        textBrowser_2 = new QTextBrowser(settings_2);
        textBrowser_2->setObjectName(QString::fromUtf8("textBrowser_2"));
        textBrowser_2->setGeometry(QRect(90, 180, 71, 31));
        label_6 = new QLabel(settings_2);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(5, 215, 80, 51));
        label_6->setAlignment(Qt::AlignHCenter|Qt::AlignTop);
        textBrowser_3 = new QTextBrowser(settings_2);
        textBrowser_3->setObjectName(QString::fromUtf8("textBrowser_3"));
        textBrowser_3->setGeometry(QRect(10, 270, 71, 31));
        settingsTitle_2 = new QLabel(centralwidget);
        settingsTitle_2->setObjectName(QString::fromUtf8("settingsTitle_2"));
        settingsTitle_2->setGeometry(QRect(820, 210, 170, 20));
        settingsTitle_2->setAlignment(Qt::AlignCenter);
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 1000, 22));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        temStartTitle->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p align=\"center\">Temperatura<br/> pocz\304\205tkowa</p></body></html>", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p>Temperatura<br/>ko\305\204cowa</p></body></html>", nullptr));
        dmpcChcekBox->setText(QCoreApplication::translate("MainWindow", "DMPC", nullptr));
        dmpcChcekBox_2->setText(QCoreApplication::translate("MainWindow", "DMPG", nullptr));
        dmpcChcekBox_3->setText(QCoreApplication::translate("MainWindow", "DPPC", nullptr));
        dmpcChcekBox_4->setText(QCoreApplication::translate("MainWindow", "?", nullptr));
        startButton->setText(QCoreApplication::translate("MainWindow", "Start", nullptr));
        settingsTitle->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-weight:700;\">Konfiguracja pomiar\303\263w</span></p></body></html>", nullptr));
        temStartTitle_3->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p>Pocz\304\205tek<br/>piku</p></body></html>", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p>Koniec<br/>piku</p></body></html>", nullptr));
        startButton_3->setText(QCoreApplication::translate("MainWindow", "Analiza", nullptr));
        temStartTitle_4->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p>Temperatura<br/>przej\305\233cia<br/>fazowego [K]</p></body></html>", nullptr));
        label_5->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p>Szeroko\305\233\304\207<br/>po\305\202\303\263wkowa</p></body></html>", nullptr));
        label_6->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p>Pole<br/>pod<br/>pikiem</p></body></html>", nullptr));
        settingsTitle_2->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-weight:700;\">Analiza pomiar\303\263w</span></p></body></html>", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
