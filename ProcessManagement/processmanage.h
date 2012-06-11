#ifndef PROCESSMANAGE_H
#define PROCESSMANAGE_H

#include <QMainWindow>
#include <widget.h>
namespace Ui {
    class ProcessManage;
}

class ProcessManage : public QMainWindow
{
    Q_OBJECT

public:
    explicit ProcessManage(QWidget *parent = 0);
    ~ProcessManage();
public slots:
        void getcpu();
        void timer_update_TabInfo();




private:
    Ui::ProcessManage *ui;
    QTimer *timer;
    Widget *x;
    Widget *y;
};

#endif // PROCESSMANAGE_H
