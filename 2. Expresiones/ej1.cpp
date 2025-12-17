#include<iostream>
using namespace std;

int main(){
    float a, b, result=0;

    cout<<"Digite el valor de a: ";cin>>a;
    cout<<"Digite el valor de b: ";cin>>b;
    result = (a/b) + 1;

    //Para hacer que solo aparezcan 2 décimales en la resupuesta se coloca el precision y la cantidad maxima que queremos que aparezca
    cout.precision(2);
    cout<<"El resultado es: "<<result<<endl;

    return 0;
}