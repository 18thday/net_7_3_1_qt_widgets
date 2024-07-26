#include "mainwindow.h"
#include "./ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    dial_db_conn = new DialogDB();
    dial_db_conn->setModal(true);
}

MainWindow::~MainWindow()
{
    delete ui;
    delete dial_db_conn;
}

void MainWindow::on_pb_db_conn_clicked()
{
    dial_db_conn->show();
}

