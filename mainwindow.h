#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

#include "controlwindow_qdockwidget.h"
#include "controlwindow_qwidget.h"
#include "videowindow.h"

//--------------VideoPlayerApp--------------//
//--------------Git версия------------------//

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private:
    Ui::MainWindow *ui;

    ControlWindow_QDockWidget       *controlWindow_QDockWidget;
    ControlWindow_QWidget           *controlWindow_QWidget;
    VideoWindow                     *videoWindow;
};
#endif // MAINWINDOW_H
