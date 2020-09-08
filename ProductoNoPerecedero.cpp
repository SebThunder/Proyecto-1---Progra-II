
#include "ProductoNoPerecedero.h"

ProductoNoPerecedero::ProductoNoPerecedero(string _nombre, float _precio, int _cantidad, float _porcentajeDescuento):
Producto(_nombre,_precio,_cantidad), porcentajeDescuento(_porcentajeDescuento){
}
ProductoNoPerecedero::~ProductoNoPerecedero() {

}
//Sets y Gets
void ProductoNoPerecedero::setNombre(string _nombre) {
    Producto::setNombre(_nombre);
}
void ProductoNoPerecedero::setPrecio(float _precio) {
    Producto::setPrecio(_precio);
}
void ProductoNoPerecedero::setCantidad(int _cantidad) {
    Producto::setCantidad(_cantidad);
}
void ProductoNoPerecedero::setPorcentajeDescuento(float _porcentajeDescuento) {
    porcentajeDescuento=_porcentajeDescuento;
}

string ProductoNoPerecedero::getNombre() {
    return Producto::getNombre();
}
float ProductoNoPerecedero::getPrecio() {
    return precio-(getPorcentajeDescuento()*(precio/100));
}
int ProductoNoPerecedero::getCantidad() {
    return Producto::getCantidad();
}
float ProductoNoPerecedero::getPorcentajeDescuento() {
    return porcentajeDescuento;
}
//Métodos de cálculo
string ProductoNoPerecedero::toString() {
    stringstream s;
    s<<Producto::toString();
    s<<"Precio: "<<getPrecio()<<"CRC."<<endl;
    return s.str();
}