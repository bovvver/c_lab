#ifndef ODCINEK_H
#define ODCINEK_H

#include "point.h"

class Odcinek {
public:
    explicit Odcinek(int, int, int, int);
    ~Odcinek();
    void pokaz() const;
    void przesun(int, int);
    void pobierz_poczatek();
    void pobierz_koniec();
private:
    Punkt poczatek;
    Punkt koniec;
};
#endif