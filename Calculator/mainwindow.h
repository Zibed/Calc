#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void on_pushButton_1_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_4_clicked();

    void on_pushButton_5_clicked();

    void on_pushButton_7_clicked();

    void on_pushButton_8_clicked();

    void on_pushButton_9_clicked();

    void on_pushButton_6_clicked();

    void on_pushButton_0_clicked();

    void on_pushButton_Clear_clicked();

    void on_pushButton_DECIMAL_clicked();

    void on_pushButton_add_clicked();

    void on_pushButton_subtract_clicked();

    void on_pushButton_multiply_clicked();

    void on_pushButton_divide_clicked();

    void on_pushButton_equals_clicked();

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
