#ifndef CUBOID_H
#define CUBOID_H

#include "rectangle.h"

class Cuboid : public Rectangle {
public:
    Cuboid(double = 0.0, double = 0.0, double = 0.0, double = 0.0, double = 0.0, double = 0.0);
    ~Cuboid(){}
    double calculateVolume();
    double calculateSurfaceArea();
};
#endif