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
    ui->textBrowser->append("macarena");
}
void MainWindow::on_iButton_clicked()
{
    Isaks isak;

    for (int i=0; i<isak.Number(); i++)
    {
        ui->textBrowser->append(isak.Text());
    }
}

void MainWindow::on_cButton_clicked()
{
    carlClass cc;
    cc.setText("Eeeeeeeeeeey!");

    ui->textBrowser->append(cc.getText());
}
