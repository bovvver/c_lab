// Projekt 30
// Wzorując się na projekcie utwórz projekt wychodząc od klasy punkt (trójwymiarowy) do klasy odcinek (w trzech wymiarach), dalej do klasy prostokąt (w trzech wymiarach), z niego dziedzicz do klasy prostopadłościan – zadanie jest trudne. Jak twoja znajomość geometrii jest niewystarczająca, to punkt w dwóch wymiarach, z niego dziedzicz do klasy odcinek, potem dziedzicz do klasy  prostokąt w dwóch wymiarach, dodaj w kolejnej klasie wysokość dla określenia prostopadłościanu. Oczywiście oblicz pole i objętość. Zwróć uwagę na rozdzielenie definicji klas i ich interfejsów.

#include<iostream>
#include "prostopadloscian.h"

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