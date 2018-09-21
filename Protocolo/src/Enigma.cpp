#include "Enigma.h"
Enigma::Enigma(int a,int b,int c,string clave,string st){
    this->a=a;
    this->b=b;
    this->c=c;
    this->clave=clave;
    rt1=srotor(a);
    rt2=srotor(b);
    rt3=srotor(c);
    stecker=st;
    l1=limite[a-1];
    l2=limite[b-1];
    l3=limite[c-1];
}
string Enigma::srotor(int a){
    switch(a){
    case 1:
        return rotor1;
    case 2:
        return rotor2;
    case 3:
        return rotor3;
    case 4:
        return rotor4;
    case 5:
        return rotor5;
    case 6:
        return rotor6;
    case 7:
        return rotor7;
    }
}

string Enigma::cifrado(string msn){
    string cypher;
    string tmp=clave;
    int p;
    int r1=alfabetos.find(clave[0]);
    int r2=alfabetos.find(clave[1]);
    int r3=alfabetos.find(clave[2]);

    for(int i=0;i<msn.size();i++){

        ///r3=modulo(r3+1,alfabetos.size());
        string cambio;
        int aux;
        r3=modulo(r3+1,alfabetos.size());
        if(r3==(alfabetos.find(l3))){
            r2++;
        }
        if(r2==(alfabetos.find(l2)-1)){
            r2++;
            r1++;
        }
        cambio=rt3[modulo(alfabetos.find(msn[i])+r3,alfabetos.size())];
        cambio=rt2[modulo(alfabetos.find(cambio)-r3+r2,alfabetos.size())];
        cambio=rt1[modulo (alfabetos.find(cambio)+r1-r2,alfabetos.size())];

        cambio=reflec[modulo(alfabetos.find(cambio)-r1,alfabetos.size())];

        aux=modulo(rt1.find(alfabetos[modulo((alfabetos.find(cambio)+r1),(alfabetos.size()))])-r1,alfabetos.size());
        aux=modulo(rt2.find(alfabetos[modulo(aux+r2,alfabetos.size())])-r2,alfabetos.size());
        cambio=alfabetos[modulo(rt3.find(alfabetos[modulo(aux+r3,alfabetos.size())])-r3,alfabetos.size())];
        cypher+=cambio;
/*
        if(alfabetos[r3]==alfabetos[modulo(l3+1),alfabetos.size())])
            r2=modulo(r2+1);

        if(alfabetos[r3]==alfabetos[modulo(l3+1)] && alfabetos[r2]==alfabetos[modulo(l2+1)])
            r1=modulo(r1+1);
        if(msn[i]==stecker[0]){
            msn[i]=stecker[1];
        }
        else if(msn[i]==stecker[1]){
            msn[i]=stecker[0];
        }
        tmp=rtr3[modulo(r3+alfabetos.find(msn[i]))];
        tmp=rtr2[modulo(r2+alfabetos.find(tmp)-r3)];
        tmp=rtr1[modulo(r1+alfabetos.find(tmp)-r2)];

        tmp=reflec[modulo(alfabetos.find(tmp)-r1)];

        p=modulo(rtr1.find(alfabetos[modulo(alfabetos.find(tmp)+r1)])-r1);
        p=modulo(rtr2.find(alfabetos[modulo(p+r2)])-r2);
        tmp=alfabeto[modulo(rtr3.find(alfabetos[modulo(p+r3)])-r3)];
        */
        if(cypher[i]==stecker[0]){
            cypher[i]=stecker[1];
        }
        else if(cypher[i]==stecker[1]){
            cypher[i]=stecker[0];
        }
        cypher+=cambio;
    }
    for(int i=0;i<cypher.size();i++)
        cout<<cypher[i];
        cout<<endl;
    return cypher;
}

/*string Enigma::descifrado(string msn){
    string decypher;
    string tmp=clave;
    int p;
    int r1=alfabetos.find(clave[0]);
    int r2=alfabetos.find(clave[1]);
    int r3=alfabetos.find(clave[2]);

    for(int i=0;i<msn.size();i++){

        r3=modulo(r3+1);

        if(alfabeto[r3]==alfabeto[modulo(l3+1)])
            r2=modulo(r2+1);

        if(alfabeto[r3]==alfabeto[modulo(l3+1)] && alfabeto[r2]==alfabeto[modulo(l2+1)])
            r1=modulo(r1+1);

        tmp=rtr3[modulo(r3+alfabeto.find(msn[i]))];
        tmp=rtr2[modulo(r2+alfabeto.find(tmp)-r3)];
        tmp=rtr1[modulo(r1+alfabeto.find(tmp)-r2)];

        tmp=reflec[modulo(alfabeto.find(tmp)-r1)];

        p=modulo(rtr1.find(alfabeto[modulo(alfabeto.find(tmp)+r1)])-r1);
        p=modulo(rtr2.find(alfabeto[modulo(p+r2)])-r2);
        tmp=alfabeto[modulo(rtr3.find(alfabeto[modulo(p+r3)])-r3)];

        decypher+=tmp;
    }
    for(int i=0;i<decypher.size();i++)
        cout<<decypher[i];
        cout<<endl;
    return decypher;
*/
