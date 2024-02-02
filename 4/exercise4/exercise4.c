#include <stdio.h>
#include <stdbool.h>
#include <math.h>

int main() {
    int n;
    do {
        printf("Podaj dlugosc tablicy n (n > 1): ");
        scanf("%d", &n);
    } while(n <= 1);

    bool tablica[n + 1];

    for (int i = 2; i <= n; i++)
        tablica[i] = true;

    for (int i = 2; i <= sqrt(n); i++) {
        if (tablica[i]) {
            for (int j = i * i; j <= n; j += i) {
                tablica[j] = false;
            }
        }
    }

    printf("Liczby pierwsze od 2 do %d: ", n);
    for (int i = 2; i <= n; i++) {
        if (tablica[i])
            printf("%d ", i);
    }

    return 0;
}
