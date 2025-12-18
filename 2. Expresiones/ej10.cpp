/*
Resolver una ecuación de segundo grado usando la formula general
*/

#include <iostream>
#include<cmath>
using namespace std;

int main(){
    float a, b, c, gral1=0, gral2=0;

    cout<<"Ingrese el valor de a: ";cin>>a;
    cout<<"Ingrese el valor de b: ";cin>>b;
    cout<<"Ingrese el valor de c: ";cin>>c;
    
    gral1 = (-b-sqrt(pow(b,2)-(4*a*c)))/(2*a);
    gral2 = (-b+sqrt(pow(b,2)-(4*a*c)))/(2*a);

    cout<<"El valor de x1= "<<gral1<<", el valor de x2= "<<gral2<<endl;

    return 0;
}