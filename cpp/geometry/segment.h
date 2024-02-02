#ifndef LINE_H
#define LINE_H

#include "point.h"

class Segment : public Point {
public:
    Segment(double = 0.0, double = 0.0, double = 0.0, double = 0.0, double = 0.0, double = 0.0);
    ~Segment(){}

    Point getEnd();
private:
    Point end;
};
#endif