
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
    stringstream s;
    float vuelto=0;
    int a=0;
    int b=0;
    int c=0;
    int d=0;
    s<<endl;
    if(dinero>=2000){
        setDinero(dinero-2000);
        a=a++;
        vuelto=vuelto+2000;
    }else{
        if(dinero>=1000){
            setDinero(dinero-1000);
            b=b++;
            vuelto=vuelto+1000;
        }else{
            if(dinero>=500){
                setDinero(dinero-500);
                c=c++;
                vuelto=vuelto+500;
            }else{
                if(dinero>=100){
                    setDinero(dinero-100);
                    d=d++;
                    vuelto=vuelto+100;
                }
            }
        }
    }
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
    return s.str();
}
string MonederoElectronico::toString() {
    stringstream s;
    s<<endl<<"---Monedero---"<<endl;
    s<<"Dinero disponible: "<<getDinero()<<"CRC."<<endl;
    s<<"---------------------------"<<endl;
    return s.str();
}