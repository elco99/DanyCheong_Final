#include "tierra.h"
#include <sstream>
#include <QMessageBox>
#include <iostream>

using std::endl;
using std::stringstream;

tierra::tierra(string id,string descripcion,double velocidad,double pago,double peso,int capacidad,int kilometro,bool bano)
    :transporte(id,descripcion,velocidad,pago,peso,capacidad),kilometro(kilometro),bano(bano){
    transporte::setEstado("Disponible");
}

tierra::tierra(const tierra& otro):transporte(otro),kilometro(otro.kilometro),bano(otro.bano){

}

int tierra::getKilometro()const{
    return kilometro;
}
void tierra::setKilometro(int kilometro){
    this->kilometro = kilometro;
}

bool tierra::getBano()const{
    return bano;
}
void tierra::setBano(bool bano){
    this->bano = bano;
}

void tierra::viaje(){
    if(getEstado() != "Viaje"){
        setEstado("Viaje");
        setVelocidad(getVelocidad()+(getVelocidad()*0.1));
    }
}
string tierra::getClass()const{
    return "tierra";
}
void tierra::disponible(){
    if(getEstado() != "Disponible"){
        setEstado("Disponible");
    }
}

void tierra::reparacion(){
    if(getEstado() != "Reparacion"){
        setEstado("Reparacion");
        setPago(getPago()*0.5);
    }
}


string tierra::toString()const{
    stringstream ss;
    if(bano == 1){
        ss << "Transporte Terrestre " << endl<<endl<<transporte::toString() <<endl<<endl<< "Kilometro: "<<kilometro <<endl<<endl<< "Baños: "<< "si";
    }else{
        ss << "Transporte Terrestre " << endl<<endl<<transporte::toString() <<endl<<endl<< "Kilometro: "<<kilometro <<endl<<endl<< "Baños: "<< "no";
    }
    return ss.str();
}
