#include <stdio.h>

int main() {
    float x = 3.33;
    float wynikWielomianu = (3*x*x*x) - (3*x*x) + 3; 

    printf("Wynik wielomianu 3x^3 - 3x^2 + 3 dla x = %.2f to: %.2f", x, wynikWielomianu);

    return 0;
}