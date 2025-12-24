/*
Comprobar la edad de un usuario dentro del rango establecido 18 a 25
*/
#include <iostream>
using namespace std;

int main (){

    int edad;
    
    cout<<"Digite su edad: ";cin>>edad;

    if((edad>=18)&&(edad<=25)){
        cout<<"Su edad está dentro del rango de [18-25]";
    }
    else if(edad<=17){
        cout<<"Su edad es menor a la del rango de [18-25]";
    }
    else if(edad>=26){
        cout<<"Su edad es mayor a la del rango de [18-25]";
    }

    return 0;
}