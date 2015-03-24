#include "aire.h"
#include <sstream>
#include <QMessageBox>
#include <iostream>

using std::endl;
using std::stringstream;

aire::aire(string id,string descripcion,double velocidad,double pago,double peso,int capacidad,int cantidad)
    :transporte(id,descripcion,velocidad,pago,peso,capacidad),cantidad(cantidad){
    transporte::setEstado("Disponible");
}

aire::aire(const aire& otro):transporte(otro),cantidad(otro.cantidad){

}
string aire::getClass()const{
    return "aire";
}
int aire::getCantidad()const{
    return cantidad;
}
void aire::setCantidad(int cantidad){
    this->cantidad = cantidad;
}
void aire::viaje(){
    if(getEstado() != "Viaje"){
        setEstado("Viaje");
        setVelocidad(getVelocidad()+(getVelocidad()*0.3));
    }
}

void aire::disponible(){
    if(getEstado() != "Disponible"){
        setEstado("Disponible");

    }
}

void aire::reparacion(){
    if(getEstado() != "Reparacion"){
        setEstado("Reparacion");
        setPago(getPago()*5);
    }
}


string aire::toString()const{
    stringstream ss;
    ss << "Transporte Aereo" <<endl<<endl<< transporte::toString() << endl<<endl<<"Meseros: "<<cantidad;
    return ss.str();
}
