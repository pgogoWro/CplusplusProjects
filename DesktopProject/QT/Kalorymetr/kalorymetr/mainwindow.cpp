#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    ui->mainPlot->setInteraction(QCP::iRangeDrag, true);
    ui->mainPlot->setInteraction(QCP::iRangeZoom, true);
    ui->mainPlot->addGraph();
}

MainWindow::~MainWindow()
{
    delete ui;
}

