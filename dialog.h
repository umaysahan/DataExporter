#ifndef DIALOG_H
#define DIALOG_H

#include <QDialog>
#include <QDebug>

namespace Ui {
class Dialog;
}

class Dialog : public QDialog
{
    Q_OBJECT

public:
    explicit Dialog(QWidget *parent = nullptr);
    ~Dialog();

private slots:
    void on_CsvButton_clicked();

    void on_XlsButton_clicked();


private:
    Ui::Dialog *ui;
     QList<QStringList> data;
};

#endif // DIALOG_H
