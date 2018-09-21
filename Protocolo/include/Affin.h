#ifndef AFFIN_H
#define AFFIN_H
#include <iostream>
#include <string>
#include <stdlib.h>
#include <time.h>
#include "ops.h"
using namespace std;
class Affin{
private:
    int claveA,claveB,privada;
public:
    Affin();
    Affin(int,int);
    string cifrado(string);
    string descifrado(string);
    ///int modulo(int,int);
    int euclides(int,int);
    int euclides_extendido(int,int);
};

#endif // AFFIN_H
