#include "note.h"
#include "ui_note.h"

Note::Note(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Note)
{
    ui->setupUi(this);
    setWindowTitle("Note");
    setWindowIcon(QIcon(":/apps/img/note.png"));
    setCentralWidget(ui->textEdit);
    ui->statusbar->showMessage("Untitled");
    connect(ui->textEdit, &QTextEdit::textChanged, this, &Note::addAsterisk);
}

Note::~Note() {
    delete file;
    delete text;
    delete ui;
}


void Note::on_actionNew_triggered() {
    fileName.clear();
    ui->textEdit->clear();
    ui->statusbar->showMessage("Untitled");
}

void Note::on_actionOpen_triggered() {
    ui->statusbar->showMessage("Opening...");

    fileName = QFileDialog::getOpenFileName(this, "Select Text File", QDir::homePath(), "*.txt");
    if (fileName.isEmpty()) ui->statusbar->clearMessage();
    else ui->statusbar->showMessage(fileName);

    file = new QFile(fileName);
    if (!file->open(QIODevice::ReadOnly | QIODevice::Text) && !fileName.isEmpty()) {
        QMessageBox::warning(this, "Warning", "Cant open file: " + file->errorString());
        return;
    }

    disconnect(ui->textEdit, &QTextEdit::textChanged, this, &Note::addAsterisk);
    text = new QTextStream(file);
    ui->textEdit->setText(text->readAll());
    file->close();
    connect(ui->textEdit, &QTextEdit::textChanged, this, &Note::addAsterisk);
}

void Note::on_actionSave_triggered() {
    ui->statusbar->showMessage("Saving...");

    if (fileName.isEmpty())
        fileName = QFileDialog::getSaveFileName(this, "Save as", QDir::homePath(), "*.txt");

    file = new QFile(fileName);
    if (!file->open(QIODevice::WriteOnly | QIODevice::Text) && !fileName.isEmpty()) {
        QMessageBox::warning(this, "Warning", "Cant save file: " + file->errorString());
        ui->statusbar->clearMessage();
        return;
    }

    text = new QTextStream(file);
    *text << ui->textEdit->toPlainText();
    ui->statusbar->showMessage(fileName);
    file->close();
}

void Note::on_actionExit_triggered() {
    close();
}

void Note::on_actionAuthor_triggered() {
    QMessageBox::about(this, "About me", "lunya mq");
}


void Note::on_actionHelp_triggered() {
    QMessageBox::aboutQt(this, "About Qt");
}

void Note::addAsterisk() {
    if (fileName.isEmpty()) ui->statusbar->showMessage("Untitled*");
    else ui->statusbar->showMessage(fileName + '*');
}
