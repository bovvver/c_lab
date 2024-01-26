#include <iostream>

#include "punkt.h"

using namespace std;

Punkt::Punkt(double x, double y, double z) {
    this->x = x;
    this->y = y;
    this->z = z;
}

double Punkt::pobierz_x() { return this->x; }
double Punkt::pobierz_y() { return this->y; }
double Punkt::pobierz_z() { return this->z; }

void Punkt::ustaw_x(double x) { this->x = x; }
void Punkt::ustaw_y(double y) { this->y = y; }
void Punkt::ustaw_z(double z) { this->z = z; }
