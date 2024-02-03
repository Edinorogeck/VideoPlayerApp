#ifndef CONTROLWINDOW_QWIDGET_H
#define CONTROLWINDOW_QWIDGET_H

#include <QWidget>

namespace Ui {
class ControlWindow_QWidget;
}

class ControlWindow_QWidget : public QWidget
{
    Q_OBJECT

public:
    explicit ControlWindow_QWidget(QWidget *parent = nullptr);
    ~ControlWindow_QWidget();

private:
    Ui::ControlWindow_QWidget *ui;
};

#endif // CONTROLWINDOW_QWIDGET_H
