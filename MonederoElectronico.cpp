
#include "MonederoElectronico.h"

MonederoElectronico::MonederoElectronico() {
    dinero=0;
}
MonederoElectronico::MonederoElectronico(float _dinero) {
    dinero=_dinero;
}
MonederoElectronico::~MonederoElectronico() {

}
//Sets y Gets
void MonederoElectronico::setDinero(float _dinero) {
    dinero=_dinero;
}

float MonederoElectronico::getDinero() {
    return dinero;
}
//Métodos de cálculo
string MonederoElectronico::desgloceVuelto(float &efectivo) {

    //Lo que falta en este método, es el precio del producto que compré. Hay que meter otro parámetro que sea el precio
    //del producto, y restárselo al efectivo con el que pagó el cliente, antes de entrar al primer "if()". Fuera de eso,
    //el método está listo.

    stringstream s;
    float vuelto=0;
    int a=0;
    int b=0;
    int c=0;
    int d=0;
    s<<endl;
    if(efectivo<=dinero){
        do{
            setDinero(dinero-2000);
            a=a++;
            vuelto=vuelto+2000;
            efectivo=efectivo-2000;
        }while(efectivo>=2000);
        do{
            setDinero(dinero-1000);
            b=b++;
            vuelto=vuelto+1000;
            efectivo=efectivo-1000;
        }while(efectivo>=1000);
        do{
            setDinero(dinero-500);
            c=c++;
            vuelto=vuelto+500;
            efectivo=efectivo-500;
        }while(efectivo>=500);
        do{
            setDinero(dinero-100);
            d=d++;
            vuelto=vuelto+100;
            efectivo=efectivo-100;
        }while(efectivo>=100);

        s<<"Vuelto total: "<<vuelto<<"CRC."<<endl;
        s<<"Entregado en: ";
        if(a!=0){
            s<<a<<" billetes de 2000CRC, ";
        }
        if(b!=0){
            s<<b<<" billetes de 1000CRC, ";
        }
        if(c!=0){
            s<<c<<" monedas de 500CRC, ";
        }
        if(d!=0){
            s<<d<<" monedas de 100CRC.";
        }
        s<<endl;
    }
    else{
        s<<"La maquina no tiene suficiente dinero para devolverle su cambio."<<endl;
    }
    return s.str();
}
string MonederoElectronico::toString() {
    stringstream s;
    s<<endl<<"---Monedero---"<<endl;
    s<<"Dinero disponible: "<<getDinero()<<"CRC."<<endl;
    s<<"---------------------------"<<endl;
    return s.str();
}