//
// PROYECTO 1 - PROGRAMACIÓN II - CICLO II, 2020
// Integrantes:
// -Sebastián Montero Vincenzi
// -María Fernanda Robles Calvo
// -Hilary Granados Álvarez
//

#ifndef PROYECTO1_PRODUCTOPERECEDERO_H
#define PROYECTO1_PRODUCTOPERECEDERO_H

#include "Librerias.h"
#include "Producto.h"
#include "Fecha.h"

class ProductoPerecedero: public Producto {
private:
    Fecha* fechaVencimiento;
public:
    ProductoPerecedero(string,float,int,Fecha*);
    ~ProductoPerecedero();
    //Sets y Gets
    void setNombre(string);
    void setPrecio(float);
    void setCantidad(int);
    void setFecha(Fecha*);
    string getNombre();
    float getPrecio();
    int getCantidad();
    Fecha* getFecha();
    //Métodos de cálculo
    string toString();
};


#endif //PROYECTO1_PRODUCTOPERECEDERO_H
