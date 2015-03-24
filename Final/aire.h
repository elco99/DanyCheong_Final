#ifndef aire_H
#define aire_H

#include <string>
#include "transporte.h"

using std::string;
class aire:public transporte{
    int cantidad;

public:
    aire(string,string,double,double,double,int,int);
    aire(const aire&);
    int getCantidad()const;
    void setCantidad(int);
    virtual void viaje();
    virtual void disponible();
    virtual void reparacion();
    virtual string getClass()const;
    virtual string toString()const;

};

#endif // aire_H
