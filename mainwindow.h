#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QMessageBox>
#include <QDebug>
#include <QCloseEvent>

#include "counter.h"
#include "auth.h"
#include "note.h"
#include "calculator.h"
#include "todo.h"
#include "player.h"

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow {
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_openCounterButton_clicked();
    void on_openAuthButton_clicked();
    void on_openNoteButton_clicked();
    void on_openCalcButton_clicked();
    void on_openToDoButton_clicked();
    void on_openPlayerButton_clicked();
    void closeEvent(QCloseEvent*);



private:
    Ui::MainWindow *ui;
    counter *cnt = nullptr;
    Auth *auth = nullptr;
    Note *note = nullptr;
    Calculator *calc = nullptr;
    ToDo *todo = nullptr;
    Player *play = nullptr;

    QList <Note*> openNotes;
    QList <Calculator*> openCalcs;
    QList <Player*> openPlayers;
};
#endif // MAINWINDOW_H
