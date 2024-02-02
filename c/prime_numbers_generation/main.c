#include <stdio.h>
#include <stdbool.h>
#include <math.h>

int main() {
    int n;
    do {
        printf("Enter the length of the array n (n > 1): ");
        scanf("%d", &n);
    } while(n <= 1);

    bool array[n + 1];

    for (int i = 2; i <= n; i++)
        array[i] = true;

    for (int i = 2; i <= sqrt(n); i++) {
        if (array[i]) {
            for (int j = i * i; j <= n; j += i) {
                array[j] = false;
            }
        }
    }

    printf("Prime numbers from 2 to %d: ", n);
    for (int i = 2; i <= n; i++) {
        if (array[i])
            printf("%d ", i);
    }

    return 0;
}
