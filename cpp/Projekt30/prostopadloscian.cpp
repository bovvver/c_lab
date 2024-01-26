#include <iostream>
#include <cmath>

#include "prostopadloscian.h"

using namespace std;

Prostopadloscian::Prostopadloscian(double x1, double y1, double z1, double x2, double y2, double z2) : Prostokat(x1, y1, z1, x2, y2, z2) {}

double Prostopadloscian::obliczObjetosc() {
    Punkt przeciwnyPunkt = pobierz_koniec();
    double a = przeciwnyPunkt.pobierz_x() - pobierz_x();
    double b = przeciwnyPunkt.pobierz_z() - pobierz_z();
    double h = przeciwnyPunkt.pobierz_y() - pobierz_y();

    return abs(a*b*h);
}

double Prostopadloscian::obliczPolePowierzchni() {
    Punkt przeciwnyPunkt = pobierz_koniec();
    double a = abs(przeciwnyPunkt.pobierz_x() - pobierz_x());
    double b = abs(przeciwnyPunkt.pobierz_y() - pobierz_y());
    double c = abs(przeciwnyPunkt.pobierz_z() - pobierz_z());

    return 2 * (a * b + b * c + c * a);
}