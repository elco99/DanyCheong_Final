#ifndef VIAJES_H
#define VIAJES_H

#include <vector>
#include <string>
#include "transporte.h"
#include "agua.h"
#include "aire.h"
#include "tierra.h"
using std::string;
using std::vector;
class viajes
{
    int cantidad,duracion,ingreso;
    string hora;
    //transporte car(string,string,double,double,int,int);
public:
    viajes(int,string,int,int);
    viajes(const viajes&);
    int getCantidad()const;
    int getDuracion()const;
    int getIngreso()const;
    string getHora()const;
    void setCantidad(int);
    void setDuracion(int);
    void setIngreso(int);
    void setHora(string);
    //transporte getTransporte()const;
    //void setTransporte(transporte);
};

#endif // VIAJES_H
