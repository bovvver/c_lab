#include <stdio.h>
#include <stdbool.h>

int main() {
    bool isPrime;
    printf("2  ");

    for (int i = 3; i <= 50; i += 2) {
        isPrime = true;
        for (int j = 3; j < i; j += 2) {
            if (i % j == 0) {
                isPrime = false;
                break;
            }
        }
        if (isPrime == true)
            printf("%i  ", i);
    }
    printf("\n");

    return 0;
}