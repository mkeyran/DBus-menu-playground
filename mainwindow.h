#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <dbusmenu-qt/dbusmenuimporter.h>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

    const char* REGISTRAR_PATH = "/MenuBar/2";
    const char* REGISTRAR_SERVICE = ":1.35";
public slots:
    void menuUpdated();
private:
    Ui::MainWindow *ui;
    DBusMenuImporter *importer;
};

#endif // MAINWINDOW_H
