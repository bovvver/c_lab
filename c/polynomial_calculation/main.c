#include <stdio.h>

int main() {
    float x = 3.33;
    float polynomialResult = (3*x*x*x) - (3*x*x) + 3; 

    printf("Result of the polynomial 3x^3 - 3x^2 + 3 for x = %.2f is: %.2f", x, polynomialResult);

    return 0;
}