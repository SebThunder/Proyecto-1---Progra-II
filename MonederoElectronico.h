//
// PROYECTO 1 - PROGRAMACIÓN II - CICLO II, 2020
// Integrantes:
// -Sebastián Montero Vincenzi
// -María Fernanda Robles Calvo
// -Gabriel Barrantes Bolaños
//

#ifndef PROYECTO1_MONEDEROELECTRONICO_H
#define PROYECTO1_MONEDEROELECTRONICO_H

#include "Librerias.h"

class MonederoElectronico {
private:
    float dinero;
public:
    MonederoElectronico();
    MonederoElectronico(float);
    ~MonederoElectronico();
    //Sets y Gets
    void setDinero(float);
    float getDinero();
    //Métodos de cálculo
    string desgloceVuelto(float &);
    string toString();
};

#endif //PROYECTO1_MONEDEROELECTRONICO_H
