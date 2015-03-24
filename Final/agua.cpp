#include "agua.h"
#include <sstream>
#include <QMessageBox>
#include <iostream>

using std::endl;
using std::stringstream;

agua::agua(string id,string descripcion,double velocidad,double pago,double peso,int capacidad,int habitacion,bool restaurante)
    :transporte(id,descripcion,velocidad,pago,peso,capacidad),habitacion(habitacion),restaurante(restaurante){
    transporte::setEstado("Disponible");
}

agua::agua(const agua& otro):transporte(otro),habitacion(otro.habitacion),restaurante(otro.restaurante){

}

int agua::getHabitacion()const{
    return habitacion;
}
void agua::setHabitacion(int habitacion){
    this->habitacion = habitacion;
}

bool agua::getRestaurante()const{
    return restaurante;
}
void agua::setRestaurante(bool restaurante){
    this->restaurante = restaurante;
}

void agua::viaje(){
    if(getEstado() != "Viaje"){
        setEstado("Viaje");
        setVelocidad(getVelocidad()+(getVelocidad()*0.2));
    }
}

void agua::disponible(){
    if(getEstado() != "Disponible"){
        setEstado("Disponible");

    }
}

string agua::getClass()const{
    return "agua";
}

void agua::reparacion(){
    if(getEstado() != "Reparacion"){
        setEstado("Reparacion");
        setPago(getPago()*1.5);
    }
}

string agua::toString()const{
    stringstream ss;
    if(restaurante == 1){
        ss << "Transporte Acuatico " << endl<<endl<<transporte::toString() << endl<<endl<<"Habitacion: "<<habitacion <<endl<<endl<< " Restaurante: "<< "si";
    }else{
        ss << "Transporte Acuatico " << endl<<endl<<transporte::toString() << endl<<endl<<"Habitacion: "<<habitacion <<endl<<endl<< " Restaurante: "<< "no";
    }
    return ss.str();
}
