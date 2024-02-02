#include <iostream>

using namespace std;

class Punkt {
public:
    Punkt(int, int);
    Punkt();
    void ustaw(int, int);
    void przesun(int, int);
    void pokaz() const;
private:
    int x, y;
};

Punkt::Punkt(int x, int y) {
    this->x = x;
    this->y = y;
}

Punkt::Punkt() {
    this->x = 0;
    this->y = 0;
}

void Punkt::przesun(int da, int db) {
    x = x + da;
    y = y + db;
}

void Punkt::pokaz() const {
    cout << "Punkt: x = " << x << ", y = " << y << endl;
}

class Odcinek {
public:
    void ustaw(int, int, int, int);
    void pokaz() const;
    void przesun(int, int);
private:
    Punkt poczatek;
    Punkt koniec;
};

void Odcinek :: ustaw(int ax, int ay, int bx, int by) {
    poczatek = Punkt(ax,ay);
    koniec = Punkt(bx,by);
}

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

int main() {
    Odcinek odcinek;
    odcinek.pokaz(); //wartości nieustalone, brak inicjacji

    odcinek.ustaw(2, 8, 4, 6);
    odcinek.pokaz();

    odcinek.przesun(8,2);
    odcinek.pokaz();

    return 0;
}