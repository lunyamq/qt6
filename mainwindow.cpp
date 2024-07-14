#include "mainwindow.h"
#include "./ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent):
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    setFixedSize(503, 565);
    ui->openCounterButton->setIcon(QIcon(":/apps/img/counter.png"));
    ui->openAuthButton->setIcon(QIcon(":/apps/img/auth.png"));
    ui->openNoteButton->setIcon(QIcon(":/apps/img/note.png"));
    ui->openCalcButton->setIcon(QIcon(":/apps/img/calculator.png"));
    ui->openToDoButton->setIcon(QIcon(":/apps/img/todo.png"));
    ui->openPlayerButton->setIcon(QIcon(":/apps/img/player.png"));
    ui->openCounterButton->setIconSize(QSize(32, 32));
    ui->openAuthButton->setIconSize(QSize(32, 32));
    ui->openNoteButton->setIconSize(QSize(32, 32));
    ui->openCalcButton->setIconSize(QSize(32, 32));
    ui->openToDoButton->setIconSize(QSize(32, 32));
    ui->openPlayerButton->setIconSize(QSize(32, 32));
}

MainWindow::~MainWindow() {
    delete ui;
}


void MainWindow::on_openCounterButton_clicked() {
    if (!cnt) cnt = new counter;
    cnt->show();
}


void MainWindow::on_openAuthButton_clicked() {
    if (!auth) auth = new Auth;
    auth->show();
}


void MainWindow::on_openNoteButton_clicked() {
    note = new Note;
    note->show();
    openNotes.append(note);
}


void MainWindow::on_openCalcButton_clicked() {
    calc = new Calculator;
    calc->show();
    openCalcs.append(calc);
}


void MainWindow::on_openToDoButton_clicked() {
    if (!todo) todo = new ToDo;
    todo->show();
}


void MainWindow::on_openPlayerButton_clicked() {
    play = new Player;
    play->show();
    openPlayers.append(play);
}


void MainWindow::closeEvent(QCloseEvent *event) {
    if (cnt) cnt->close();
    if (auth) auth->close();
    if (calc) calc->close();
    if (todo) todo->close();

    for (auto ptr : openNotes)
        ptr->close();
    for (auto ptr : openCalcs)
        ptr->close();
    for (auto ptr : openPlayers)
        ptr->close();

    QMainWindow::closeEvent(event);
}
