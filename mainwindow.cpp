#include "mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent),
      ventana1Widget(0),
      ventana2Widget(0)
{
    ventana1Widget=new QWidget(this);
    miVentana1.setupUi(ventana1Widget);

    ventana2Widget=new QWidget(this);
    miVentana2.setupUi(ventana2Widget);

    connect(miVentana1.pushButton,SIGNAL(clicked(bool)),this,SLOT(irAVentana2()));
    connect(miVentana2.pushButton,SIGNAL(clicked(bool)),this,SLOT(irAVentana1()));

    ventana = 0;
    this->cambiarWidget(this->size());
}

MainWindow::~MainWindow()
{

}

void MainWindow::irAVentana1()
{
    ventana = 0;
    this->cambiarWidget(this->size());
}

void MainWindow::irAVentana2()
{
    ventana = 1;
    this->cambiarWidget(this->size());
}

void MainWindow::cambiarWidget(QSize pantalla)
{
    switch (ventana) {
    case 0://Para ir a la ventana 1
        ventana1Widget->setFixedSize(pantalla);
        ventana1Widget->setVisible(true);
        ventana2Widget->setVisible(false);

        break;
    case 1://Para ir a la ventana 2
        ventana2Widget->setFixedSize(pantalla);
        ventana1Widget->setVisible(false);
        ventana2Widget->setVisible(true);
        break;
    default:
        break;
    }
}
