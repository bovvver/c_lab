// Projekt 17
// Dla klasy odcinek napisz wzorując się na projekcie jawne konstruktor i destruktor.

#include <iostream>

using namespace std;

class Punkt {
public:
    Punkt(int, int);
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

void Punkt::przesun(int da, int db) {
    x = x + da;
    y = y + db;
}

void Punkt::pokaz() const {
    cout << "Punkt: x = " << x << ", y = " << y << endl;
}

class Odcinek {
public:
    explicit Odcinek(int, int, int, int);
    ~Odcinek();
    void pokaz() const;
    void przesun(int, int);
private:
    Punkt poczatek;
    Punkt koniec;
};

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

int main() {
    Odcinek odcinek(2, 8, 4, 6);
    odcinek.pokaz();

    odcinek.przesun(8,2);
    odcinek.pokaz();

    return 0;
}