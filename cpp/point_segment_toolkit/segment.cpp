#include "segment.h"
#include <iostream>

using namespace std;

Segment::Segment(int ax, int ay, int bx, int by) : start(ax, ay), end(bx, by) {}

Segment::~Segment() {}

void Segment::show() const {
    cout << "Segment:" << endl;
    cout << "Start: ";
    start.show();
    cout << "End: ";
    end.show();
    cout << endl;
}

void Segment::move(int da, int db) {
    this->start.move(da, db);
    this->end.move(da, db);
}