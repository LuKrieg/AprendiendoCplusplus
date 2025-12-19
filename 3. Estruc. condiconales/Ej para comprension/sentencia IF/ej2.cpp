/*
Operador lógico en condicional if-else
*/

#include <iostream>
using namespace std;

int main (){
    int num, dato=5;

    cout<<"Digite un número: ";cin>>num;

    if (num >= dato){
        cout<<"El numero es mayor o igual a 5"<<endl;
    }
    else{
        cout<<"El numero es menor a 5"<<endl;
    }

    return 0;
}