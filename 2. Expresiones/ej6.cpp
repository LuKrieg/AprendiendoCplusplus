//Pedir la nota final de 4 alumnos y calcule la media de las 4 notas ingresadas
#include <iostream>
using namespace std;

int main (){

    float n1, n2, n3, n4, media;

    cout<<"Digite la primera nota final: "; cin>>n1;
    cout<<"Digite la segunda nota final: "; cin>>n2;
    cout<<"Digite la tercera nota final: "; cin>>n3;
    cout<<"Digite la cuarta nota final: "; cin>>n4;

    media=(n1+n2+n3+n4)/4;

    cout.precision(2);
    cout<<"La media de las notas finales de los alumnos es: "<<media<<endl;

    return 0;
}