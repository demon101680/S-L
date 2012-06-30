/********************************************************************************
** Form generated from reading UI file 'processmanage.ui'
**
** Created: Sat Jun 30 19:36:39 2012
**      by: Qt User Interface Compiler version 4.8.1
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
#include <QtGui/QFrame>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QMainWindow>
#include <QtGui/QMenu>
#include <QtGui/QMenuBar>
#include <QtGui/QProgressBar>
#include <QtGui/QPushButton>
#include <QtGui/QScrollArea>
#include <QtGui/QStatusBar>
#include <QtGui/QTabWidget>
#include <QtGui/QTableWidget>
#include <QtGui/QToolBar>
#include <QtGui/QVBoxLayout>
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
    QAction *action_2;
    QAction *action_3;
    QAction *action_4;
    QAction *action_5;
    QAction *action_6;
    QAction *action_R;
    QWidget *centralWidget;
    QTabWidget *tabWidget;
    QWidget *tab;
    QPushButton *pushButton;
    QPushButton *pushButton_4;
    QPushButton *pushButton_5;
    QTableWidget *tableWidget;
    QLabel *label_19;
    QLineEdit *lineEdit;
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
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QWidget *verticalLayoutWidget_2;
    QVBoxLayout *verticalLayout_2;
    QProgressBar *progressBar;
    QProgressBar *progressBar_2;
    QLabel *label_20;
    QLabel *label_21;
    QWidget *tab_4;
    QFrame *frame;
    QLabel *label_13;
    QLabel *label_14;
    QFrame *frame_2;
    QWidget *tab_3;
    QScrollArea *scrollArea_2;
    QWidget *scrollAreaWidgetContents_2;
    QTableWidget *tableWidget_2;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QWidget *tab_5;
    QLabel *label_15;
    QLabel *label_16;
    QLabel *label_17;
    QLabel *label_18;
    QPushButton *pushButton_6;
    QMenuBar *menuBar;
    QMenu *menu;
    QMenu *menu_2;
    QMenu *menu_3;
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
        action_2 = new QAction(ProcessManage);
        action_2->setObjectName(QString::fromUtf8("action_2"));
        action_3 = new QAction(ProcessManage);
        action_3->setObjectName(QString::fromUtf8("action_3"));
        action_4 = new QAction(ProcessManage);
        action_4->setObjectName(QString::fromUtf8("action_4"));
        action_5 = new QAction(ProcessManage);
        action_5->setObjectName(QString::fromUtf8("action_5"));
        action_6 = new QAction(ProcessManage);
        action_6->setObjectName(QString::fromUtf8("action_6"));
        action_R = new QAction(ProcessManage);
        action_R->setObjectName(QString::fromUtf8("action_R"));
        centralWidget = new QWidget(ProcessManage);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        tabWidget = new QTabWidget(centralWidget);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tabWidget->setGeometry(QRect(10, 10, 581, 341));
        tabWidget->setStyleSheet(QString::fromUtf8(""));
        tabWidget->setLocale(QLocale(QLocale::Chinese, QLocale::China));
        tab = new QWidget();
        tab->setObjectName(QString::fromUtf8("tab"));
        pushButton = new QPushButton(tab);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(460, 270, 101, 27));
        pushButton_4 = new QPushButton(tab);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));
        pushButton_4->setGeometry(QRect(20, 270, 93, 27));
        pushButton_5 = new QPushButton(tab);
        pushButton_5->setObjectName(QString::fromUtf8("pushButton_5"));
        pushButton_5->setGeometry(QRect(120, 270, 93, 27));
        tableWidget = new QTableWidget(tab);
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
        tableWidget->setObjectName(QString::fromUtf8("tableWidget"));
        tableWidget->setGeometry(QRect(20, 11, 491, 231));
        label_19 = new QLabel(tab);
        label_19->setObjectName(QString::fromUtf8("label_19"));
        label_19->setGeometry(QRect(260, 280, 81, 17));
        lineEdit = new QLineEdit(tab);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(340, 270, 113, 27));
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
        verticalLayoutWidget = new QWidget(tab_2);
        verticalLayoutWidget->setObjectName(QString::fromUtf8("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(410, 160, 160, 111));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        verticalLayoutWidget_2 = new QWidget(tab_2);
        verticalLayoutWidget_2->setObjectName(QString::fromUtf8("verticalLayoutWidget_2"));
        verticalLayoutWidget_2->setGeometry(QRect(410, 10, 161, 111));
        verticalLayout_2 = new QVBoxLayout(verticalLayoutWidget_2);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        progressBar = new QProgressBar(tab_2);
        progressBar->setObjectName(QString::fromUtf8("progressBar"));
        progressBar->setGeometry(QRect(260, 80, 118, 23));
        progressBar->setValue(24);
        progressBar_2 = new QProgressBar(tab_2);
        progressBar_2->setObjectName(QString::fromUtf8("progressBar_2"));
        progressBar_2->setGeometry(QRect(260, 120, 118, 23));
        progressBar_2->setValue(24);
        label_20 = new QLabel(tab_2);
        label_20->setObjectName(QString::fromUtf8("label_20"));
        label_20->setGeometry(QRect(430, 130, 121, 20));
        label_21 = new QLabel(tab_2);
        label_21->setObjectName(QString::fromUtf8("label_21"));
        label_21->setGeometry(QRect(430, 270, 111, 20));
        tabWidget->addTab(tab_2, QString());
        tab_4 = new QWidget();
        tab_4->setObjectName(QString::fromUtf8("tab_4"));
        frame = new QFrame(tab_4);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setGeometry(QRect(10, 40, 541, 121));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        label_13 = new QLabel(tab_4);
        label_13->setObjectName(QString::fromUtf8("label_13"));
        label_13->setGeometry(QRect(10, 20, 81, 17));
        label_14 = new QLabel(tab_4);
        label_14->setObjectName(QString::fromUtf8("label_14"));
        label_14->setGeometry(QRect(10, 170, 91, 17));
        frame_2 = new QFrame(tab_4);
        frame_2->setObjectName(QString::fromUtf8("frame_2"));
        frame_2->setGeometry(QRect(10, 190, 541, 111));
        frame_2->setFrameShape(QFrame::StyledPanel);
        frame_2->setFrameShadow(QFrame::Raised);
        tabWidget->addTab(tab_4, QString());
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
        QTableWidgetItem *__qtablewidgetitem6 = new QTableWidgetItem();
        tableWidget_2->setHorizontalHeaderItem(0, __qtablewidgetitem6);
        QTableWidgetItem *__qtablewidgetitem7 = new QTableWidgetItem();
        tableWidget_2->setHorizontalHeaderItem(1, __qtablewidgetitem7);
        QTableWidgetItem *__qtablewidgetitem8 = new QTableWidgetItem();
        tableWidget_2->setHorizontalHeaderItem(2, __qtablewidgetitem8);
        if (tableWidget_2->rowCount() < 1)
            tableWidget_2->setRowCount(1);
        QTableWidgetItem *__qtablewidgetitem9 = new QTableWidgetItem();
        tableWidget_2->setVerticalHeaderItem(0, __qtablewidgetitem9);
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
        tab_5 = new QWidget();
        tab_5->setObjectName(QString::fromUtf8("tab_5"));
        label_15 = new QLabel(tab_5);
        label_15->setObjectName(QString::fromUtf8("label_15"));
        label_15->setGeometry(QRect(30, 40, 81, 17));
        label_16 = new QLabel(tab_5);
        label_16->setObjectName(QString::fromUtf8("label_16"));
        label_16->setGeometry(QRect(30, 80, 81, 17));
        label_17 = new QLabel(tab_5);
        label_17->setObjectName(QString::fromUtf8("label_17"));
        label_17->setGeometry(QRect(120, 40, 141, 17));
        label_18 = new QLabel(tab_5);
        label_18->setObjectName(QString::fromUtf8("label_18"));
        label_18->setGeometry(QRect(120, 80, 141, 17));
        pushButton_6 = new QPushButton(tab_5);
        pushButton_6->setObjectName(QString::fromUtf8("pushButton_6"));
        pushButton_6->setGeometry(QRect(30, 250, 93, 27));
        tabWidget->addTab(tab_5, QString());
        ProcessManage->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(ProcessManage);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 602, 25));
        menu = new QMenu(menuBar);
        menu->setObjectName(QString::fromUtf8("menu"));
        menu_2 = new QMenu(menuBar);
        menu_2->setObjectName(QString::fromUtf8("menu_2"));
        menu_3 = new QMenu(menuBar);
        menu_3->setObjectName(QString::fromUtf8("menu_3"));
        ProcessManage->setMenuBar(menuBar);
        mainToolBar = new QToolBar(ProcessManage);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        ProcessManage->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(ProcessManage);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        ProcessManage->setStatusBar(statusBar);

        menuBar->addAction(menu->menuAction());
        menuBar->addAction(menu_2->menuAction());
        menuBar->addAction(menu_3->menuAction());
        menu->addAction(action_2);
        menu->addAction(action_3);
        menu_2->addAction(action_4);
        menu_2->addAction(action_R);
        menu_3->addAction(action_5);
        menu_3->addAction(action_6);

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
        action_2->setText(QApplication::translate("ProcessManage", "\346\226\260\345\273\272\344\273\273\345\212\241(&N)", 0, QApplication::UnicodeUTF8));
        action_3->setText(QApplication::translate("ProcessManage", "\344\273\273\345\212\241\346\217\217\350\277\260(&M)", 0, QApplication::UnicodeUTF8));
        action_4->setText(QApplication::translate("ProcessManage", "\345\205\263\346\234\272(&C)", 0, QApplication::UnicodeUTF8));
        action_5->setText(QApplication::translate("ProcessManage", "\345\274\200\345\217\221\344\277\241\346\201\257", 0, QApplication::UnicodeUTF8));
        action_6->setText(QApplication::translate("ProcessManage", "\344\275\277\347\224\250\346\226\207\346\241\243", 0, QApplication::UnicodeUTF8));
        action_R->setText(QApplication::translate("ProcessManage", "\351\207\215\346\226\260\345\220\257\345\212\250(&R)", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_WHATSTHIS
        tab->setWhatsThis(QString());
#endif // QT_NO_WHATSTHIS
        pushButton->setText(QApplication::translate("ProcessManage", "\347\273\210\346\255\242\350\277\233\347\250\213", 0, QApplication::UnicodeUTF8));
        pushButton_4->setText(QApplication::translate("ProcessManage", "\346\230\276\347\244\272\350\277\233\347\250\213", 0, QApplication::UnicodeUTF8));
        pushButton_5->setText(QApplication::translate("ProcessManage", "\345\210\267\346\226\260\350\277\233\347\250\213", 0, QApplication::UnicodeUTF8));
        label_19->setText(QApplication::translate("ProcessManage", "\347\273\210\346\255\242\350\277\233\347\250\213\345\217\267\357\274\232", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("ProcessManage", "\350\277\233\347\250\213\344\277\241\346\201\257", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("ProcessManage", "\347\211\251\347\220\206\345\206\205\345\255\230\357\274\232", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("ProcessManage", "\345\267\262\344\275\277\347\224\250\345\206\205\345\255\230\357\274\232", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("ProcessManage", "CPU\344\275\277\347\224\250\347\216\207\357\274\232", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("ProcessManage", "\345\274\200\346\234\272\346\227\266\351\227\264\357\274\232", 0, QApplication::UnicodeUTF8));
        label_5->setText(QApplication::translate("ProcessManage", "\350\277\233\347\250\213\346\225\260\357\274\232", 0, QApplication::UnicodeUTF8));
        label_6->setText(QApplication::translate("ProcessManage", "\347\272\277\347\250\213\346\225\260\357\274\232", 0, QApplication::UnicodeUTF8));
        label_7->setText(QString());
        label_8->setText(QString());
        label_9->setText(QString());
        label_10->setText(QString());
        label_11->setText(QString());
        label_12->setText(QString());
        label_20->setText(QApplication::translate("ProcessManage", "\345\206\205\345\255\230\344\275\277\347\224\250\346\233\262\347\272\277", 0, QApplication::UnicodeUTF8));
        label_21->setText(QApplication::translate("ProcessManage", "cpu\344\275\277\347\224\250\346\233\262\347\272\277", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("ProcessManage", "\347\263\273\347\273\237\346\200\247\350\203\275", 0, QApplication::UnicodeUTF8));
        label_13->setText(QApplication::translate("ProcessManage", "\345\244\204\347\220\206\345\231\250\344\277\241\346\201\257\357\274\232", 0, QApplication::UnicodeUTF8));
        label_14->setText(QApplication::translate("ProcessManage", "\346\223\215\344\275\234\347\263\273\347\273\237\344\277\241\346\201\257\357\274\232", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(tab_4), QApplication::translate("ProcessManage", "\347\263\273\347\273\237\344\277\241\346\201\257", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem = tableWidget_2->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("ProcessManage", "\347\224\250\346\210\267", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidget_2->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("ProcessManage", "\347\212\266\346\200\201", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem2 = tableWidget_2->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("ProcessManage", "\346\240\207\345\217\267", 0, QApplication::UnicodeUTF8));
        pushButton_2->setText(QApplication::translate("ProcessManage", "\346\226\255\345\274\200", 0, QApplication::UnicodeUTF8));
        pushButton_3->setText(QApplication::translate("ProcessManage", "\346\263\250\351\224\200", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(tab_3), QApplication::translate("ProcessManage", "\347\224\250\346\210\267", 0, QApplication::UnicodeUTF8));
        label_15->setText(QApplication::translate("ProcessManage", "\346\234\254\346\234\272\344\270\273\346\234\272\345\220\215\357\274\232", 0, QApplication::UnicodeUTF8));
        label_16->setText(QApplication::translate("ProcessManage", "\346\234\254\346\234\272IP\345\234\260\345\235\200\357\274\232", 0, QApplication::UnicodeUTF8));
        label_17->setText(QString());
        label_18->setText(QString());
        pushButton_6->setText(QApplication::translate("ProcessManage", "\350\257\246\347\273\206", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(tab_5), QApplication::translate("ProcessManage", "\347\275\221\347\273\234\344\277\241\346\201\257", 0, QApplication::UnicodeUTF8));
        menu->setTitle(QApplication::translate("ProcessManage", "\344\273\273\345\212\241\347\256\241\347\220\206", 0, QApplication::UnicodeUTF8));
        menu_2->setTitle(QApplication::translate("ProcessManage", "\350\256\241\347\256\227\346\234\272\347\256\241\347\220\206", 0, QApplication::UnicodeUTF8));
        menu_3->setTitle(QApplication::translate("ProcessManage", "\345\270\256\345\212\251(&H)", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class ProcessManage: public Ui_ProcessManage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PROCESSMANAGE_H
