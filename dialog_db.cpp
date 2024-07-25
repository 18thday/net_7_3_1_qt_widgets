#include "dialog_db.h"
#include "ui_dialog_db.h"

DialogDB::DialogDB(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::DialogDB)
{
    ui->setupUi(this);
}

DialogDB::~DialogDB()
{
    delete ui;
}
