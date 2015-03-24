#include "viaje.h"
#include <sstream>
#include <iostream>
#include "transporte.h"

using std::stringstream;
using std::endl;

viaje::viaje(int car,double cantidad,double ingreso,string hora,double duracion){
    this->car = car;
    this->cantidad = cantidad;
    this->ingreso = ingreso;
    this->hora = hora;
    this->duracion = duracion;
}
viaje::viaje(const viaje& otro)
    :car(otro.car),cantidad(otro.cantidad),ingreso(otro.ingreso),hora(otro.hora),duracion(otro.duracion){

}

string viaje::getHora()const{
    return hora;
}
double viaje::getCantidad()const{
    return cantidad;
}
double viaje::getIngreso()const{
    return ingreso;
}
double viaje::getDuracion()const{
    return duracion;
}
int viaje::getCar()const{
    return car;
}

void viaje::setHora(string hora){
    this->hora=hora;
}

void viaje::setCantidad(double cantidad){
    this->cantidad = cantidad;
}

void viaje::setIngreso(double ingreso){
    this->ingreso = ingreso;
}

void viaje::setDuracion(double duracion){
    this->duracion = duracion;
}

void viaje::setCar(int car){
    this->car = car;
}

string viaje::toString()const{
    stringstream ss;
    ss <<"Transporte No:" << car << endl<< endl<< "Hora: "<<hora << endl << endl<< "Cantidad: " << cantidad << endl<< endl<<"Ingreso: "<<ingreso<<endl << endl<< "Duracion: "<<duracion;
    return ss.str();
}
