#include "controlwindow_qwidget.h"
#include "ui_controlwindow_qwidget.h"

ControlWindow_QWidget::ControlWindow_QWidget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::ControlWindow_QWidget)
{
    ui->setupUi(this);
}

ControlWindow_QWidget::~ControlWindow_QWidget()
{
    delete ui;
}
