// Projekt 18
// Wzorując się na projekcie przepisz klasę odcinek rozdzielając kod na pliki interfejsu.

#include <iostream>
#include "odcinek.h"

using namespace std;

int main() {
    Odcinek odcinek(2, 8, 4, 6);
    odcinek.pokaz();

    odcinek.przesun(8,2);
    odcinek.pokaz();

    return 0;
}