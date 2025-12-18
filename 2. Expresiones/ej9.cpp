/*
Realizar un programa que calcule el valor de una función para los valores ingresados de x & y
*/

#include <iostream>
#include <cmath>
using namespace std;

int main (){

    float x, y, func;

    cout<<"Ingrese el valor de x: ";cin>>x;
    cout<<"Ingrese el valor de y: ";cin>>y;

    func = (sqrt(x))/(pow(y, 2)-1);

    cout<<"El resultado de la función es: "<<func<<endl;
    
    return 0;
}