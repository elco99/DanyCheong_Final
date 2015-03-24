#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "transport.h"
#include "trip.h"
#include "viaje.h"
#include "report.h"
#include <QPalette>
#include <vector>
using std::vector;

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    QPalette pal;
    pal.setBrush(this->backgroundRole(),QBrush(QImage(":/image/2.jpg")));
    this->setPalette(pal);
    lista = new vector<transporte*>();
    lista2 = new vector<viaje>();
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{
    transport a(lista);
    a.exec();
}

void MainWindow::on_pushButton_3_clicked()
{
    this->close();
}

void MainWindow::on_pushButton_2_clicked()
{
    if(lista->size() > 0){
        trip t(lista,lista2);
        t.exec();
    }

}

void MainWindow::on_pushButton_4_clicked()
{
    if(lista->size() > 0){
        report r(lista,lista2);
        r.exec();
    }
}
