#ifndef SEGMENT_H
#define SEGMENT_H

#include "point.h"

class Segment {
public:
    explicit Segment(int, int, int, int);
    ~Segment();
    void show() const;
    void move(int, int);
    void getStart();
    void getEnd();
private:
    Point start;
    Point end;
};
#endif