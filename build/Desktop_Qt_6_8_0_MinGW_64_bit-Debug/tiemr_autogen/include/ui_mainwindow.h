/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLCDNumber>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout;
    QLCDNumber *timer;
    QHBoxLayout *horizontalLayout;
    QPushButton *bt_start;
    QPushButton *bt_restart;
    QPushButton *bt_clear_table;
    QPushButton *bt_save_csv;
    QTableWidget *tb_record;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(800, 600);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        verticalLayout = new QVBoxLayout(centralwidget);
        verticalLayout->setObjectName("verticalLayout");
        timer = new QLCDNumber(centralwidget);
        timer->setObjectName("timer");
        timer->setMinimumSize(QSize(0, 100));
        timer->setDigitCount(8);

        verticalLayout->addWidget(timer);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        bt_start = new QPushButton(centralwidget);
        bt_start->setObjectName("bt_start");
        bt_start->setMinimumSize(QSize(0, 50));
        bt_start->setMaximumSize(QSize(16777215, 100));

        horizontalLayout->addWidget(bt_start);

        bt_restart = new QPushButton(centralwidget);
        bt_restart->setObjectName("bt_restart");
        bt_restart->setMinimumSize(QSize(0, 50));
        bt_restart->setMaximumSize(QSize(16777215, 100));

        horizontalLayout->addWidget(bt_restart);

        bt_clear_table = new QPushButton(centralwidget);
        bt_clear_table->setObjectName("bt_clear_table");
        bt_clear_table->setMinimumSize(QSize(0, 50));
        bt_clear_table->setMaximumSize(QSize(16777215, 100));

        horizontalLayout->addWidget(bt_clear_table);

        bt_save_csv = new QPushButton(centralwidget);
        bt_save_csv->setObjectName("bt_save_csv");
        bt_save_csv->setMinimumSize(QSize(0, 50));
        bt_save_csv->setMaximumSize(QSize(16777215, 100));

        horizontalLayout->addWidget(bt_save_csv);


        verticalLayout->addLayout(horizontalLayout);

        tb_record = new QTableWidget(centralwidget);
        tb_record->setObjectName("tb_record");
        tb_record->setMinimumSize(QSize(0, 50));
        tb_record->setMaximumSize(QSize(16777215, 190));

        verticalLayout->addWidget(tb_record);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 21));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "\345\256\232\346\227\266\345\231\250", nullptr));
        bt_start->setText(QCoreApplication::translate("MainWindow", "\345\274\200\345\247\213\350\256\260\346\227\266", nullptr));
        bt_restart->setText(QCoreApplication::translate("MainWindow", "\345\275\222\351\233\266", nullptr));
        bt_clear_table->setText(QCoreApplication::translate("MainWindow", "\346\270\205\351\231\244\350\241\250\346\240\274", nullptr));
        bt_save_csv->setText(QCoreApplication::translate("MainWindow", "\344\277\235\345\255\230csv", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
