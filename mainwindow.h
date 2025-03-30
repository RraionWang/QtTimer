#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QTimer>
#include <QDateTime>

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_bt_start_clicked();

    void on_bt_restart_clicked();



    void onTimeout() ;

    void on_bt_clear_table_clicked();

    void on_bt_save_csv_clicked();

    void on_bt_stick_clicked();

    void on_bt_help_clicked();



private:
    Ui::MainWindow *ui;
    QTimer timer ;
    qint64 timeCnt ;

    QString secondsToTime(int totalSeconds) ;

    QDateTime startTime; // 记录开始时间

    bool   isAlwaysOnTop  ;
    bool  isStartRun ;


};
#endif // MAINWINDOW_H
