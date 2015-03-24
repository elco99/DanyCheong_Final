#include "viajes.h"
#include "transporte.h"
#include "agua.h"
#include "aire.h"
#include "tierra.h"

viajes::viajes(int cantidad,string hora,int duracion,int ingreso){
    this->cantidad=cantidad;
    this->hora=hora;
    this->duracion = duracion;
    this->ingreso= ingreso;
}

viajes::viajes(const viajes& otro)
    :cantidad(otro.cantidad),hora(otro.hora),duracion(otro.duracion),ingreso(otro.ingreso){

}

int viajes::getCantidad()const{
    return cantidad;
}
int viajes::getDuracion()const{
    return duracion;
}
int viajes::getIngreso()const{
    return ingreso;
}
string viajes::getHora()const{
    return hora;
}
void viajes::setCantidad(int cantidad){
    this->cantidad = cantidad;
}

void viajes::setDuracion(int duracion){
    this->duracion = duracion;
}

void viajes::setIngreso(int ingreso){
    this->ingreso = ingreso;
}

void viajes::setHora(string hora){
    this->hora = hora;
}

/*transporte viajes::getTransporte()const{
    return car;
}
void viajes::setTransporte(transporte car){
    this->car = car;
}
*/
