#ifndef PROCESSMANAGE_H
#define PROCESSMANAGE_H

#include <QMainWindow>

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
};

#endif // PROCESSMANAGE_H
