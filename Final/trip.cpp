#include "trip.h"
#include "ui_trip.h"
#include "transporte.h"
#include "viaje.h"
#include <QDebug>
#include <QCoreApplication>
#include <QMessageBox>


trip::trip(vector<transporte*>* lista,vector<viaje>* lista2,QWidget *parent) :
    QDialog(parent),
    ui(new Ui::trip)
{
    ui->setupUi(this);
    QPalette pal;
    pal.setBrush(this->backgroundRole(),QBrush(QImage(":/image/7.jpg")));
    this->setPalette(pal);
    this->lista = lista;
    this->lista2 = lista2;
    for(int i=0;i<lista->size();i++){
        ui->v_transporte->addItem(QString(lista->at(i)->getName().c_str()));
    }
}

trip::~trip()
{
    delete ui;
}

void trip::on_v_pasajero_valueChanged(int arg1)
{
    ui->v_ingreso->setValue(arg1*lista->at(ui->v_transporte->currentIndex())->getPago());
}

void trip::on_v_transporte_currentIndexChanged(int index)
{
    ui->v_duracion->setValue(0);
    ui->v_ingreso->setValue(0);
    ui->v_pasajero->setValue(0);
}

void trip::on_pushButton_2_clicked()
{
    this->close();
}

void trip::on_pushButton_clicked()
{

    int car;
    double cantidad, ingreso,duracion;
    string hora;
    car = ui->v_transporte->currentIndex();
    cantidad = ui->v_pasajero->value();
    ingreso = ui->v_ingreso->value();
    duracion = ui->v_duracion->value();
    hora = ui->v_hora->time().toString().toStdString();
    if(lista->at(car)->getEstado() == "Disponible"){
        viaje* via = new viaje(car,cantidad,ingreso,hora,duracion);
        lista->at(car)->viaje();
        lista2->push_back(*via);
        this->close();
    }else{
        QMessageBox msg;
        msg.setText("Este transporte no esta disponible, escoja otro");
        msg.exec();
    }

}
