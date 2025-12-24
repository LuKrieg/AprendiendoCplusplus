/*
Transformar un numero entero a uno romano
M=1000, D=500, C=100, L=50, X=10, V=5, I=1
*/

#include <iostream>
using namespace std;

int main(){
    int num, unidades,decena,centena,millar;
    cout<<"Digite un numero"; cin>>num;

    //num = 2152 -> 2000+100+50+2
    unidades = num%10; num/=10; //unidades = 2(MM), num=215
    decena=num%10; num/=10; //decenas = 5(C), num=21
    centena=num%10; num/=10; //centenas = 1(L), num=2
    millar=num%10; num/=10; //millares = 2(II), num=0

    switch (millar)
    {
        case 1: cout<<"M"; break;
        case 2: cout<<"MM"; break;
        case 3: cout<<"MMM"; break;
    }
    switch (centena)
    {
        case 1: cout<<"C"; break;
        case 2: cout<<"CC"; break;
        case 3: cout<<"CCC"; break;
        case 4: cout<<"CD"; break;
        case 5: cout<<"D"; break;
        case 6: cout<<"DC"; break;
        case 7: cout<<"DCC"; break;
        case 8: cout<<"DCCC"; break;
        case 9: cout<<"CM"; break;
    }
    switch (decena)
    {
        case 1: cout<<"X"; break;
        case 2: cout<<"XX"; break;
        case 3: cout<<"XXX"; break;
        case 4: cout<<"XL"; break;
        case 5: cout<<"L"; break;
        case 6: cout<<"LX"; break;
        case 7: cout<<"LXX"; break;
        case 8: cout<<"LXX"; break;
        case 9: cout<<"XC"; break;
    }
    switch (unidades)
    {
        case 1: cout<<"I"; break;
        case 2: cout<<"II"; break;
        case 3: cout<<"III"; break;
        case 4: cout<<"VI"; break;
        case 5: cout<<"V"; break;
        case 6: cout<<"VI"; break;
        case 7: cout<<"VII"; break;
        case 8: cout<<"VII"; break;
        case 9: cout<<"IX"; break;
    }
    return 0;
}