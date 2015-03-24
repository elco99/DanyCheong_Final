#include "transporte.h"
#include <sstream>
#include <iostream>
#include <string>

using std::stringstream;
using std::string;
using std::endl;

transporte::transporte(string name,string descripcion,double velocidad,double pago,double peso,int capacidad){
    this->estado = "Disponible";
    this->name = name;
    this->descripcion = descripcion;
    this->velocidad = velocidad;
    this->pago = pago;
    this->peso = peso;
    this->capacidad=capacidad;
}
transporte::~transporte(){

}
string transporte::getClass()const{
    return "transporte";
}
transporte::transporte(const transporte& otro)
    :name(otro.name),descripcion(otro.descripcion),velocidad(otro.velocidad),pago(otro.pago),peso(otro.peso),capacidad(otro.capacidad),estado(otro.estado){

}

string transporte::getName()const{
    return name;
}
void transporte::setName(string name){
    this->name = name;
}

string transporte::getDescripcion()const{
    return descripcion;
}
double transporte::getVelocidad()const{
    return velocidad;
}
double transporte::getPago()const{
    return pago;
}
double transporte::getPeso()const{
    return peso;
}
int transporte::getCapacidad(){
    return capacidad;
}
string transporte::getEstado()const{
    return estado;
}

void transporte::setDescripcion(string descripcion){
    this->descripcion = descripcion;
}

void transporte::setVelocidad(double velocidad){
    this->velocidad = velocidad;
}

void transporte::setPago(double pago){
    this->pago = pago;
}

void transporte::setPeso(double peso){
    this->peso = peso;
}

void transporte::setCapacidad(int capacidad){
    this->capacidad = capacidad;
}

void transporte::setEstado(string estado){
    this->estado=estado;
}

void transporte::viaje(){
    if(getEstado() != "Viaje"){
        setEstado("Viaje");
    }
}

void transporte::disponible(){
    if(getEstado() != "Disponible"){
        setEstado("Disponible");
    }
}

void transporte::reparacion(){
    if(getEstado() != "Reparacion"){
        setEstado("Reparacion");
    }
}
string transporte::toString()const{
    stringstream ss;
    ss << " Descripcion: "<< descripcion << endl<<endl<<"Velocidad: "<<velocidad  << endl<<endl<<"Pago: "<<pago << endl<<endl<<"Peso: "<<peso<<endl<<endl<<"Capacidad:"<<capacidad;
    return ss.str();
}
