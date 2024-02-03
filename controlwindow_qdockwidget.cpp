#include "controlwindow_qdockwidget.h"
#include "ui_controlwindow_qdockwidget.h"

ControlWindow_QDockWidget::ControlWindow_QDockWidget(QWidget *parent)
    : QDockWidget(parent)
    , ui(new Ui::ControlWindow_QDockWidget)
{
    ui->setupUi(this);

    //this->setParent(nullptr, Qt::Window);
    this->setFeatures(QDockWidget::DockWidgetFloatable | QDockWidget::DockWidgetClosable);
    this->setAllowedAreas(Qt::LeftDockWidgetArea | Qt::RightDockWidgetArea | Qt::TopDockWidgetArea | Qt::BottomDockWidgetArea);

}

ControlWindow_QDockWidget::~ControlWindow_QDockWidget()
{
    delete ui;
}
