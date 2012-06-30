#include "processmanage.h"
#include "ui_processmanage.h"
#include <QFile>
#include <QMessageBox>
#include <QDir>
#include <QListWidget>
#include <QListWidgetItem>
#include <QStringList>
#include <QTimer>
#include <QProcess>
#include <QtGui/QDialog>
#include <qfiledialog.h>
#include <QtNetwork>
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
#include <QPainter>
#include <QBrush>
#include <QColor>
#include <QRect>
#include <iostream>
#include <widget.h>

using namespace std;

using namespace std;
int a0 = 0, a1 = 0, b0 = 0, b1 = 0;


ProcessManage::ProcessManage(QWidget *parent) :
        QMainWindow(parent),ui(new Ui::ProcessManage)
{
    ui->setupUi(this);
    ui->pushButton->setEnabled(false);
    ui->pushButton_5->setEnabled(false);
    QStringList header1;
    header1<<QString::fromUtf8("PID")<<QString::fromUtf8("进程名")<<QString::fromUtf8("进程状态")<<QString::fromUtf8("优先级")<<QString::fromUtf8("内存占用");
    ui->tableWidget->setSelectionBehavior(QAbstractItemView::SelectRows);
    ui->tableWidget->setEditTriggers(QAbstractItemView::NoEditTriggers);
    ui->tableWidget->setHorizontalHeaderLabels(header1);
    connect(ui->pushButton_4,SIGNAL(clicked()),this,SLOT(printProcess()));
    connect(ui->action_5,SIGNAL(triggered()),this,SLOT(Info()));
    connect(ui->action_2,SIGNAL(triggered()),this,SLOT(NewWork()));
    connect(ui->pushButton,SIGNAL(clicked()),this,SLOT(killProcess()));
    connect(ui->pushButton_5,SIGNAL(clicked()),this,SLOT(refreshPro()));
    connect(ui->action_4,SIGNAL(triggered()),this,SLOT(shutdown()));
    connect(ui->pushButton_6,SIGNAL(clicked()),this,SLOT(printNet()));
    connect(ui->tabWidget,SIGNAL(currentChanged()),this,SLOT(on_tabWidget_currentChanged(int)));
    connect(ui->pushButton_6,SIGNAL(clicked()),this,SLOT(detail()));
    connect(ui->action_R,SIGNAL(triggered()),this,SLOT(restart()));
    connect(ui->action_6,SIGNAL(triggered()),this,SLOT(shuoming()));
    timer =new QTimer(this);
    QWidget::connect(timer,SIGNAL(timeout()),this,SLOT(timer_update_TabInfo()));


    timer->start(1000);
    x = new Widget(this);
    y = new Widget(this);
    ui->verticalLayout_2->addWidget(y);
    ui->verticalLayout->addWidget(x);
x->i=0;
y->i=0;
}

ProcessManage::~ProcessManage()
{
    delete ui;
        delete timer;
}


void ProcessManage::printProcess()
{
    ui->pushButton->setEnabled(true);
    ui->pushButton_5->setEnabled(true);
    showTabInfo(0);
}

void ProcessManage::on_tabWidget_currentChanged(int index)
{
     showTabInfo(index);
     return ;
}

