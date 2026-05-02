#include "mainwindow.h"
#include <QPushButton>
#include <QVBoxLayout>
#include <QWidget>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
{
    auto *central = new QWidget(this);
    auto *layout = new QVBoxLayout(central);

    auto *btn = new QPushButton("Connect Input23DS", this);

    layout->addWidget(btn);

    setCentralWidget(central);
    setWindowTitle("Input23DS");
    resize(300, 200);
}
