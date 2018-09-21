#ifndef ENIGMA_H
#define ENIGMA_H
#include <string>
#include <iostream>
#include "ops.h"
using namespace std;

class Enigma{
public:
    Enigma(int,int,int,string,string);
    string cifrado(string);
    string descifrado(string);
    string srotor(int);
private:
    int a,b,c;
    string rt1,rt2,rt3;
    string rotor1="EKMFLGDQVZNTOWYHXUSPAIBRCJ";
    string rotor2="AJDKSIRUXBLHWTMCQGZNPYFVOE";
    string rotor3="BDFHJLCPRTXVZNYEIWGAKMUSQO";
    string rotor4="ESOVPZJAYQUIRHXLNFTGKDCMWB";
    string rotor5="VZBRGITYUPSDNHLXAWMJQOFECK";
    string rotor6="JPGVOUMFYQBENHZRDKASXLICTW";
    string rotor7="NZJHGRCXMYSWBOUFAIVLPEKQDT";
    string reflec={"YRUHQSLDPXNGOKMIEBFZCWVJAT"};
    string clave;
    string stecker;
    string l1;
    string l2;
    string l3;
    string limite="RFWKAANA";
};

#endif // ENIGMA_H
