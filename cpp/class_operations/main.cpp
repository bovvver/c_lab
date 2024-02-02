#include <iostream>

using namespace std;

class Segment {
public:
    float start;
    float end;

    void show() {
        cout << "Segment from " << start << " to " << end << endl << endl;
    }
};

int main(int argc, char** argv) {
    Segment newSegment;
    Segment* segmentPointer;
    Segment& segmentReference = newSegment;

    newSegment.start = 1.01;
    newSegment.end = 2.02;

    cout << "== Object Name ==" << endl;
    newSegment.show();

    segmentReference.start = 2.02;
    segmentReference.end = 3.03;

    cout << "== Object Reference ==" << endl;
    segmentReference.show();

    segmentPointer = &newSegment;
    segmentPointer->start = 3.03;
    segmentPointer->end = 4.04;

    cout << "== Object Pointer ==" << endl;
    segmentPointer->show();

    return 0;
}