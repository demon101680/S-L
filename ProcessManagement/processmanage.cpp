#include "processmanage.h"
#include "ui_processmanage.h"
#include <QFile>
#include <QString>
#include <QMessageBox>
#include <iostream>
#include <sstream>
#include <QTimer>
#include "stdlib.h"
#include "stdio.h"
#include <QList>
#include <QDir>
using namespace std;
int a0 = 0, a1 = 0, b0 = 0, b1 = 0;
ProcessManage::ProcessManage(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::ProcessManage)

{
    timer =new QTimer(this);
    QWidget::connect(timer,SIGNAL(timeout()),this,SLOT(timer_update_TabInfo()));

    ui->setupUi(this);
    timer->start(1000);

}

ProcessManage::~ProcessManage()
{
    delete ui;
    delete timer;
}
void ProcessManage::timer_update_TabInfo()
{

getcpu();
}
void ProcessManage::getcpu(){
   QString tempStr;
   QFile tempFile;
   int pos;
   tempFile.setFileName("/proc/meminfo");
   if ( !tempFile.open(QIODevice::ReadOnly) )
   {
       QMessageBox::warning(this, tr("warning"), tr(" meminfo 文件打不开！"), QMessageBox::Yes);
       return ;
   }
   QString memUsed;
   QString memTotal;
   QString memFree;
   double nMemTotal, nMemUsed,nMemFree;
   while (1)
   {
       tempStr = tempFile.readLine();
       pos = tempStr.indexOf("MemTotal");
       if (pos != -1)
       {
           memTotal = tempStr.mid(pos+10, tempStr.length()-13);
           memTotal = memTotal.trimmed();
           nMemTotal = memTotal.toDouble()/(1024*1024);
       }
       else if (pos = tempStr.indexOf("MemFree"), pos != -1)
       {
           memFree = tempStr.mid(pos+9, tempStr.length()-12);
           memFree = memFree.trimmed();
           nMemFree = memFree.toDouble()/(1024*1024);break;
       }
   }

    nMemUsed = nMemTotal - nMemFree;
    memTotal=QString::number(nMemTotal);
    memTotal+="   G";
    ui->label_7->setText(memTotal);
    memUsed=QString::number(nMemUsed);
    memUsed+="   G";
    ui->label_8->setText(memUsed);
    tempFile.close();
    tempFile.setFileName("/proc/stat");
    if ( !tempFile.open(QIODevice::ReadOnly) )
    {
        QMessageBox::warning(this, tr("warning"), tr("stat文件打不开！"), QMessageBox::Yes);
        return;
    }

    tempStr = tempFile.readLine();
    a0 = a1;
    b0 = b1;
    a1 = b1 = 0;
    //int gg;
    for (int i = 0; i < 7; i++)
    {

        b1 += tempStr.section(" ", i+2, i+2).toInt();
        //cout<<b1<<endl;
        //gg = b1;
        if (i == 3)
        {
            a1 += tempStr.section(" ", i+2, i+2).toInt();
           // cout<<a1<<endl;
        }
    }
    //
    int m, n;
    m = a1 - a0;
    n = b1 - b0;
    if (m < 0)
    {
        m = -m;
    }
    if (n < 0)
    {
        n = -n;
    }
    //cout<<(n-m)*100/n<<endl;
    tempFile.close();
    QString CpuUsed;
    CpuUsed=QString::number((n-m)*100/n);
    //cout<<a<<"               "<<b<<endl;
    CpuUsed+="%";
    ui->label_9->setText(CpuUsed);
//cout<<tempStr.section(" ", 2, 2).toInt();
tempFile.setFileName("/proc/uptime");
if ( !tempFile.open(QIODevice::ReadOnly) )
{
    QMessageBox::warning(this, tr("warning"), tr(" uptime 文件打不开！"), QMessageBox::Yes);
    return ;
}
    QString OpenTime;
    int time;
    OpenTime=tempFile.readLine();
    time=OpenTime.section(" ",0,0).toDouble();
    //cout<<time<<endl;
    OpenTime=QString::number(time/3600);
    OpenTime+="h";
    OpenTime+=QString::number(time/60-(time/3600)*60);
    OpenTime+="min";
    OpenTime+=QString::number(time-(time/60)*60);
    OpenTime+="sec";
    ui->label_10->setText(OpenTime);
    QDir qd("/proc");
    QStringList qsList = qd.entryList();
    QString qs = qsList.join("\n");
    QString id_of_pro;
    QString ThreadNum;
    int find_start = 4;
    int x, y;
    int totalProNum = 0;
    int thread=0;
// for(int h=0;h<qs.size();h++)
//cout<<qs.at(h).toLatin1()<<"           "<<h<<endl;
    while (1)
    {
        x = qs.indexOf("\n", find_start);
        y = qs.indexOf("\n", x+1);
        find_start = y;
        totalProNum++;
        id_of_pro=qs.mid(x+1, y-x-1);

        if(!id_of_pro.toInt())
        {
            break;
        }
        tempFile.setFileName("/proc/" + id_of_pro + "/status");
        if ( !tempFile.open(QIODevice::ReadOnly) )
        {
            QMessageBox::warning(this, tr("warning"), tr("The pid status file can not open!"), QMessageBox::Yes);
            return;
        }
        while(1){
        tempStr=tempFile.readLine();
        if ((x=tempStr.indexOf("Threads"))>-1)
        {//cout<<x<<endl;
            ThreadNum=tempStr.mid(x+9,x+10);
            //ThreadNum.trimmed();
            thread+=ThreadNum.toInt();

            break;
        }


}
    }//cout<<totalProNum-1<<endl;
//cout<<thread<<endl;
    qs=QString::number(totalProNum-1);
    ui->label_11->setText(qs);
    ThreadNum=QString::number(thread);
    ui->label_12->setText(ThreadNum);
}
