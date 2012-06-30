#ifndef PROCESSMANAGE_H
#define PROCESSMANAGE_H

#include <QMainWindow>
#include <QtGui/QDialog>
#include <widget.h>
namespace Ui {
    class ProcessManage;
    class UseMethod;
}

class ProcessManage : public QMainWindow
{
    Q_OBJECT

public:
    explicit ProcessManage(QWidget *parent = 0);
    ~ProcessManage();

private slots:
    void showTabInfo(int index);
    void on_tabWidget_currentChanged(int index);
    void printProcess();
    void Info();
    void NewWork();
    void killProcess();
    void refreshPro();
    void shutdown();
    void printNet();
    void restart();
    void detail();
    void shuoming();
    void getcpu();
    void timer_update_TabInfo();

private:
    Ui::ProcessManage *ui;
    QTimer *timer;
    Widget *x;
    Widget *y;
};

#endif
