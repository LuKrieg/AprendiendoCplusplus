/*
Leer un valor intero y determinar si es par o no par
*/
#include <iostream>
using namespace std;

int main (){
    int num;

    cout<<"Digite su numero: ";cin>>num;

    if (num%2==0){
        cout<<"El numero es par";
    }
    else{
        cout<<"El numero no es par";
    }
    return 0;
}