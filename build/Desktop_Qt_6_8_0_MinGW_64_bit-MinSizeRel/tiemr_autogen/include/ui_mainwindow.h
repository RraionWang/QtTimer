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
#include <QtGui/QIcon>
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
    QPushButton *bt_stick;
    QPushButton *bt_help;
    QTableWidget *tb_record;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(530, 300);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/assets/favicon.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        MainWindow->setWindowIcon(icon);
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
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/assets/run.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        bt_start->setIcon(icon1);
        bt_start->setIconSize(QSize(30, 30));

        horizontalLayout->addWidget(bt_start);

        bt_restart = new QPushButton(centralwidget);
        bt_restart->setObjectName("bt_restart");
        bt_restart->setMinimumSize(QSize(0, 50));
        bt_restart->setMaximumSize(QSize(16777215, 100));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/assets/init.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        bt_restart->setIcon(icon2);
        bt_restart->setIconSize(QSize(30, 30));

        horizontalLayout->addWidget(bt_restart);

        bt_clear_table = new QPushButton(centralwidget);
        bt_clear_table->setObjectName("bt_clear_table");
        bt_clear_table->setMinimumSize(QSize(0, 50));
        bt_clear_table->setMaximumSize(QSize(16777215, 100));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/assets/clear_table.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        bt_clear_table->setIcon(icon3);
        bt_clear_table->setIconSize(QSize(60, 60));

        horizontalLayout->addWidget(bt_clear_table);

        bt_save_csv = new QPushButton(centralwidget);
        bt_save_csv->setObjectName("bt_save_csv");
        bt_save_csv->setMinimumSize(QSize(0, 50));
        bt_save_csv->setMaximumSize(QSize(16777215, 100));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/assets/save_as_csv.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        bt_save_csv->setIcon(icon4);
        bt_save_csv->setIconSize(QSize(30, 30));

        horizontalLayout->addWidget(bt_save_csv);

        bt_stick = new QPushButton(centralwidget);
        bt_stick->setObjectName("bt_stick");
        bt_stick->setMinimumSize(QSize(0, 50));
        bt_stick->setMaximumSize(QSize(16777215, 100));
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/assets/unstcky.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        bt_stick->setIcon(icon5);
        bt_stick->setIconSize(QSize(30, 30));

        horizontalLayout->addWidget(bt_stick);

        bt_help = new QPushButton(centralwidget);
        bt_help->setObjectName("bt_help");
        bt_help->setMinimumSize(QSize(0, 50));
        bt_help->setMaximumSize(QSize(16777215, 100));
        QIcon icon6;
        icon6.addFile(QString::fromUtf8(":/assets/help.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        bt_help->setIcon(icon6);
        bt_help->setIconSize(QSize(30, 30));

        horizontalLayout->addWidget(bt_help);


        verticalLayout->addLayout(horizontalLayout);

        tb_record = new QTableWidget(centralwidget);
        tb_record->setObjectName("tb_record");
        tb_record->setMinimumSize(QSize(0, 50));
        tb_record->setMaximumSize(QSize(16777215, 190));

        verticalLayout->addWidget(tb_record);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 530, 21));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "rTimer\345\256\232\346\227\266\345\231\250", nullptr));
#if QT_CONFIG(tooltip)
        bt_start->setToolTip(QCoreApplication::translate("MainWindow", "\345\274\200\345\247\213\350\256\241\346\227\266", nullptr));
#endif // QT_CONFIG(tooltip)
        bt_start->setText(QString());
#if QT_CONFIG(tooltip)
        bt_restart->setToolTip(QCoreApplication::translate("MainWindow", "\345\275\222\351\233\266", nullptr));
#endif // QT_CONFIG(tooltip)
        bt_restart->setText(QString());
#if QT_CONFIG(tooltip)
        bt_clear_table->setToolTip(QCoreApplication::translate("MainWindow", "\346\270\205\351\231\244\350\241\250\346\240\274", nullptr));
#endif // QT_CONFIG(tooltip)
        bt_clear_table->setText(QString());
#if QT_CONFIG(tooltip)
        bt_save_csv->setToolTip(QCoreApplication::translate("MainWindow", "\345\260\206\350\241\250\346\240\274\344\277\235\345\255\230\344\270\272csv\346\226\207\344\273\266", nullptr));
#endif // QT_CONFIG(tooltip)
        bt_save_csv->setText(QString());
#if QT_CONFIG(tooltip)
        bt_stick->setToolTip(QCoreApplication::translate("MainWindow", "\346\202\254\346\265\256\347\252\227\345\217\243", nullptr));
#endif // QT_CONFIG(tooltip)
        bt_stick->setText(QString());
#if QT_CONFIG(tooltip)
        bt_help->setToolTip(QCoreApplication::translate("MainWindow", "\345\270\256\345\212\251", nullptr));
#endif // QT_CONFIG(tooltip)
        bt_help->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
