#include "point.h"
#include <iostream>

using namespace std;

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