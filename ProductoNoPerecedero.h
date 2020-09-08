//
// PROYECTO 1 - PROGRAMACIÓN II - CICLO II, 2020
// Integrantes:
// -Sebastián Montero Vincenzi
// -María Fernanda Robles Calvo
// -Gabriel Barrantes Bolaños
//

#ifndef PROYECTO1_PRODUCTONOPERECEDERO_H
#define PROYECTO1_PRODUCTONOPERECEDERO_H

#include "Librerias.h"
#include "Producto.h"

class ProductoNoPerecedero: public Producto {
private:
    float porcentajeDescuento;
public:
    ProductoNoPerecedero(string,float,int,float);
    ~ProductoNoPerecedero();
    //Sets y Gets
    void setNombre(string);
    void setPrecio(float);
    void setCantidad(int);
    void setPorcentajeDescuento(float);
    string getNombre();
    float getPrecio();
    int getCantidad();
    float getPorcentajeDescuento();
    //Métodos de cálculo
    string toString();
};


#endif //PROYECTO1_PRODUCTONOPERECEDERO_H
