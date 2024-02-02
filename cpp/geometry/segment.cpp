#include <iostream>

#include "segment.h"

using namespace std;

Segment::Segment(double x1, double y1, double z1, double x2, double y2, double z2) : Point(x1, y1, z1) {
    end.setX(x2);
    end.setY(y2);
    end.setZ(z2);
}

Point Segment::getEnd() { return this->end; }
