#ifndef PROSTOPADLOSCIAN_H
#define PROSTOPADLOSCIAN_H

#include "prostokat.h"

class Prostopadloscian : public Prostokat {
public:
    Prostopadloscian(double = 0.0, double = 0.0, double = 0.0, double = 0.0, double = 0.0, double = 0.0);
    ~Prostopadloscian(){}
    double obliczObjetosc();
    double obliczPolePowierzchni();
};
#endif