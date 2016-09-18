#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    connect(ui->actionQuit,SIGNAL(triggered(bool)),this,SLOT(slotQuit()));
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::slotQuit()
{
    exit(0);
}
