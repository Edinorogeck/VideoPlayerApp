#include "videowindow.h"
#include "ui_videowindow.h"

VideoWindow::VideoWindow(QWidget *parent)
    : QFrame(parent)
    , ui(new Ui::VideoWindow)
{
    ui->setupUi(this);
}

VideoWindow::~VideoWindow()
{
    delete ui;
}
