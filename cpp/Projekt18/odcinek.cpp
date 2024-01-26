#include "odcinek.h"
#include <iostream>

using namespace std;

Odcinek::Odcinek(int ax, int ay, int bx, int by) : poczatek(ax, ay), koniec(bx, by) {}

Odcinek :: ~Odcinek(){}

void Odcinek::pokaz() const {
    cout << "Odcinek:" << endl;
    cout << "Początek: ";
    poczatek.pokaz();
    cout << "Koniec: ";
    koniec.pokaz();
    cout<<endl;
}

void Odcinek::przesun(int da, int db) {
    this->poczatek.przesun(da,db);
    this->koniec.przesun(da,db);
}