void ProcessManage::showTabInfo(int index)
{
    QString tempStr;
    QFile tempFile;
    int pos;
    if(index==0)
    {
        QDir qd("/proc");
        QStringList qsList=qd.entryList();
        QString qs=qsList.join("\n");
        QString id_of_pro;
        bool ok;
        int find_start=3;
        int a,b;
        int pid;
        QString pName;
        QString pState;
        QString proPri;
        QString proMem;
        int num=0;
        for(int j=0;j<qs.size();j++)
        {
            if(qs.at(j)=='\n')
            {
                num++;
            }
            else
            {
                continue;
            }
        }
        num=num-59;
        ui->tableWidget->setRowCount(num);
        int row;
        row=0;
        while(row<num)
        {
            a=qs.indexOf("\n",find_start);
            b=qs.indexOf("\n",a+1);
            find_start=b;
            id_of_pro=qs.mid(a+1,b-a-1);
            pid=id_of_pro.toInt(&ok,10);
            if(!ok)
            {        void getcpu();
                void timer_update_TabInfo();
                break;
            }
            tempFile.setFileName("/proc/" + id_of_pro + "/stat");
            if ( !tempFile.open(QIODevice::ReadOnly) )
            {
                QMessageBox::warning(this, tr("warning"), tr("The pid stat file can not open!"), QMessageBox::Yes);
                return;
            }
            tempStr = tempFile.readLine();
            if (tempStr.length() == 0)
            {
                break;
            }

            a = tempStr.indexOf("(");
            b = tempStr.indexOf(")");
            pName = tempStr.mid(a+1, b-a-1);
            pName.trimmed();
            pState = tempStr.section(" ", 2, 2);
            proPri = tempStr.section(" ", 17, 17);
            proMem = tempStr.section(" ", 22, 22);
            ui->tableWidget->setItem(row,0,new QTableWidgetItem(id_of_pro));
            ui->tableWidget->setItem(row,1,new QTableWidgetItem(pName));
            ui->tableWidget->setItem(row,2,new QTableWidgetItem(pState));
            ui->tableWidget->setItem(row,3,new QTableWidgetItem(proPri));
            ui->tableWidget->setItem(row,4,new QTableWidgetItem(proMem));
            ui->tableWidget->show();
            row++;
        }
        tempFile.close();

   }
   else if(index==4)
    {
        QString localName=QHostInfo::localHostName();
        ui->label_17->setText(localName);
        QHostInfo inf=QHostInfo::fromName(localName);
        QList<QHostAddress> list=inf.addresses();
        if(!list.isEmpty())
        {
            ui->label_18->setText(list.first().toString());
        }

    }
   else if(index==3)
   {
       QStringList header;
       ui->tableWidget_2->setSelectionBehavior(QAbstractItemView::SelectRows);
       ui->tableWidget_2->setEditTriggers(QAbstractItemView::NoEditTriggers);
       QString localName=QHostInfo::localHostName();
       QString temp="";
       for(int i=0;i<localName.size();i++)
       {
           if(localName.at(i)=='-')
           {
               break;
           }
           temp+=localName.at(i);
       }
       header<<QString::fromUtf8("用户")<<QString::fromUtf8("状态")<<QString::fromUtf8("标号");
       ui->tableWidget_2->setHorizontalHeaderLabels(header);
       ui->tableWidget_2->setItem(0,0,new QTableWidgetItem(temp));
       ui->tableWidget_2->setItem(0,1,new QTableWidgetItem(QString("R")));
       ui->tableWidget_2->setItem(0,2,new QTableWidgetItem(QString("1")));
       ui->tableWidget_2->show();
   }
}

void ProcessManage::Info()
{
    QMessageBox::warning(this,"ProductsInformation", QString::fromUtf8("开发者：李斌 孙万龙\n\n软件名称：Linux任务管理器\n\n开发单位：哈尔滨工业大学计算机学院\n\n版权所有：ls"),QMessageBox::Yes);
}

void ProcessManage::NewWork()
{
    QString s=QFileDialog::getOpenFileName(this,QString::fromUtf8("打开文件"),"/home/libin",QString::fromUtf8("任何文件(*.*)"));
    if(!s.isEmpty())
    {
        QProcess p;
        p.execute(s);
    }

}

void ProcessManage::killProcess()
{
    QString p=ui->lineEdit->text();
    switch(QMessageBox::question(this,QString::fromUtf8("提醒"),QString::fromUtf8("关闭该进程可能会影响系统运行或者数据丢失，确定要关闭？"),QMessageBox::Ok|QMessageBox::Cancel,QMessageBox::Ok))
    {
        case QMessageBox::Ok:
             system("kill " + p.toLatin1());
             break;
        case QMessageBox::Cancel:
             break;
        default:
             break;

    }
    ui->lineEdit->setText("");
    showTabInfo(0);
}

void ProcessManage::refreshPro()
{
    ui->tableWidget->setRowCount(0);
    usleep(1000);
    showTabInfo(0);
}

