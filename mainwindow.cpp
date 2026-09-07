#include "mainwindow.h"

#include <QDebug>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui_mainwindow)
{
    ui->setupUi(this);

    qDebug() << "Fenêtre principale créée";
}

MainWindow::~MainWindow()
{
    qDebug() << "Fenêtre principale détruite";

    delete ui;
}
