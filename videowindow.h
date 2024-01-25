#ifndef VIDEOWINDOW_H
#define VIDEOWINDOW_H

#include <QFrame>

namespace Ui {
class VideoWindow;
}

class VideoWindow : public QFrame
{
    Q_OBJECT

public:
    explicit VideoWindow(QWidget *parent = nullptr);
    ~VideoWindow();

private:
    Ui::VideoWindow *ui;
};

#endif // VIDEOWINDOW_H
