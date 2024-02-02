#include <stdio.h>

int main() {
    double a = 3.33e-8;
    double b = 2.22e-7;
    double c = 7.77e-6;
    double d = 2.22e-8;

    double result = (a * b) / (c + d);

    printf("Result of the expression: %.2e", result);

    return 0;
}