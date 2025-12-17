#include <iostream>
using namespace std;

int main(){

    float a,b,c,d, resultado=0, checkin;

    cout<<"Digite el primer numero: "; cin>>a;
    cout<<"Digite el segundo numero: "; cin>>b;
    cout<<"Digite el tercer numero: "; cin>>c;
    cout<<"Digite el cuarto numero: "; cin>>d;

    resultado=a+(b/(c-d));
    
    cout.precision(2);
    cout<<"El resultado de la operacion es: "<<resultado<<endl;
    
    return 0;
}