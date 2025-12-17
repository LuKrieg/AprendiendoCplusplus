#include <iostream>
using namespace std;

int main(){

    float a, b, c, d, resultado=0;

    cout<<"Digite el valor del primer número: "; cin>>a;
    cout<<"Digite el valor del segundo número: "; cin>>b;
    cout<<"Digite el valor del tercer número: "; cin>>c;
    cout<<"Digite el valor del cuarto número: "; cin>>d;

    resultado= (a+b)/(c+d);
    
    cout.precision(3);
    cout<<"El resultado es: "<<resultado<<endl;

    return 0;
}