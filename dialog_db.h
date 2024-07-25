#ifndef DIALOG_DB_H
#define DIALOG_DB_H

#include <QDialog>

namespace Ui {
class DialogDB;
}

class DialogDB : public QDialog
{
    Q_OBJECT

public:
    explicit DialogDB(QWidget *parent = nullptr);
    ~DialogDB();

private:
    Ui::DialogDB *ui;
};

#endif // DIALOG_DB_H
