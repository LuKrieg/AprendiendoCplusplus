#include<iostream>
using namespace std;

/*
Haz una calculadora a la que se le ingrese el precio de un producto y salga el precio con IVA aplicado
*/

int main (){
    float IVA=0.10, precio, precIVA, preciFinal;
    cout<<"Digite el precio del producto: "; cin>>precio;

    precIVA= precio*IVA;
    preciFinal = precIVA+precio;

    cout<<"El precio con IVA del producto es de: "<<preciFinal;
    return 0;
}
   