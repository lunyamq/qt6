#ifndef TODO_H
#define TODO_H

#include <QMainWindow>
#include <QDebug>
#include <QtSql/QSqlDatabase>
#include <QtSql/QSqlError>
#include <QSqlQuery>
#include <QSqlTableModel>

namespace Ui {
class ToDo;
}

class ToDo : public QMainWindow
{
    Q_OBJECT

public:
    explicit ToDo(QWidget *parent = nullptr);
    ~ToDo();


private slots:
    void on_pushButtonAdd_clicked();
    void on_pushButtonRemove_clicked();

    void on_tableView_clicked(const QModelIndex &index);

private:
    Ui::ToDo *ui;
    QSqlDatabase db;
    QSqlQuery *query;
    QSqlTableModel *model;

    int row = -1;
    bool clicked = false;
};

#endif // TODO_H
