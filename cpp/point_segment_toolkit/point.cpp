#include "point.h"
#include <iostream>

using namespace std;

Point::Point(int x, int y) {
    this->x = x;
    this->y = y;
}

void Point::move(int da, int db) {
    x = x + da;
    y = y + db;
}

void Point::show() const {
    cout << "Point: x = " << x << ", y = " << y << endl;
}