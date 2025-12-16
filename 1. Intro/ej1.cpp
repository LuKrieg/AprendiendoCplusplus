//Lectura o entrada de datos
/* 
Hacer una calculadora básica
*/
#include <iostream>
using namespace std;

int main(){
    int n1, n2, suma=0, rest=0, multi=0, div=0;
    
    cout<<"Digite su primer número: "; cin>>n1;
    cout<<"Digite su segundo número: "; cin>>n2;

    suma = n1+n2;
    rest = n1-n2;
    multi = n1*n2;
    div = n1/n2;

    cout<<"\n La suma es: "<<suma<<endl;
    cout<<"\n La resta es: "<<rest<<endl;
    cout<<"\n La multiplicación es: "<<multi<<endl;
    cout<<"\n La división es: "<<div<<endl;
    
    return 0;
}