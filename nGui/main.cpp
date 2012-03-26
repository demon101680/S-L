#include <QtGui/QApplication>
#include "widget.h"
#include "mydlg.h"
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Widget w;



myDlg my1;
if (my1.exec()==QDialog::Accepted){
 w.show();
    return a.exec();}else
        return 0;
}
