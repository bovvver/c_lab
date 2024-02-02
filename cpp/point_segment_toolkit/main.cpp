#include "segment.h"
#include <iostream>

using namespace std;

int main() {
    Segment segment(2, 8, 4, 6);
    segment.show();

    segment.move(8, 2);
    segment.show();

    return 0;
}