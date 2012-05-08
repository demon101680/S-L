/********************************************************************************
** Form generated from reading UI file 'processmanage.ui'
**
** Created: Tue Apr 24 20:35:00 2012
**      by: Qt User Interface Compiler version 4.7.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PROCESSMANAGE_H
#define UI_PROCESSMANAGE_H

#include <QtCore/QLocale>
#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QMainWindow>
#include <QtGui/QMenu>
#include <QtGui/QMenuBar>
#include <QtGui/QPushButton>
#include <QtGui/QScrollArea>
#include <QtGui/QStatusBar>
#include <QtGui/QTabWidget>
#include <QtGui/QTableWidget>
#include <QtGui/QToolBar>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ProcessManage
{
public:
    QAction *action_N;
    QAction *action_C;
    QAction *action_M;
    QAction *action_Q;
    QAction *action_H;
    QAction *action_Q_2;
    QAction *action_S;
    QAction *action_I;
    QWidget *centralWidget;
    QTabWidget *tabWidget;
    QWidget *tab;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QTableWidget *tableWidget;
    QPushButton *pushButton;
    QWidget *tab_2;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_7;
    QLabel *label_8;
    QLabel *label_9;
    QLabel *label_10;
    QLabel *label_11;
    QLabel *label_12;
    QWidget *tab_3;
    QScrollArea *scrollArea_2;
    QWidget *scrollAreaWidgetContents_2;
    QTableWidget *tableWidget_2;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QMenuBar *menuBar;
    QMenu *menu_F;
    QMenu *menu_U;
    QMenu *menu_H;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *ProcessManage)
    {
        if (ProcessManage->objectName().isEmpty())
            ProcessManage->setObjectName(QString::fromUtf8("ProcessManage"));
        ProcessManage->resize(602, 403);
        action_N = new QAction(ProcessManage);
        action_N->setObjectName(QString::fromUtf8("action_N"));
        action_C = new QAction(ProcessManage);
        action_C->setObjectName(QString::fromUtf8("action_C"));
        action_M = new QAction(ProcessManage);
        action_M->setObjectName(QString::fromUtf8("action_M"));
        action_Q = new QAction(ProcessManage);
        action_Q->setObjectName(QString::fromUtf8("action_Q"));
        action_H = new QAction(ProcessManage);
        action_H->setObjectName(QString::fromUtf8("action_H"));
        action_Q_2 = new QAction(ProcessManage);
        action_Q_2->setObjectName(QString::fromUtf8("action_Q_2"));
        action_S = new QAction(ProcessManage);
        action_S->setObjectName(QString::fromUtf8("action_S"));
        action_I = new QAction(ProcessManage);
        action_I->setObjectName(QString::fromUtf8("action_I"));
        centralWidget = new QWidget(ProcessManage);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        tabWidget = new QTabWidget(centralWidget);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tabWidget->setGeometry(QRect(10, 10, 581, 341));
        tabWidget->setStyleSheet(QString::fromUtf8(""));
        tabWidget->setLocale(QLocale(QLocale::Chinese, QLocale::China));
        tab = new QWidget();
        tab->setObjectName(QString::fromUtf8("tab"));
        scrollArea = new QScrollArea(tab);
        scrollArea->setObjectName(QString::fromUtf8("scrollArea"));
        scrollArea->setGeometry(QRect(20, 13, 541, 241));
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QString::fromUtf8("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 539, 239));
        tableWidget = new QTableWidget(scrollAreaWidgetContents);
        if (tableWidget->columnCount() < 6)
            tableWidget->setColumnCount(6);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(4, __qtablewidgetitem4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(5, __qtablewidgetitem5);
        if (tableWidget->rowCount() < 9)
            tableWidget->setRowCount(9);
        QTableWidgetItem *__qtablewidgetitem6 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(0, __qtablewidgetitem6);
        QTableWidgetItem *__qtablewidgetitem7 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(1, __qtablewidgetitem7);
        QTableWidgetItem *__qtablewidgetitem8 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(2, __qtablewidgetitem8);
        QTableWidgetItem *__qtablewidgetitem9 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(3, __qtablewidgetitem9);
        QTableWidgetItem *__qtablewidgetitem10 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(4, __qtablewidgetitem10);
        QTableWidgetItem *__qtablewidgetitem11 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(5, __qtablewidgetitem11);
        QTableWidgetItem *__qtablewidgetitem12 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(6, __qtablewidgetitem12);
        QTableWidgetItem *__qtablewidgetitem13 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(7, __qtablewidgetitem13);
        QTableWidgetItem *__qtablewidgetitem14 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(8, __qtablewidgetitem14);
        tableWidget->setObjectName(QString::fromUtf8("tableWidget"));
        tableWidget->setGeometry(QRect(0, -10, 541, 271));
        scrollArea->setWidget(scrollAreaWidgetContents);
        pushButton = new QPushButton(tab);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(460, 270, 101, 27));
        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QString::fromUtf8("tab_2"));
        label = new QLabel(tab_2);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(40, 40, 62, 17));
        label_2 = new QLabel(tab_2);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(30, 80, 81, 21));
        label_3 = new QLabel(tab_2);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(30, 120, 81, 20));
        label_4 = new QLabel(tab_2);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(40, 160, 62, 17));
        label_5 = new QLabel(tab_2);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(50, 200, 62, 17));
        label_6 = new QLabel(tab_2);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(50, 240, 62, 17));
        label_7 = new QLabel(tab_2);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(130, 40, 161, 20));
        label_8 = new QLabel(tab_2);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setGeometry(QRect(130, 80, 161, 17));
        label_9 = new QLabel(tab_2);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setGeometry(QRect(130, 120, 161, 17));
        label_10 = new QLabel(tab_2);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setGeometry(QRect(130, 160, 161, 17));
        label_11 = new QLabel(tab_2);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        label_11->setGeometry(QRect(130, 200, 161, 17));
        label_12 = new QLabel(tab_2);
        label_12->setObjectName(QString::fromUtf8("label_12"));
        label_12->setGeometry(QRect(130, 240, 161, 17));
        tabWidget->addTab(tab_2, QString());
        tab_3 = new QWidget();
        tab_3->setObjectName(QString::fromUtf8("tab_3"));
        scrollArea_2 = new QScrollArea(tab_3);
        scrollArea_2->setObjectName(QString::fromUtf8("scrollArea_2"));
        scrollArea_2->setGeometry(QRect(20, 30, 541, 211));
        scrollArea_2->setWidgetResizable(true);
        scrollAreaWidgetContents_2 = new QWidget();
        scrollAreaWidgetContents_2->setObjectName(QString::fromUtf8("scrollAreaWidgetContents_2"));
        scrollAreaWidgetContents_2->setGeometry(QRect(0, 0, 539, 209));
        tableWidget_2 = new QTableWidget(scrollAreaWidgetContents_2);
        if (tableWidget_2->columnCount() < 3)
            tableWidget_2->setColumnCount(3);
        QTableWidgetItem *__qtablewidgetitem15 = new QTableWidgetItem();
        tableWidget_2->setHorizontalHeaderItem(0, __qtablewidgetitem15);
        QTableWidgetItem *__qtablewidgetitem16 = new QTableWidgetItem();
        tableWidget_2->setHorizontalHeaderItem(1, __qtablewidgetitem16);
        QTableWidgetItem *__qtablewidgetitem17 = new QTableWidgetItem();
        tableWidget_2->setHorizontalHeaderItem(2, __qtablewidgetitem17);
        tableWidget_2->setObjectName(QString::fromUtf8("tableWidget_2"));
        tableWidget_2->setGeometry(QRect(0, 1, 541, 211));
        scrollArea_2->setWidget(scrollAreaWidgetContents_2);
        pushButton_2 = new QPushButton(tab_3);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(310, 260, 93, 27));
        pushButton_3 = new QPushButton(tab_3);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setGeometry(QRect(470, 260, 93, 27));
        tabWidget->addTab(tab_3, QString());
        ProcessManage->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(ProcessManage);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 602, 25));
        menu_F = new QMenu(menuBar);
        menu_F->setObjectName(QString::fromUtf8("menu_F"));
        menu_U = new QMenu(menuBar);
        menu_U->setObjectName(QString::fromUtf8("menu_U"));
        menu_H = new QMenu(menuBar);
        menu_H->setObjectName(QString::fromUtf8("menu_H"));
        ProcessManage->setMenuBar(menuBar);
        mainToolBar = new QToolBar(ProcessManage);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        ProcessManage->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(ProcessManage);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        ProcessManage->setStatusBar(statusBar);

        menuBar->addAction(menu_F->menuAction());
        menuBar->addAction(menu_U->menuAction());
        menuBar->addAction(menu_H->menuAction());
        menu_F->addSeparator();
        menu_F->addAction(action_N);
        menu_F->addSeparator();
        menu_F->addAction(action_C);
        menu_F->addSeparator();
        menu_F->addAction(action_M);
        menu_F->addAction(action_Q);
        menu_U->addAction(action_H);
        menu_U->addAction(action_Q_2);
        menu_H->addAction(action_S);
        menu_H->addAction(action_I);

        retranslateUi(ProcessManage);

        tabWidget->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(ProcessManage);
    } // setupUi

    void retranslateUi(QMainWindow *ProcessManage)
    {
        ProcessManage->setWindowTitle(QApplication::translate("ProcessManage", "ProcessManage", 0, QApplication::UnicodeUTF8));
        action_N->setText(QApplication::translate("ProcessManage", "\346\226\260\345\273\272\344\273\273\345\212\241\357\274\210&N\357\274\211", 0, QApplication::UnicodeUTF8));
        action_C->setText(QApplication::translate("ProcessManage", "\347\273\223\346\235\237\344\273\273\345\212\241\357\274\210&C\357\274\211", 0, QApplication::UnicodeUTF8));
        action_M->setText(QApplication::translate("ProcessManage", "\344\273\273\345\212\241\346\217\217\350\277\260\357\274\210&M\357\274\211", 0, QApplication::UnicodeUTF8));
        action_Q->setText(QApplication::translate("ProcessManage", "\344\273\273\345\212\241\345\210\207\346\215\242\357\274\210&Q\357\274\211", 0, QApplication::UnicodeUTF8));
        action_H->setText(QApplication::translate("ProcessManage", "\345\210\207\346\215\242\347\224\250\346\210\267\357\274\210&H\357\274\211", 0, QApplication::UnicodeUTF8));
        action_Q_2->setText(QApplication::translate("ProcessManage", "\351\200\200\345\207\272\357\274\210&E\357\274\211", 0, QApplication::UnicodeUTF8));
        action_S->setText(QApplication::translate("ProcessManage", "\344\275\277\347\224\250\350\257\264\346\230\216\357\274\210&S\357\274\211", 0, QApplication::UnicodeUTF8));
        action_I->setText(QApplication::translate("ProcessManage", "\345\274\200\345\217\221\344\277\241\346\201\257\357\274\210&I\357\274\211", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_WHATSTHIS
        tab->setWhatsThis(QString());
#endif // QT_NO_WHATSTHIS
        QTableWidgetItem *___qtablewidgetitem = tableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("ProcessManage", "\350\277\233\347\250\213\345\217\267", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("ProcessManage", "CPU", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem2 = tableWidget->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("ProcessManage", "\345\215\240\347\224\250\345\206\205\345\255\230", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem3 = tableWidget->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QApplication::translate("ProcessManage", "\350\265\267\345\247\213\346\227\266\351\227\264", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem4 = tableWidget->horizontalHeaderItem(4);
        ___qtablewidgetitem4->setText(QApplication::translate("ProcessManage", "\344\273\273\345\212\241\346\217\217\350\277\260", 0, QApplication::UnicodeUTF8));
        pushButton->setText(QApplication::translate("ProcessManage", "\347\273\223\346\235\237\350\277\233\347\250\213", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("ProcessManage", "\350\277\233\347\250\213\344\277\241\346\201\257", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("ProcessManage", "\347\211\251\347\220\206\345\206\205\345\255\230\357\274\232", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("ProcessManage", "\345\267\262\344\275\277\347\224\250\345\206\205\345\255\230\357\274\232", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("ProcessManage", "CPU\344\275\277\347\224\250\347\216\207\357\274\232", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("ProcessManage", "\345\274\200\346\234\272\346\227\266\351\227\264\357\274\232", 0, QApplication::UnicodeUTF8));
        label_5->setText(QApplication::translate("ProcessManage", "\350\277\233\347\250\213\346\225\260\357\274\232", 0, QApplication::UnicodeUTF8));
        label_6->setText(QApplication::translate("ProcessManage", "\347\272\277\347\250\213\346\225\260\357\274\232", 0, QApplication::UnicodeUTF8));
        label_7->setText(QApplication::translate("ProcessManage", "TextLabel", 0, QApplication::UnicodeUTF8));
        label_8->setText(QApplication::translate("ProcessManage", "TextLabel", 0, QApplication::UnicodeUTF8));
        label_9->setText(QApplication::translate("ProcessManage", "TextLabel", 0, QApplication::UnicodeUTF8));
        label_10->setText(QApplication::translate("ProcessManage", "TextLabel", 0, QApplication::UnicodeUTF8));
        label_11->setText(QApplication::translate("ProcessManage", "TextLabel", 0, QApplication::UnicodeUTF8));
        label_12->setText(QApplication::translate("ProcessManage", "TextLabel", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("ProcessManage", "\347\263\273\347\273\237\346\200\247\350\203\275", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem5 = tableWidget_2->horizontalHeaderItem(0);
        ___qtablewidgetitem5->setText(QApplication::translate("ProcessManage", "\347\224\250\346\210\267", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem6 = tableWidget_2->horizontalHeaderItem(1);
        ___qtablewidgetitem6->setText(QApplication::translate("ProcessManage", "\347\212\266\346\200\201", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem7 = tableWidget_2->horizontalHeaderItem(2);
        ___qtablewidgetitem7->setText(QApplication::translate("ProcessManage", "\346\240\207\345\217\267", 0, QApplication::UnicodeUTF8));
        pushButton_2->setText(QApplication::translate("ProcessManage", "\346\226\255\345\274\200", 0, QApplication::UnicodeUTF8));
        pushButton_3->setText(QApplication::translate("ProcessManage", "\346\263\250\351\224\200", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(tab_3), QApplication::translate("ProcessManage", "\347\224\250\346\210\267", 0, QApplication::UnicodeUTF8));
        menu_F->setTitle(QApplication::translate("ProcessManage", "\344\273\273\345\212\241\347\256\241\347\220\206\357\274\210&F\357\274\211", 0, QApplication::UnicodeUTF8));
        menu_U->setTitle(QApplication::translate("ProcessManage", "\347\224\250\346\210\267\347\256\241\347\220\206\357\274\210&U\357\274\211", 0, QApplication::UnicodeUTF8));
        menu_H->setTitle(QApplication::translate("ProcessManage", "\345\270\256\345\212\251\357\274\210&H\357\274\211", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class ProcessManage: public Ui_ProcessManage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PROCESSMANAGE_H
