#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "isaks.h"
#include "palenclass.h"
#include "carlclass.h"

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
    void on_pButton_clicked();
    void on_iButton_clicked();

    void on_cButton_clicked();

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
