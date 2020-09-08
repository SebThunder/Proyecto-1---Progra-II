//
// PROYECTO 1 - PROGRAMACIÓN II - CICLO II, 2020
// Integrantes:
// -Sebastián Montero Vincenzi
// -María Fernanda Robles Calvo
// -Gabriel Barrantes Bolaños
//

#ifndef PROYECTO1_PRODUCTOPERECEDERO_H
#define PROYECTO1_PRODUCTOPERECEDERO_H

#include "Librerias.h"
#include "Producto.h"

class ProductoPerecedero: public Producto {
private:
//  fecha fechaVencimiento;
public:
    ProductoPerecedero(string,float,int);
    ~ProductoPerecedero();
    //Sets y Gets
    void setNombre(string);
    void setPrecio(float);
    void setCantidad(int);
    string getNombre();
    float getPrecio();
    int getCantidad();
    //Métodos de cálculo
    string toString();
};


#endif //PROYECTO1_PRODUCTOPERECEDERO_H
