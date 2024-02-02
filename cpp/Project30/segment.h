#ifndef ODCINEK_H
#define ODCINEK_H

#include "point.h"

class Odcinek : public Punkt {
public:
    Odcinek(double = 0.0, double = 0.0, double = 0.0, double = 0.0, double = 0.0, double = 0.0);
    ~Odcinek(){}

    Punkt pobierz_koniec();
private:
    Punkt koniec;
};
#endif