#include <iostream>

using namespace std;

class Segment {
private:
    float start;
    float end;

public:
    float getStart() const;
    float getEnd() const;
    void setStart(float newStart);
    void setEnd(float newEnd);
    void show() const;
};

float Segment::getStart() const { return start; }
float Segment::getEnd() const { return end; }
void Segment::setStart(float newStart) { start = newStart; }
void Segment::setEnd(float newEnd) { end = newEnd; }
void Segment::show() const {
    std::cout << "Segment from " << start << " to " << end << std::endl << std::endl;
}

int main(int argc, char** argv) {
    Segment newSegment;
    Segment* segmentPointer;
    Segment& segmentReference = newSegment;

    newSegment.setStart(1.01);
    newSegment.setEnd(2.02);

    cout << "== Object Name ==" << endl;
    newSegment.show();
    newSegment.getStart();

    segmentReference.setStart(2.02);
    segmentReference.setEnd(3.03);

    cout << "== Object Reference ==" << endl;
    segmentReference.show();

    segmentPointer = &newSegment;
    segmentPointer->setStart(3.03);
    segmentPointer->setEnd(4.04);

    cout << "== Object Pointer ==" << endl;
    segmentPointer->show();

    return 0;
}