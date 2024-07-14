#ifndef NOTE_H
#define NOTE_H

#include <QMainWindow>
#include <QMessageBox>
#include <QFileDialog>

namespace Ui {
class Note;
}

class Note : public QMainWindow
{
    Q_OBJECT

public:
    explicit Note(QWidget *parent = nullptr);
    ~Note();

private slots:
    void on_actionExit_triggered();
    void on_actionNew_triggered();
    void on_actionOpen_triggered();
    void on_actionAuthor_triggered();
    void on_actionHelp_triggered();
    void on_actionSave_triggered();

private:
    Ui::Note *ui;
    QFile *file = nullptr;
    QTextStream *text = nullptr;

    QString fileName = "";

    void addAsterisk();
};

#endif // NOTE_H
