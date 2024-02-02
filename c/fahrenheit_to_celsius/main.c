#include <stdio.h>

int main() {
    int fahrenheit = 25;
    float celsius = (fahrenheit - 32) / 1.8;

    printf("%d degrees Fahrenheit is %.2f degrees Celsius.", fahrenheit, celsius);

    return 0;
}