#include "auth.h"
#include "ui_auth.h"

Auth::Auth(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::Auth)
{
    ui->setupUi(this);
    setWindowTitle("Auth");
    setWindowIcon(QIcon(":/apps/img/auth.png"));
    QPixmap image(":/auth/img/login.png");
    ui->image->setPixmap(image.scaled(128, 128));
    setFixedSize(541, 348);
}

Auth::~Auth() {
    delete ui;
}


void Auth::on_loginButton_clicked() {
    QString login = ui->loginLine->text(); // adm
    QString pass = ui->passLine->text();   // 123
    if (QCryptographicHash::hash(login.toLocal8Bit(), QCryptographicHash::Sha256).toHex()
            == "86f65e28a754e1a71b2df9403615a6c436c32c42a75a10d02813961b86f1e428"
        && QCryptographicHash::hash(pass.toLocal8Bit(), QCryptographicHash::Sha256).toHex()
               == "a665a45920422f9d417e4867efdc4fb8a04a1f3fff1fa07e998e86f7f7a27ae3")
        QMessageBox::information(this, " ", "Welcome");
    else {
        QMessageBox::critical(this, " ", "Not found!");
        QMessageBox::StandardButton ans = QMessageBox::question(this, " ", "Wanna try again?", QMessageBox::Yes | QMessageBox::No);
        if (ans == QMessageBox::No)
            close();
    }
}

