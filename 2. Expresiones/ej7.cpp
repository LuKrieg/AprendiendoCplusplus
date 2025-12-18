/*
La nota final de un estudiante es la media ponderada de tres notas:
1. Practicas, equivalente al 30%
2. Teórica, 60%
3. Participación 10%

Se deben de recibir la entrada estandar de las tres notas y al final la media de las notas.
*/

#include <iostream>
using namespace std;

int main (){
    float in1, in2, in3, n1, n2, n3, nfin=0;

    cout<<"Ingrese la nota de prácticas: "; cin>>in1;
    cout<<"Ingrese la nota de teoría: "; cin>>in2;
    cout<<"Ingrese la nota de participación: "; cin>>in3;

    n1=in1*0.3;
    n2=in2*0.6;
    n3=in3*0.1;
    nfin=n1+n2+n3;

    cout<<"La nota final del estudiante es: "<<nfin<<endl;
    
    return 0;
}