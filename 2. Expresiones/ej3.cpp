#include <iostream>
using namespace std;

int main(){

    float a, b, c, d, e, f, resultado=0;

    cout<<"Digite el primer numero: ";cin>>a;
    cout<<"Digite el segundo numero: ";cin>>b;
    cout<<"Digite el tercer numero: ";cin>>c;
    cout<<"Digite el cuarto numero: ";cin>>d;
    cout<<"Digite el quinto numero: ";cin>>e;
    cout<<"Digite el sexto numero: ";cin>>f;

    cout.precision(4);
    resultado = (a+(b/c))/(d+(e/f));
    cout<<"El resultado de la operacion es: "<<resultado<<endl;
    
    return 0;
}