#include <QtGui/QApplication>
#include "processmanage.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    ProcessManage w;
    w.show();
w.getcpu();
    return a.exec();
}
