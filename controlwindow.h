#ifndef CONTROLWINDOW_H
#define CONTROLWINDOW_H

#include <QDockWidget>

namespace Ui {
class ControlWindow;
}

class ControlWindow : public QDockWidget
{
    Q_OBJECT

public:
    explicit ControlWindow(QWidget *parent = nullptr);
    ~ControlWindow();

private slots:
    void on_horizontalSlider_valueChanged(int value);

private:
    Ui::ControlWindow *ui;
};

#endif // CONTROLWINDOW_H
