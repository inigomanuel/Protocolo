#include "ops.h"
int gcd(int a, int b){
    int numero,resto;
    while(a!=0 && b!=0){
        if(a>b){
        numero=a/b;
        resto=a-(numero*b);
        }
        else{
            numero=b/a;
            resto=b-(numero*a);
            b=a;
            a=resto;
        }
        if(resto==0){
            break;
        }
        a=b;
        b=resto;
    }
    return b;
}
int gcdext(int a, int b){
    int r1=a, r2=b;
    int s1=1, s2=0;
    int t1=0, t2=1;
    int q,r,s,t;
    while(r2>0){
        q=r1/r2;

        r=r1-q*r2;
        r1=r2;
        r2=r;

        s=s1-q*s2;
        s1=s2;
        s2=s;
    }
    return s1;
}
int modulo(int a, int b){
    int q=a/b;
    int r=a-q*b;
    if(r<0){
        r+=b;
    }
    return r;
}
int inversa(int a, int b){
    int aux=gcdext(a,b);
    while(aux<0){
        aux+=b;
    }
    return a;
}
int generar(){
    int aux=0;
    ZZ a = RandomLen_ZZ(7);
    conv(aux,a);
    return aux;
}
