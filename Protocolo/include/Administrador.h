#ifndef ADMINISTRADOR_H
#define ADMINISTRADOR_H
#include "Affin.h"
#include "Cesar.h"
#include "Enigma.h"
#include <iostream>
#include <string>
#include <time.h>
#include <stdlib.h>
#include "ops.h"
using namespace std;

class Administrador{
private:
public:
    Administrador();
    string Encriptado(string);
};

#endif // ADMINISTRADOR_H
