#include<iostream>
#include "cuboid.h"

using namespace std;

Prostopadloscian wstawProstopadloscian();

int main() {
    Prostopadloscian prostopadloscian = wstawProstopadloscian();
    cout<<endl<<"Objetosc: "<<prostopadloscian.obliczObjetosc()<<endl;
    cout<<"Pole powierzchni: "<<prostopadloscian.obliczPolePowierzchni()<<endl;

    return 0;
}

Prostopadloscian wstawProstopadloscian() {
    double x1,x2,y1,y2,z1,z2;
    cout<<"== Punkt 1 =="<<endl;

    cout<<"Podaj x: ";
    cin>>x1;
    cout<<"Podaj y: ";
    cin>>y1;
    cout<<"Podaj z: ";
    cin>>z1;

    cout<<endl<<"== Punkt 2 =="<<endl;
    
    cout<<"Podaj x: ";
    cin>>x2;
    cout<<"Podaj y: ";
    cin>>y2;
    cout<<"Podaj z: ";
    cin>>z2;

    Prostopadloscian prostopadloscian(x1, y1, z1, x2, y2, z2);
    return prostopadloscian;
}