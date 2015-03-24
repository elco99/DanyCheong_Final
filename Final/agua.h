#ifndef AGUA_H
#define AGUA_H

#include <string>
#include "transporte.h"

using std::string;
class agua:public transporte{
    int habitacion;
    bool restaurante;
public:
    agua(string,string,double,double,double,int,int,bool);
    agua(const agua&);
    int getHabitacion()const;
    void setHabitacion(int);
    bool getRestaurante()const;
    void setRestaurante(bool);
    virtual void viaje();
    virtual void disponible();
    virtual void reparacion();
    virtual string getClass()const;
    virtual string toString()const;

};

#endif // AGUA_H
