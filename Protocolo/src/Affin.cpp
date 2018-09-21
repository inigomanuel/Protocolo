#include "Affin.h"

Affin::Affin(){
    claveA=generar();
    while(gcd(claveA,alfabetos.size()) ^ 1){
        claveA=generar();
    }
    claveB=generar();
}

Affin::Affin(int a,int b){
    claveA=a;
    claveB=b;
    int privada=inversa(claveA,alfabetos.size());
}

string Affin::cifrado(string mensaje){
    string aux;
    for(int i=0;i<=mensaje.size();i++){
            int num=alfabetos.find(mensaje[i]);
            int temp1=modulo(modulo(claveA*num,alfabetos.size())+claveB,alfabetos.size());
            aux+=alfabetos[temp1];
    }
    return aux;
}

string Affin::descifrado(string mensaje_C){
    string mensaje_D;
    for(int i=0;i<mensaje_C.size();i++){
        int num=alfabetos.find(mensaje_C[i]);
            int temp1=modulo(modulo(num-claveB,alfabetos.size())*privada,alfabetos.size());
        mensaje_D+=alfabetos[temp1];
    }
    return mensaje_D;
}
