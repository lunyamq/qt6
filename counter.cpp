#include "counter.h"
#include "ui_counter.h"

counter::counter(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::counter)
{
    ui->setupUi(this);
    setWindowTitle("Counter");
    setWindowIcon(QIcon(":/apps/img/counter.png"));
    ui->num->setText(QString::number(i));
    setFixedSize(547, 419);
}

counter::~counter() {
    delete ui;
}


void counter::on_countButton_clicked() {
    i++;
    ui->num->setText(QString::number(i));
}

void counter::on_clearButton_clicked() {
    i = 0;
    ui->num->setText("0");
}


void counter::on_pushButton_clicked() {
    i+= 77;
    ui->num->setText(QString::number(i));
}

