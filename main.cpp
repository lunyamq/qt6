#include "mainwindow.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication app (argc, argv);
    app.setWindowIcon(QIcon(":/apps/img/flower.png"));
    MainWindow win;
    win.show();
    win.setWindowTitle("Main");
    return app.exec();
}
