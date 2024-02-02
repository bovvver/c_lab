#include <stdio.h>

float power(float base, int exponent) {
    float result = base;
    for(int i = 1; i < exponent; i++)
        result *= base;

    return result;
}

int main() {
    printf("%.2f", power(8, 9));
    return 0;
}