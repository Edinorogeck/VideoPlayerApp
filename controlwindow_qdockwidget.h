#ifndef CONTROLWINDOW_QDOCKWIDGET_H
#define CONTROLWINDOW_QDOCKWIDGET_H

#include <QDockWidget>

namespace Ui {
class ControlWindow_QDockWidget;
}

class ControlWindow_QDockWidget : public QDockWidget
{
    Q_OBJECT

public:
    explicit ControlWindow_QDockWidget(QWidget *parent = nullptr);
    ~ControlWindow_QDockWidget();

private:
    Ui::ControlWindow_QDockWidget *ui;
};

#endif // CONTROLWINDOW_QDOCKWIDGET_H
