#include "calculator.h"
#include "ui_calculator.h"

Calculator::Calculator(QWidget *parent)
    :QMainWindow(parent), ui(new Ui::Calculator) {
    ui->setupUi(this);
    setWindowTitle("Calculator");
    setWindowIcon(QIcon(":/apps/img/calculator.png"));
    setFixedSize(321, 513);
    qDebug();
}

Calculator::~Calculator(){
    delete ui;
}


QString Calculator::clearZeros(const QString &str) {
    if (str.size() >= 2 && str[0] == '0' && str[1] == '.')
        return str;

    if (str == "00")
        return "0";

    QString result = str;
    int index = 0;
    while (index < result.size() && result[index] == '0')
        index++;

    return result.remove(0, index);
}


void Calculator::clearButtonStyles() {
    ui->pushButton_add->setStyleSheet("color: white; background: #f0b568; border-radius: 35%; font-size: 25px;");
    ui->pushButton_sub->setStyleSheet("color: white; background: #f0b568; border-radius: 35%; font-size: 25px;");
    ui->pushButton_mul->setStyleSheet("color: white; background: #f0b568; border-radius: 35%; font-size: 25px;");
    ui->pushButton_div->setStyleSheet("color: white; background: #f0b568; border-radius: 35%; font-size: 25px;");
}


void Calculator::writeNum(QString i) {
    if (ui->result->text().size() < 10 || !wasWritten) {
        if (!wasWritten) {
            ui->result->setText(i);
            wasWritten = true;
        } else
            ui->result->setText(clearZeros(ui->result->text() + i));

        ui->pushButton_clear->setText("C");
        clearButtonStyles();
    }
}


void Calculator::operate(QPushButton* btn) {
    if (operation == ' ')
        num1 = ui->result->text().toDouble();

    if (operation != ' ' && wasWritten) {
        QTextStream(stdout) << num1;
        num2 = ui->result->text().toDouble();

        if (operation == '+')
            num1 += num2;
        else if (operation == '-')
            num1 -= num2;
        else if (operation == '*')
            num1 *= num2;
        else if (operation == '/')
            num1 /= num2;

        ui->result->setText(QString::number(num1));
        QTextStream(stdout) << ' ' << operation << ' ' << num2 << " = " << num1 << '\n';
    }

    clearButtonStyles();
    if (btn != ui->pushButton_clear)
        btn->setStyleSheet("color: white; border-radius: 35%; font-size: 25px; background: #f8d09b;");
    operation = ' ';
    wasWritten = false;
}


void Calculator::on_pushButton_0_clicked() { writeNum("0"); }
void Calculator::on_pushButton_1_clicked() { writeNum("1"); }
void Calculator::on_pushButton_2_clicked() { writeNum("2"); }
void Calculator::on_pushButton_3_clicked() { writeNum("3"); }
void Calculator::on_pushButton_4_clicked() { writeNum("4"); }
void Calculator::on_pushButton_5_clicked() { writeNum("5"); }
void Calculator::on_pushButton_6_clicked() { writeNum("6"); }
void Calculator::on_pushButton_7_clicked() { writeNum("7"); }
void Calculator::on_pushButton_8_clicked() { writeNum("8"); }
void Calculator::on_pushButton_9_clicked() { writeNum("9"); }


void Calculator::on_pushButton_com_clicked() {
    if (!ui->result->text().contains(".") || !wasWritten) {
        if (ui->result->text().isEmpty() || !wasWritten) {
            ui->result->setText("0.");
            wasWritten = true;
            ui->pushButton_clear->setText("C");
        } else
            ui->result->setText(ui->result->text() + ".");
    }
}

void Calculator::on_pushButton_add_clicked() {
    operate(ui->pushButton_add);
    operation = '+';
}


void Calculator::on_pushButton_sub_clicked() {
    operate(ui->pushButton_sub);
    operation = '-';
}


void Calculator::on_pushButton_mul_clicked() {
    operate(ui->pushButton_mul);
    operation = '*';
}


void Calculator::on_pushButton_div_clicked() {
    operate(ui->pushButton_div);
    operation = '/';
}


void Calculator::on_pushButton_equal_clicked() {
    clearButtonStyles();
    operate(ui->pushButton_clear);
}


void Calculator::on_pushButton_percent_clicked() {
    if (operation == ' ')
        ui->result->setText(QString::number(ui->result->text().toDouble() * 0.01));
    else
        ui->result->setText(QString::number(num1 * ui->result->text().toDouble() / 100));
}


void Calculator::on_pushButton_neg_clicked() {
    ui->result->setText(QString::number(ui->result->text().toDouble() * -1));
}


void Calculator::on_pushButton_clear_clicked() {
    if (operation != ' ') {
        if (wasWritten)
            wasWritten = false;
        else {
            num1 = 0;
            operation = ' ';
            ui->pushButton_clear->setText("AC");
        }
    } else
        ui->pushButton_clear->setText("AC");

    clearButtonStyles();
    ui->result->setText("0");
}
