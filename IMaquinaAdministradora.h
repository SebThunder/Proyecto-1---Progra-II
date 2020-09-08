//
// PROYECTO 1 - PROGRAMACIÓN II - CICLO II, 2020
// Integrantes:
// -Sebastián Montero Vincenzi
// -María Fernanda Robles Calvo
// -Gabriel Barrantes Bolaños
//

#ifndef PROYECTO1_IMAQUINAADMINISTRADORA_H
#define PROYECTO1_IMAQUINAADMINISTRADORA_H

#include "Librerias.h"
#include "Producto.h"

class IMaquinaAdministradora {
public:
//Métodos de cálculo
//Es una clase abstracta, por ende todos sus métodos lo son.
    virtual int getIdentificador()=0;
    virtual string getNombre()=0;
    virtual void setNombre(string)=0;
    virtual string toString()=0;
    //virtual void insertar(Producto)=0;
    virtual void agregarProvisiones(string idProducto,int cantidad)=0;
    virtual void disminuirProvisiones(string idProducto,int cantidad)=0;
    virtual void borrar(string id)=0;
    //virtual Producto consultar(string id)=0;
    virtual void ingresarDinero()=0;
    virtual void retirarDinero(int cantidad)=0;
};

#endif //PROYECTO1_IMAQUINAADMINISTRADORA_H
