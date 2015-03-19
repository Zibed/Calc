#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

    bool plus;
    bool minus;
    bool multiply;
    bool divide;
    double a, b ,c;

void MainWindow::on_pushButton_1_clicked()
{
    ui->lineEdit->setText(ui->lineEdit->text()+"1");
}

void MainWindow::on_pushButton_2_clicked()
{
    ui->lineEdit->setText(ui->lineEdit->text()+"2");
}

void MainWindow::on_pushButton_3_clicked()
{
    ui->lineEdit->setText(ui->lineEdit->text()+"3");
}

void MainWindow::on_pushButton_4_clicked()
{
    ui->lineEdit->setText(ui->lineEdit->text()+"4");
}

void MainWindow::on_pushButton_5_clicked()
{
    ui->lineEdit->setText(ui->lineEdit->text()+"5");
}

void MainWindow::on_pushButton_6_clicked()
{
    ui->lineEdit->setText(ui->lineEdit->text()+"6");
}

void MainWindow::on_pushButton_7_clicked()
{
    ui->lineEdit->setText(ui->lineEdit->text()+"7");
}

void MainWindow::on_pushButton_8_clicked()
{
    ui->lineEdit->setText(ui->lineEdit->text()+"8");
}

void MainWindow::on_pushButton_9_clicked()
{
    ui->lineEdit->setText(ui->lineEdit->text()+"9");
}

void MainWindow::on_pushButton_0_clicked()
{
    ui->lineEdit->setText(ui->lineEdit->text()+"0");
}

void MainWindow::on_pushButton_Clear_clicked()
{
    ui->lineEdit->setText("");
}

void MainWindow::on_pushButton_DECIMAL_clicked()
{
    ui->lineEdit->setText(ui->lineEdit->text()+".");
}

void MainWindow::on_pushButton_add_clicked()
{
    a = ui->lineEdit-> text().toDouble();
    plus=true;
    ui->lineEdit->setText("");
}

void MainWindow::on_pushButton_subtract_clicked()
{
    a = ui->lineEdit-> text().toDouble();
    minus=true;
    ui->lineEdit->setText("");
}

void MainWindow::on_pushButton_multiply_clicked()
{
    a = ui->lineEdit-> text().toDouble();
    multiply=true;
    ui->lineEdit->setText("");
}

void MainWindow::on_pushButton_divide_clicked()
{
    a = ui->lineEdit-> text().toDouble();
    divide=true;
    ui->lineEdit->setText("");
}

void MainWindow::on_pushButton_equals_clicked()
{
    b = ui->lineEdit->text().toDouble();
    if(plus==true){
        c = a + b;
        ui->lineEdit->setText(QString::number(c));
    }
    if(minus==true){
        c = a - b;
        ui->lineEdit->setText(QString::number(c));
    }
    if(multiply==true){
        c = a * b;
        ui->lineEdit->setText(QString::number(c));
    }
    if(divide==true){
        c = a / b;
        ui->lineEdit->setText(QString::number(c));
    }
    plus = minus = multiply = divide = false;
}
