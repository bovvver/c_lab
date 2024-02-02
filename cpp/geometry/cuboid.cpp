#include <iostream>
#include <cmath>

#include "cuboid.h"

using namespace std;

Cuboid::Cuboid(double x1, double y1, double z1, double x2, double y2, double z2) : Rectangle(x1, y1, z1, x2, y2, z2) {}

double Cuboid::calculateVolume() {
    Point oppositePoint = getEnd();
    double a = oppositePoint.getX() - getX();
    double b = oppositePoint.getZ() - getZ();
    double h = oppositePoint.getY() - getY();

    return abs(a * b * h);
}

double Cuboid::calculateSurfaceArea() {
    Point oppositePoint = getEnd();
    double a = abs(oppositePoint.getX() - getX());
    double b = abs(oppositePoint.getY() - getY());
    double c = abs(oppositePoint.getZ() - getZ());

    return 2 * (a * b + b * c + c * a);
}