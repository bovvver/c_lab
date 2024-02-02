#include <stdio.h>
#include <math.h>

void znajdz_najblizsza_wielokrotnosc(float m, float n) {
    float wynik = m + n - fmod(m,n);
    printf("Najbliższa wielokrotność liczby %.3f dla %.2f to: %.2f\n", m, n, wynik);
}

int main() {
    znajdz_najblizsza_wielokrotnosc(365, 7);
    znajdz_najblizsza_wielokrotnosc(13.333, 27);
    znajdz_najblizsza_wielokrotnosc(333, 4);

    return 0;
}