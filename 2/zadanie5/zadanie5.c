#include <stdio.h>

int suma_cyfr(int liczba) {
    int suma = 0;

    while (liczba != 0) {
        suma += liczba % 10;
        liczba /= 10;
    }

    return suma;
}

int main() {
    int liczba;

    printf("Podaj liczbe calkowita: ");
    scanf("%d", &liczba);

    int wynik = suma_cyfr(liczba);

    printf("Suma cyfr liczby %d wynosi: %d\n", liczba, wynik);

    return 0;
}