#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include <QVector>
#include <QRect>
class Widget : public QWidget
{
    Q_OBJECT
public:
    explicit Widget(QWidget *parent = 0);
    void paintEvent(QPaintEvent *);
    void doAppend(int s);
    void doClear();
int shownum;
int shownumold;
int buffer[100];
int i;
signals:

public slots:
private:
    QVector <int> myCPUS;
QRect x;
QRect y;

};

#endif // WIDGET_H
