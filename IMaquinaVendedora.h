//
// PROYECTO 1 - PROGRAMACIÓN II - CICLO II, 2020
// Integrantes:
// -Sebastián Montero Vincenzi
// -María Fernanda Robles Calvo
// -Hilary Granados Álvarez
//

#ifndef PROYECTO1_IMAQUINAVENDEDORA_H
#define PROYECTO1_IMAQUINAVENDEDORA_H

#include "Librerias.h"

class IMaquinaVendedora {
public:
    virtual string getNombre()=0;
    virtual string realizarCompra(string id,int cantidad,int montoPago)=0;
    virtual string toString()=0;
};


#endif //PROYECTO1_IMAQUINAVENDEDORA_H
