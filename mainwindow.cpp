#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);


    controlWindow_QDockWidget   = new ControlWindow_QDockWidget;
    controlWindow_QWidget       = new ControlWindow_QWidget;
    videoWindow                 = new VideoWindow;


    controlWindow_QDockWidget->show();
    controlWindow_QWidget->show();
    videoWindow->show();
}

MainWindow::~MainWindow()
{
    delete ui;
}
