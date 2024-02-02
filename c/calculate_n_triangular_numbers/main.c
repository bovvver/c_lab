#include <stdio.h>

int triangularNumber(int n) {
    return n * (n + 1) / 2;
}

int main() {
    int numTriangular;

    printf("How many triangular numbers to calculate?: ");
    scanf("%d", &numTriangular);

    for (int i = 1; i <= numTriangular; i++) {
        printf("%d ", triangularNumber(i));
    }

    return 0;
}