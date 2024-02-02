#include "segment.h"
#include <iostream>

using namespace std;

Segment::Segment(int ax, int ay, int bx, int by) : start(ax, ay), end(bx, by) {}

Segment::~Segment(){}

void Segment::show() const {
    cout << "Segment:" << endl;
    cout << "Start: ";
    start.display();
    cout << "End: ";
    end.display();
    cout<<endl;
}

void Segment::move(int dx, int dy) {
    this->start.move(dx, dy);
    this->end.move(dx, dy);
}

void Segment::getStart(){
    this->start.display();
}

void Segment::getEnd(){
    this->end.display();
}