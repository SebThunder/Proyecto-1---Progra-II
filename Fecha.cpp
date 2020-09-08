
#include "Fecha.h"

Fecha::Fecha() {
    dias=31;
    meses=12;
    matriz=new int **[meses];
    for(int i=0; i<meses; i++){
        matriz[i]=new int *[dias];
    }
    for(int j=0; j<meses; j++){
        for(int k=0; k<dias; k++){
            matriz[j][k]= nullptr;
        }
    }
    for(int l=0; l<meses; l++){
        if(l==1||l==3||l==5||l==7||l==8||l==10||l==12){
            for(int m=0; m<dias; m++){
                matriz[l][m]=new int (m+1);
            }
        }else if(l==4||l==6||l==9||l==11){
            for(int n=0; n<dias-1; n++){
                matriz[l][n]=new int (n+1);
            }
            matriz[l][30]= nullptr;
        }else{
            for(int o=0; o<dias-3; o++){
                matriz[l][o]=new int (o+1);
            }
            matriz[l][28]= nullptr;
            matriz[l][29]= nullptr;
            matriz[l][30]= nullptr;
        }
    }
}
Fecha::~Fecha() {
    for(int i=0; i<meses; i++){
        for(int j=0; i<dias; j++) {
            if (matriz[i][j] != nullptr) {
                delete matriz[i][j];
            }
        }
    }
    for(int l=0; l<meses; l++){
        delete[] matriz[l];
    }
    delete[] matriz;
}
