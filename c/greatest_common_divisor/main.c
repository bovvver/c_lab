#include <stdio.h>

int greatestCommonDivisor(int u, int v) {
    if (u != v)
        return greatestCommonDivisor(u > v ? u - v : u, v > u ? v - u : v);
    return u;
}

int leastCommonMultiple(int u, int v) {
    return (u * v) / greatestCommonDivisor(u, v);
}

int main(int argc, char *argv[]) {
    int u, v;

    do {
        printf("Enter u (u > 0): ");
        scanf("%d", &u);

        printf("Enter v (v > 0): ");
        scanf("%d", &v);
    } while (u <= 0 || v <= 0);

    printf("Greatest common divisor for %d and %d is: %d", u, v, greatestCommonDivisor(u, v));

    return 0;
}
