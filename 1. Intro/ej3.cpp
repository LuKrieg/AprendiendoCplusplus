/*
Pedir y mostrar datos de una persona, pedir edad, sexo y Altura
*/

#include <iostream>
#include <string>
using namespace std;

int main (){
    int edad;
    float altura;
    string nombre, sexo;

    cout<<"¿Cuál es su nombre? "; cin>>nombre;
    cout<<"Digite su sexo: ";cin>>sexo;
    cout<<"Digite su edad: "; cin>>edad;
    cout<<"Digite su altura en metros: "; cin>>altura;

    cout<<"Hola, "<<nombre<<" su sexo es: "<<sexo<<", su altura es: "<<altura<<" y su edad es: "<<edad<<".";

    return 0;
}