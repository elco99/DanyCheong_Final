#ifndef VIAJE_H
#define VIAJE_H

#include "transporte.h"
#include <string>
#include <vector>

using std::vector;
using std::string;

class viaje{
    string hora;
    double cantidad,ingreso,duracion;
    int car;
public:
    viaje(int,double,double,string,double);
    viaje(const viaje&);
    string getHora()const;
    double getCantidad()const;
    double getIngreso()const;
    double getDuracion()const;
    int getCar()const;
    void setHora(string);
    void setCantidad(double);
    void setIngreso(double);
    void setDuracion(double);
    void setCar(int);
    string toString()const;
};

#endif // VIAJE_H
