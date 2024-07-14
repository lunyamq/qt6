#ifndef COUNTER_H
#define COUNTER_H

#include <QDialog>

namespace Ui {
class counter;
}

class counter : public QDialog
{
    Q_OBJECT

public:
    explicit counter(QWidget *parent = nullptr);
    ~counter();

private slots:
    void on_countButton_clicked();

    void on_clearButton_clicked();

    void on_pushButton_clicked();

private:
    Ui::counter *ui;
    int i = 0;
};

#endif // COUNTER_H
