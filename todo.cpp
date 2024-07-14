#include "todo.h"
#include "ui_todo.h"

ToDo::ToDo(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::ToDo)
{
    ui->setupUi(this);
    setWindowTitle("To Do");
    setWindowIcon(QIcon(":/apps/img/todo.png"));
    setFixedSize(750, 600);

    db = QSqlDatabase::addDatabase("QPSQL");
    db.setHostName("localhost");
    db.setDatabaseName("todo");
    db.setUserName("qt");
    db.setPassword("123123");
    if (!db.open()) qDebug() << "db error: " << db.lastError().text();

    // query = new QSqlQuery(db);
    // query->exec("CREATE TABLE IF NOT EXISTS Tasks(Task TEXT PRIMARY KEY, Deadline DATE);");

    model = new QSqlTableModel(this, db);
    model->setTable("tasks");
    model->setSort(1, Qt::AscendingOrder);
    model->select();
    ui->tableView->setModel(model);

    ui->tableView->horizontalHeader()->setSectionResizeMode(0, QHeaderView::Stretch);
    ui->tableView->setColumnWidth(1, ui->tableView->width() * 0.23);
}

ToDo::~ToDo() {
    delete model;
    delete query;
    delete ui;
}


void ToDo::on_pushButtonAdd_clicked() {
    model->submit();
    model->select();
    row = model->rowCount();
    model->insertRow(row);
    ui->tableView->setCurrentIndex(model->index(row, 0)); // fix for TAB work
    ui->tableView->edit(model->index(row, 0));
    clicked = true;
}


void ToDo::on_pushButtonRemove_clicked() {
    model->submit();
    if (clicked) model->removeRow(row);
    clicked = false;
    model->select();
}


void ToDo::on_tableView_clicked(const QModelIndex &index) {
    row = index.row();
    clicked = true;
}
