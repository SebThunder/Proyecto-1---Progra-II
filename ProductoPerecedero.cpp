
#include "ProductoPerecedero.h"

ProductoPerecedero::ProductoPerecedero(string _nombre, float _precio, int _cantidad):
Producto(_nombre,_precio,_cantidad) {
}
ProductoPerecedero::~ProductoPerecedero() {

}
//Sets y Gets
void ProductoPerecedero::setNombre(string _nombre) {
    Producto::setNombre(_nombre);
}
void ProductoPerecedero::setPrecio(float _precio) {
    Producto::setPrecio(_precio);
}
void ProductoPerecedero::setCantidad(int _cantidad) {
    Producto::setCantidad(_cantidad);
}

string ProductoPerecedero::getNombre() {
    return Producto::getNombre();
}
float ProductoPerecedero::getPrecio() {
    //if(fecha falta menos de una semana){
    return precio-(precio/2);
    //} else{
    //return precio;
    //}
}
int ProductoPerecedero::getCantidad() {
    return Producto::getCantidad();
}
//Métodos de cálculo
string ProductoPerecedero::toString() {
    stringstream s;
    s<<Producto::toString();
    s<<"Precio: "<<getPrecio()<<"CRC."<<endl;
    return s.str();
}