#include <stdio.h>

int tablica_suma(int tablica[], int rozmiar) {
    int wynik = 0;

    for(int i = 0; i < rozmiar; i++)
        wynik += tablica[i];

    return wynik;
}

int main() {
    int tablica[] = {1, 2, 3, 4, 5};
    int rozmiar = sizeof(tablica) / sizeof(tablica[0]);

    int suma = tablica_suma(tablica, rozmiar);

    printf("Suma elementów tablicy: %d\n", suma);

    return 0;
}