void ProcessManage::shutdown()
{
    switch(QMessageBox::question(this,QString::fromUtf8("提醒"),QString::fromUtf8("关闭电脑可能会丢失一些数据，确定要关闭？"),QMessageBox::Ok|QMessageBox::Cancel,QMessageBox::Ok))
    {
        case QMessageBox::Ok:
             system("shutdown -h +1");
             break;
        case QMessageBox::Cancel:
             break;
        default:
             break;

    }
}

void ProcessManage::restart()
{ 
    switch(QMessageBox::question(this,QString::fromUtf8("提醒"),QString::fromUtf8("重新启动电脑可能会丢失一些数据，确定要重启？"),QMessageBox::Ok|QMessageBox::Cancel,QMessageBox::Ok))
    {
        case QMessageBox::Ok:
             system("reboot");
             break;
        case QMessageBox::Cancel:
             break;
        default:
             break;

    }
}

void ProcessManage::printNet()
{
    showTabInfo(4);
}

void ProcessManage::detail()
{
    QString detail="";
    QList<QNetworkInterface> list1=QNetworkInterface::allInterfaces();
    for(int i=0;i<list1.count();i++)
    {
        QNetworkInterface interface=list1.at(i);
        detail=detail+QString::fromUtf8("设备:")+interface.name()+"\n";
        QString hardAdd=interface.hardwareAddress();
        detail=detail+QString::fromUtf8("物理地址:")+interface.hardwareAddress()+"\n";
        QList<QNetworkAddressEntry> entrylist=interface.addressEntries();
        for(int j=0;j<entrylist.count();j++)
        {
            QNetworkAddressEntry entry=entrylist.at(j);
            detail=detail+"\t"+QString::fromUtf8("IP地址:")+entry.ip().toString()+"\n";
            detail=detail+"\t"+QString::fromUtf8("子网掩码:")+entry.netmask().toString()+"\n";
            detail=detail+"\t"+QString::fromUtf8("广播地址:")+entry.broadcast().toString()+"\n";
        }

    }
    QMessageBox::information(this,QString::fromUtf8("详细"),detail);

}

void ProcessManage::shuoming()
{
    QString str="";
    str=str+QString::fromUtf8("本程序用起来很简单，有神马不懂的QQ在线咨询！谢谢您的使用！")+"\n";
    str=str+QString::fromUtf8("QQ:173841470")+"\n";
    QMessageBox::information(this,QString::fromUtf8("使用说明"),str);
}
void ProcessManage::timer_update_TabInfo()
{

       // x->shownumold=x->shownum;

getcpu();

//cout<<x->shownumold<<"dsfsdf"<<x->shownum<<endl;

x->repaint();
y->repaint();
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
    ui->progressBar->setValue(nMemUsed/nMemTotal*100);
    this->y->buffer[this->y->i]=nMemUsed/nMemTotal*100;
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
    //shownum=(n-m)*100/n;
    this->x->doAppend((n-m)*100/n);
//this->x->shownum=(n-m)*100/n;
this->x->buffer[this->x->i]=(n-m)*100/n;
//cout<<(n-m)*100/n<<endl;
//cout<<this->x->i<<endl;
    //cout<<this->x->buffer[this->x->i]<<"i"<<this->x->i<<endl;
    //cout<<"shownum"<<this->x->shownum<<endl;

    CpuUsed=QString::number((n-m)*100/n);
    ui->progressBar_2->setValue((n-m)*100/n);
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
      tempFile.close();
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
        tempFile.close();
    }//cout<<totalProNum-1<<endl;
//cout<<thread<<endl;
    qs=QString::number(totalProNum-1);
    ui->label_11->setText(qs);
    ThreadNum=QString::number(thread);
    ui->label_12->setText(ThreadNum);
    if(this->x->i<100){
        this->x->i++;}
    else{
        this->x->i=0;
    }   //cout<<this->x->i<<endl;
    if(this->y->i<100){
        this->y->i++;}
    else{
        this->y->i=0;
    }  // cout<<this->y->i<<endl;


}

