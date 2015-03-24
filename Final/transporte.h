#ifndef TRANSPORTE_H
#define TRANSPORTE_H
#include <string>

using std::string;

class transporte{
    string name,descripcion,estado;
    double velocidad,pago,peso;
    int capacidad;
public:
    transporte();
    transporte(string,string,double,double,double,int);
    transporte(const transporte&);
    virtual ~transporte();
    string getName()const;
    string getDescripcion()const;
    double getVelocidad()const;
    double getPago()const;
    double getPeso()const;
    int getCapacidad();
    string getEstado()const;
    void setName(string);
    void setDescripcion(string);
    void setVelocidad(double);
    void setPago(double);
    void setPeso(double);
    void setCapacidad(int);
    void setEstado(string);
    virtual string getClass()const;
    virtual void viaje();
    virtual void disponible();
    virtual void reparacion();

    virtual string toString()const;

};

#endif // TRANSPORTE_H
