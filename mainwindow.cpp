#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    controlWindow = new ControlWindow;
    controlWindow->show();
    videoWindow = new VideoWindow;
    videoWindow->show();
}

MainWindow::~MainWindow()
{
    delete ui;
}
