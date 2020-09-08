
#include "Producto.h"

Producto::Producto() {
    nombre="";
    precio=0;
    cantidad=0;
}
Producto::Producto(string _nombre, float _precio, int _cantidad) {
    nombre=_nombre;
    precio=_precio;
    cantidad=_cantidad;
}
Producto::~Producto() {

}
//Sets y Gets
void Producto::setNombre(string _nombre) {
    nombre=_nombre;
}
void Producto::setPrecio(float _precio) {
    precio=_precio;
}
void Producto::setCantidad(int _cantidad) {
    cantidad=_cantidad;
}

string Producto::getNombre() {
    return nombre;
}

//El getPrecio() es virtual puro.

int Producto::getCantidad() {
    return cantidad;
}
//Métodos de cálculo
string Producto::toString() {
    stringstream s;
    s<<endl<<"Nombre: "<<getNombre()<<"."<<endl;
    s<<"Cantidad: "<<getCantidad()<<" unidades."<<endl;
    return s.str();
}