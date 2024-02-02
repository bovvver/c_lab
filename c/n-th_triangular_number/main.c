#include <stdio.h>

int calculateTriangularNumber(int n) {
    int i, triangularNumber = 0;

    for (i = 1; i <= n; ++i)
        triangularNumber += i;

    return triangularNumber;
}

int main(int argc, char *argv[]) {
    int number = 50;
    printf("The %i-th triangular number is %i\n", number, calculateTriangularNumber(number));
    return 0;
}
