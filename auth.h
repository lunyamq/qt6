#ifndef AUTH_H
#define AUTH_H

#include <QDialog>
#include <QCryptographicHash>
#include <QMessageBox>
#include <QPixmap>

namespace Ui {
class Auth;
}

class Auth : public QDialog
{
    Q_OBJECT

public:
    explicit Auth(QWidget *parent = nullptr);
    ~Auth();

private slots:
    void on_loginButton_clicked();

private:
    Ui::Auth *ui;
};

#endif // AUTH_H
