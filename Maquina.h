//
// PROYECTO 1 - PROGRAMACIÓN II - CICLO II, 2020
// Integrantes:
// -Sebastián Montero Vincenzi
// -María Fernanda Robles Calvo
// -Hilary Granados Álvarez
//

#ifndef PROYECTO1_MAQUINA_H
#define PROYECTO1_MAQUINA_H

#include "Librerias.h"
#include "Producto.h"
#include "MonederoElectronico.h"
#include "IMaquinaAdministradora.h"
#include "IMaquinaVendedora.h"

class Maquina {
private:
    int identificador;
    string nombre;
    Producto** coleccionProductos;
    MonederoElectronico* monedero;

    IMaquinaAdministradora* Admin;
    IMaquinaVendedora* Vendor;

public:
//Métodos de cálculo
    Maquina(int,string);
    ~Maquina();
};

#endif //PROYECTO1_MAQUINA_H
