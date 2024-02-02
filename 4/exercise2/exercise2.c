#include <stdio.h>

float obliczSrednia(float tablica[], int rozmiar) {
    float suma = 0.0;

    for (int i = 0; i < rozmiar; i++) {
        suma += tablica[i];
    }

    if (rozmiar > 0) {
        return suma / rozmiar;
    } else {
        return 0.0;
    }
}

int main() {
    int rozmiar;

    printf("Podaj rozmiar tablicy: ");
    scanf("%d", &rozmiar);

    float tablica[rozmiar];

    printf("Podaj %d liczb zmiennoprzecinkowych:\n", rozmiar);
    for (int i = 0; i < rozmiar; i++) {
        scanf("%f", &tablica[i]);
    }

    float srednia = obliczSrednia(tablica, rozmiar);
    printf("Średnia liczb zmiennoprzecinkowych: %.2f\n", srednia);

    return 0;
}
