//
// PROYECTO 1 - PROGRAMACIÓN II - CICLO II, 2020
// Integrantes:
// -Sebastián Montero Vincenzi
// -María Fernanda Robles Calvo
// -Hilary Granados Álvarez
//

#ifndef PROYECTO1_PRODUCTO_H
#define PROYECTO1_PRODUCTO_H

#include "Librerias.h"

class Producto {
protected:
    string nombre;
    float precio;
    int cantidad;
public:
    Producto();
    Producto(string,float,int);
    ~Producto();
    //Sets y Gets
    void setNombre(string);
    void setPrecio(float);
    void setCantidad(int);
    string getNombre();
    virtual float getPrecio()=0;
    int getCantidad();
    //Métodos de cálculo
    string toString();
};

#endif //PROYECTO1_PRODUCTO_H
