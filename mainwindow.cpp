#include "mainwindow.h"
#include "./ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    dial_db_win = new DialogDB();
    dial_db_win->setModal(true);
}

MainWindow::~MainWindow()
{
    delete ui;
    delete dial_db_win;
}

void MainWindow::on_pb_db_conn_ok_clicked()
{
    dial_db_win->show();
}

