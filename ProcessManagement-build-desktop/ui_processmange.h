/********************************************************************************
** Form generated from reading UI file 'processmange.ui'
**
** Created: Tue Apr 24 10:30:23 2012
**      by: Qt User Interface Compiler version 4.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PROCESSMANGE_H
#define UI_PROCESSMANGE_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ProcessMange
{
public:

    void setupUi(QWidget *ProcessMange)
    {
        if (ProcessMange->objectName().isEmpty())
            ProcessMange->setObjectName(QString::fromUtf8("ProcessMange"));
        ProcessMange->resize(700, 413);

        retranslateUi(ProcessMange);

        QMetaObject::connectSlotsByName(ProcessMange);
    } // setupUi

    void retranslateUi(QWidget *ProcessMange)
    {
        ProcessMange->setWindowTitle(QApplication::translate("ProcessMange", "ProcessMange", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class ProcessMange: public Ui_ProcessMange {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PROCESSMANGE_H
