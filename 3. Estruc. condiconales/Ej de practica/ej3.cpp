/*
Determinar si el numero ingresado es positivo, negativo o 0
*/

#include <iostream>
using namespace std;

int main(){
    float num;
    cout<<"Digite su numero: "; cin>>num;

    if (num>0){
        cout<<"El numero es positivo";
    }
    else if (num==0){
        cout<<"El numero es 0";
    }
    else if(num<0){
        cout<<"El numero es negativo";
    }

    return 0;
}