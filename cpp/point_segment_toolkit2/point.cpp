#include "point.h"
#include <iostream>

using namespace std;

Point::Point(int x, int y) {
    this->x = x;
    this->y = y;
}

void Point::move(int dx, int dy) {
    x = x + dx;
    y = y + dy;
}

void Point::display() const {
    cout << "Point: x = " << x << ", y = " << y << endl;
}