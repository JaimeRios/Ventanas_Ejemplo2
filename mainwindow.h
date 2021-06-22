#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "ui_ventana1.h"
#include "ui_ventana2.h"

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = 0);
    ~MainWindow();
private:
    Ui::Ventana1UI miVentana1;
    Ui::Ventana2UI miVentana2;
    QWidget *ventana1Widget;
    QWidget *ventana2Widget;

    int ventana;

private slots:
    void irAVentana1();
    void irAVentana2();

protected:
    void cambiarWidget(QSize pantalla);
};

#endif // MAINWINDOW_H
