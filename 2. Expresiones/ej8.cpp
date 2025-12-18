/*
Escribe un programa que reciba 2 catetos de un triangulo rectangulo y que devuelva el valor de la hipotenusa
*/

#include <iostream>
#include <cmath>
using namespace std;

int main (){
    float cat1, cat2, hip;

    cout<<"Digite el valor del primer cateto: "; cin>>cat1;
    cout<<"Digite el valor del primer cateto: "; cin>>cat1;
    
    hip=sqrt(pow(cat1,2)+pow(cat2,2));

    cout<<"La hipotenusa del triagulo es: "<<hip<<endl;

    return 0;
}