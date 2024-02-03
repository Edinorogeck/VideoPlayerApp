#include "controlwindow_qdockwidget.h"
#include "ui_controlwindow_qdockwidget.h"

ControlWindow_QDockWidget::ControlWindow_QDockWidget(QWidget *parent)
    : QDockWidget(parent)
    , ui(new Ui::ControlWindow_QDockWidget)
{
    ui->setupUi(this);
}

ControlWindow_QDockWidget::~ControlWindow_QDockWidget()
{
    delete ui;
}
