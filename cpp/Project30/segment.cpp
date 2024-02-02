#include <iostream>

#include "segment.h"

using namespace std;

Odcinek::Odcinek(double x1, double y1, double z1, double x2, double y2, double z2) : Punkt(x1, y1, z1) {
    koniec.ustaw_x(x2);
    koniec.ustaw_y(y2);
    koniec.ustaw_z(z2);
}

Punkt Odcinek::pobierz_koniec() { return this->koniec; }