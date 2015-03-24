#ifndef TIERRA_H
#define TIERRA_H

#include <string>
#include "transporte.h"

using std::string;
class tierra:public transporte{
    int kilometro;
    bool bano;
public:
    tierra(string,string,double,double,double,int,int,bool);
    tierra(const tierra&);
    int getKilometro()const;
    void setKilometro(int);
    bool getBano()const;
    void setBano(bool);
    virtual void viaje();
    virtual void disponible();
    virtual void reparacion();
    virtual string getClass()const;
    virtual string toString()const;

};
#endif // TIERRA_H
