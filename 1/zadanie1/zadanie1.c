#include <stdio.h>

int main() {
    int fahrenheit = 25;
    float celsius = (fahrenheit - 32) / 1.8;

    printf("%d stopni Fahrenheita to %.2f stopni Celsjusza.", fahrenheit, celsius);

    return 0;
}