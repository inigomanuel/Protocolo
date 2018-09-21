#ifndef CESAR_H
#define CESAR_H
#include "ops.h"
class Cesar{
private:
    int clave;
public:
    Cesar();
    string cifrar(string);
    string descifrar(string);
};
#endif // CESAR_H
