#include <stdio.h>

int liczba_trojkatna(int n) {
    return n * (n + 1) / 2;
}

int main() {
    int zakres_poczatek = 5;
    int zakres_koniec = 50;
    int krok = 5;
    int indeks = 0;

    int ilosc_elementow = (zakres_koniec - zakres_poczatek) / krok + 1;
    int trojkatne[ilosc_elementow];

    for (int i = zakres_poczatek; i <= zakres_koniec; i += krok) {
        trojkatne[indeks++] = liczba_trojkatna(i);
    }

    printf("Liczby trójkątne co piąte od %d do %d:\n", zakres_poczatek, zakres_koniec);
    for (int i = 0; i < ilosc_elementow; i++) {
        printf("%d\n", trojkatne[i]);
    }

    return 0;
}