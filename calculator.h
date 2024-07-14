#ifndef CALCULATOR_H
#define CALCULATOR_H

#include <QMainWindow>
#include <QPushButton>

namespace Ui {
class Calculator;
}

class Calculator : public QMainWindow
{
    Q_OBJECT

public:
    explicit Calculator(QWidget *parent = nullptr);
    ~Calculator();

private slots:
    void on_pushButton_0_clicked();
    void on_pushButton_1_clicked();
    void on_pushButton_2_clicked();
    void on_pushButton_3_clicked();
    void on_pushButton_4_clicked();
    void on_pushButton_5_clicked();
    void on_pushButton_6_clicked();
    void on_pushButton_7_clicked();
    void on_pushButton_8_clicked();
    void on_pushButton_9_clicked();

    void on_pushButton_com_clicked();

    void on_pushButton_add_clicked();

    void on_pushButton_sub_clicked();

    void on_pushButton_mul_clicked();

    void on_pushButton_div_clicked();

    void on_pushButton_equal_clicked();

    void on_pushButton_percent_clicked();

    void on_pushButton_neg_clicked();

    void on_pushButton_clear_clicked();

private:
    Ui::Calculator *ui;
    double num1 = 0;
    double num2 = 0;
    QChar operation = ' ';
    bool wasWritten = false;

    QString clearZeros(const QString&);
    void writeNum(QString);
    void operate(QPushButton*);
    void clearButtonStyles();
};

#endif // CALCULATOR_H
