#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMenu>
MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    importer = new DBusMenuImporter(REGISTRAR_SERVICE, REGISTRAR_PATH, this);
    connect(importer,SIGNAL(menuUpdated()),this,SLOT(menuUpdated()));
    importer->updateMenu();
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::menuUpdated()
{
    QMenu* menu = importer->menu();
    ui->menuBar->insertMenu(new QAction("Psi",this),menu);

}
