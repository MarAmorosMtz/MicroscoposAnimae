#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include "imagedroparea.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    //ImageDropArea *drop = new ImageDropArea(this);
    //ui->verticalLayout->addWidget(drop);
    setCentralWidget(new ImageDropArea(this));
}

MainWindow::~MainWindow()
{
    delete ui;
}
