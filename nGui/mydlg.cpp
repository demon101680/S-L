#include "mydlg.h"
#include "ui_mydlg.h"

myDlg::myDlg(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::myDlg)
{
    ui->setupUi(this);
}

myDlg::~myDlg()
{
    delete ui;
}

\
