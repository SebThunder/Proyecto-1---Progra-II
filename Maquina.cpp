
#include "Maquina.h"

Maquina::Maquina(int _identificador, string _nombre) {
    identificador=_identificador;
    nombre=_nombre;
    coleccionProductos=new Producto*[40];
    for(int i=0;i<40;i++){
        coleccionProductos[i]= nullptr;
    }
    monedero=new MonederoElectronico();
}
Maquina::~Maquina() {
    for(int i=0; i<40;i++){
        if(coleccionProductos[i]!= nullptr){
            delete coleccionProductos[i];
        }
    }
    delete[] coleccionProductos;
    delete monedero;
}
