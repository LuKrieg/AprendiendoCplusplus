/*
Primer ejemplo de If-else para comprender su funcionamiento
*/
#include <iostream>
#include <string>
using namespace std;


int main (){
    string password="Qwertyuio", clave;
    cout<<"Digite la clave secerta: ";cin>>clave;

    if (clave != password){
        cout<<"Esa no es la clave";
    }
    else{
        cout<<"Es la clave correcta";
    }

    return 0;
}