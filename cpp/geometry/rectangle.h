#ifndef RECTANGLE_H
#define RECTANGLE_H

#include "segment.h"

class Rectangle : public Segment {
public:
    Rectangle(double = 0.0, double = 0.0, double = 0.0, double = 0.0, double = 0.0, double = 0.0);
    ~Rectangle(){}
};
#endif
