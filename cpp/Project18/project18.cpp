#include <iostream>
#include "segment.h"

using namespace std;

int main() {
    Odcinek odcinek(2, 8, 4, 6);
    odcinek.pokaz();

    odcinek.przesun(8,2);
    odcinek.pokaz();

    return 0;
}