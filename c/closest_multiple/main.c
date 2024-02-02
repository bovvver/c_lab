#include <stdio.h>
#include <math.h>

void find_closest_multiple(float m, float n) {
    float result = m + n - fmod(m, n);
    printf("Closest multiple of %.3f for %.2f is: %.2f\n", n, m, result);
}

int main() {
    find_closest_multiple(365, 7);
    find_closest_multiple(13.333, 27);
    find_closest_multiple(333, 4);

    return 0;
}