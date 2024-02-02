#include <stdio.h>

float absolute(float x) {
    if (x < 0)
        x = -x;
    return x;
}

float squareRoot(float x, const float epsilon) {
    if (x < 0) {
        printf("Negative parameter passed to the function!\n");
        return -1;
    }

    float result = 1.0;

    while (absolute((result * result - x) / x) >= epsilon) {
        result = (x / result + result) / 2.0;
        printf("Square root in the while loop: %f\n", result);
    }

    return result;
}

int main(int argc, char *argv[]) {
    printf("Square root of 2.0 = %f\n\n", squareRoot(-2.0, 0.000001));
    printf("Square root of 2.0 = %f\n\n", squareRoot(2.0, 0.000002));
    printf("Square root of 2.0 = %f\n\n", squareRoot(2.0, 0.003000));
    printf("Square root of 2.0 = %f\n\n", squareRoot(2.0, 0.100000));

    return 0;
}
