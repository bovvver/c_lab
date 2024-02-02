#include <stdio.h>

int liczba_trojkatna(int n) {
    return n * (n + 1) / 2;
}

int main() {
    int iloscTrojkatnych;

    printf("Ile liczb trojkatnych ma byc obliczonych?: ");
    scanf("%d", &iloscTrojkatnych);

    for (int i = 1; i <= iloscTrojkatnych; i++) {
        printf("%d ", liczba_trojkatna(i));
    }

    return 0;
}