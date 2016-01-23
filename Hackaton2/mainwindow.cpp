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

void MainWindow::on_pButton_clicked()
{
    PalenClass palen;
    ui->textBrowser->append(palen.Text());
}
void MainWindow::on_iButton_clicked()
{
    Isaks isak;

    ui->textBrowser->append(isak.Text());
}

void MainWindow::on_cButton_clicked()
{
    ui->textBrowser->append("Eeeeeeeeeey!");
}
