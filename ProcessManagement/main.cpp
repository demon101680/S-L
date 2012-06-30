#include <QtGui/QApplication>
#include <QtGui/QDialog>
#include<QtCore/QTextCodec>
#include "processmanage.h"

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);
    QTextCodec::setCodecForTr(QTextCodec::codecForName("gb2312"));
    ProcessManage w;
    w.show();
    return app.exec();
}
