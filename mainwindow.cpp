#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include "QFile"
#include "QMessageBox"
#include "QFileDialog"
#include "QTextStream"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->timer->display("00:00:00");
    connect(&timer, &QTimer::timeout, this, &MainWindow::onTimeout);
    timeCnt= 0 ;
      ui->bt_start->setText("开始计时");

    // 初始化表格
    ui->tb_record->setColumnCount(4); // 设置四列
    ui->tb_record->setHorizontalHeaderLabels({"开始时间", "停止时间", "时间差", "备注"}); // 设置表头
    ui->tb_record->horizontalHeader()->setStretchLastSection(true); // 自动拉伸最后一列


}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_bt_start_clicked()
{
    QString currentText = ui->bt_start->text();

    if (currentText.contains("开始计时")) {
        // 开始计时
        ui->bt_start->setText("停止计时");
        timer.start(1000); // 启动定时器

        // 记录开始时间
        startTime = QDateTime::currentDateTime();
    } else {
        // 停止计时
        ui->bt_start->setText("开始计时");
        timer.stop(); // 停止定时器

        // 获取当前时间作为停止时间
        QDateTime stopTime = QDateTime::currentDateTime();

        // 计算时间差（秒）
        int timeDiffSeconds = startTime.secsTo(stopTime);

        // 格式化时间为字符串
        QString startTimeStr = startTime.toString("yyyy-MM-dd hh:mm:ss");
        QString stopTimeStr = stopTime.toString("yyyy-MM-dd hh:mm:ss");
        QString timeDiffStr = secondsToTime(timeDiffSeconds);

        // 获取表格的行数并插入新行
        int row = ui->tb_record->rowCount();
        ui->tb_record->insertRow(row);

        // 在第一列插入开始时间
        QTableWidgetItem *startTimeItem = new QTableWidgetItem(startTimeStr);
        ui->tb_record->setItem(row, 0, startTimeItem);

        // 在第二列插入停止时间
        QTableWidgetItem *stopTimeItem = new QTableWidgetItem(stopTimeStr);
        ui->tb_record->setItem(row, 1, stopTimeItem);

        // 在第三列插入时间差
        QTableWidgetItem *timeDiffItem = new QTableWidgetItem(timeDiffStr);
        ui->tb_record->setItem(row, 2, timeDiffItem);

        // 在第四列插入默认备注（可以留空）
        QTableWidgetItem *noteItem = new QTableWidgetItem(""); // 默认为空
        ui->tb_record->setItem(row, 3, noteItem);

        // 清空计时时间
        ui->timer->display("00:00:00");
        timeCnt = 0;
    }
}

void MainWindow::on_bt_restart_clicked()
{
    timer.stop();
    timeCnt = 0 ;
    ui->bt_start->setText("开始计时");
    ui->timer->display("00:00:00");

}


QString MainWindow::secondsToTime(int totalSeconds)
{
    int hours = totalSeconds / 3600;          // 计算小时
    int minutes = (totalSeconds % 3600) / 60; // 计算分钟
    int seconds = totalSeconds % 60;         // 计算秒

    // 格式化为 "时:分:秒" 字符串
    return QString("%1:%2:%3")
        .arg(hours, 2, 10, QLatin1Char('0'))   // 小时，两位数字，不足补零
        .arg(minutes, 2, 10, QLatin1Char('0')) // 分钟，两位数字，不足补零
        .arg(seconds, 2, 10, QLatin1Char('0')); // 秒，两位数字，不足补零
}


void MainWindow::onTimeout()
{

    timeCnt++;
    qDebug() <<  secondsToTime(timeCnt) ;
     ui->timer->display(secondsToTime(timeCnt));


}

void MainWindow::on_bt_clear_table_clicked()
{
    ui->tb_record->setRowCount(0);
}



void MainWindow::on_bt_save_csv_clicked()
{
    // 弹出文件保存对话框，让用户选择保存路径
    QString filePath = QFileDialog::getSaveFileName(
        this,                               // 父窗口
        "保存为 CSV 文件",                  // 对话框标题
        "",                                 // 默认文件路径
        "CSV Files (*.csv);;All Files (*)"  // 文件过滤器
        );

    if (filePath.isEmpty()) {
        // 用户取消了保存操作
        return;
    }

    // 打开文件
    QFile file(filePath);
    if (!file.open(QIODevice::WriteOnly | QIODevice::Text)) {
        QMessageBox::critical(this, "错误", "无法打开文件进行写入！");
        return;
    }

    // 创建文本流，默认编码为 UTF-8
    QTextStream out(&file);

    // 写入表头
    int columnCount = ui->tb_record->columnCount();
    for (int col = 0; col < columnCount; ++col) {
        out << ui->tb_record->horizontalHeaderItem(col)->text();
        if (col < columnCount - 1) {
            out << ","; // 列之间用逗号分隔
        }
    }
    out << "\n"; // 换行

    // 写入表格内容
    int rowCount = ui->tb_record->rowCount();
    for (int row = 0; row < rowCount; ++row) {
        for (int col = 0; col < columnCount; ++col) {
            QTableWidgetItem *item = ui->tb_record->item(row, col);
            if (item) {
                out << item->text(); // 写入单元格内容
            } else {
                out << ""; // 如果单元格为空，写入空字符串
            }
            if (col < columnCount - 1) {
                out << ","; // 列之间用逗号分隔
            }
        }
        out << "\n"; // 换行
    }

    // 关闭文件
    file.close();

    // 提示保存成功
    QMessageBox::information(this, "保存成功", "数据已成功保存到 CSV 文件！");
}
