#include <stdio.h>

int triangularNumber(int n) {
    return n * (n + 1) / 2;
}

int main() {
    int startRange = 5;
    int endRange = 50;
    int step = 5;
    int index = 0;

    int numElements = (endRange - startRange) / step + 1;
    int triangularNumbers[numElements];

    for (int i = startRange; i <= endRange; i += step) {
        triangularNumbers[index++] = triangularNumber(i);
    }

    printf("Triangular numbers every fifth from %d to %d:\n", startRange, endRange);
    for (int i = 0; i < numElements; i++) {
        printf("%d\n", triangularNumbers[i]);
    }

    return 0;
}