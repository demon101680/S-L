#include "widget.h"
#include <QPainter>
#include "ui_processmanage.h"
#include <QVector>
#include <iostream>
using namespace std;
int b=0;
Widget::Widget(QWidget *parent) :
    QWidget(parent)
{
    myCPUS.clear();
}

void Widget::paintEvent(QPaintEvent *)
{
    QPainter painter(this);

    painter.setBackground(QBrush(Qt::blue,Qt::Dense1Pattern));
    QFont newFont = font();
    newFont.setPixelSize(12);
    setFont(newFont);
    QFontMetrics fontMetrics(newFont);
    x = fontMetrics.boundingRect(tr("x"));
    y= fontMetrics.boundingRect(tr("y"));
    painter.setPen(Qt::red);
   // cout<<x.height()<<"    "<<x.width()<<shownum<<endl;
painter.setWindow(-2,-2,110,110);
    painter.drawLine(2, 98, 100, 98);
    painter.drawLine(98, 96,100, 98);
    painter.drawLine(98, 100, 100, 98);
    painter.drawText(100 + x.width() / 2,
                     100 + x.height() / 2, tr("t"));

    painter.drawLine(2, 98, 2, -2);
    painter.drawLine(0, 2, 2, -2);
    painter.drawLine(4, 2, 2, -2);
    painter.drawText(y.width() / 2,
                      +y.height() / 2, tr("%"));

    //painter.drawText(x.width() / 2,
    //                 10 + x.height() / 2, tr("cpu rate"));
//if(shownumold<100&&shownum<100)
    //cout<<shownumold<<"aa"<<shownum<<endl;
//if(b<100)
    //cout<<i<<"i"<<endl;
for(int m=1;m<i;m++){
    if(buffer[m]<100)
//cout<<"buffer:"<<buffer[m]<<endl;
    painter.drawLine(m+2,98-buffer[m-1],m+3,98-buffer[m]);
}

}

void Widget::doClear()
{
    myCPUS.clear();
}

void Widget::doAppend(int s)
{
    myCPUS.append(s);
}
