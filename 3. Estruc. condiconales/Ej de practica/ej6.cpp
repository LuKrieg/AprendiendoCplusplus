/*
Solicitar 3 numeros iniciales, luego preguntar por un cuarto numero e indicar si coincide con alguno
de los anteriores
*/

#include <iostream>
using namespace std;

int main(){

    int num1, num2, num3, num4;
    cout<<"Digite los 3 numeros:"; cin>>num1>>num2>>num3;
    cout<<"Digite el cuarto numero: "; cin>>num4;

    if((num1==num4) || (num2==num4) || (num3==num4)){
        cout<<"El cuarto numero coincide con almenos 1 de los 3 anteiores";
    }
    else{
        cout<<"El cuarto numero no coincide con ninguno de los anteriores";
    }

    return 0;
}