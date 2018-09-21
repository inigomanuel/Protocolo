#include "Cesar.h"
#include "../ops.h"
Cesar::Cesar(){
    clave=generar();
}
string Cesar::cifrar(string mensaje) {
    string aux;
    for(int i=0; i<mensaje.size(); i++) {
        int d = modulo(alfabetos.find(mensaje[i])+clave,alfabetos.size());
        aux+=alfabetos[d];
    }
    return mensaje;
}

string Cesar::descifrar(string mensaje) {
    string aux;
    for(int i=0;i<mensaje.size();i++) {
        int d = modulo(alfabetos.find(mensaje[i])-clave,alfabetos.size());
        aux +=alfabetos[d];
    }
    return aux;
}

