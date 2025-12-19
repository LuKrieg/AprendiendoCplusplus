/*
Hacer un programa que pida 3 numeros e identifique cual es el mayor
*/

#include <iostream>
using namespace std;

int main (){

    int num1, num2, num3;
    cout<<"Digite 3 numeros: ";cin>>num1>>num2>>num3;

    if ((num1 == num2) && (num1 == num3)){
        cout<<"Los 3 numeros son iguales";
    }
    else if ((num1 > num2) && (num1 > num3)){
        cout<<"El numero "<<num1<<" es mayor"<<endl;
    }
    else if ((num2 > num1) && (num2 > num3)){
        cout<<"El numero "<<num2<<" es mayor"<<endl;
    }
    else if ((num3 > num1) && (num3 > num2)){
        cout<<"El numero "<<num3<<" es mayor"<<endl;
    }

    return 0;
}
