#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// wersja -123 = 321-
char* odwrocLiczbe(const char* liczba) {
    int dlugosc = strlen(liczba);

    char* wynik = (char*)malloc(sizeof(char) * (dlugosc + 1));

    if (wynik == NULL) {
        perror("Błąd alokacji pamięci");
        exit(EXIT_FAILURE);
    }

    int indeksWyniku = dlugosc;

    for (int i = 0; i < dlugosc; i++) {
        indeksWyniku--;
        wynik[indeksWyniku] = liczba[i];
    }

    wynik[dlugosc] = '\0';

    return wynik;
}

// wersja -123 = -321
char* odwrocLiczbe2(const char* liczba) {
    int dlugosc = strlen(liczba);
    int start = 0;

    if (liczba[0] == '-') {
        start = 1;
        dlugosc--;
    }

    char* wynik = (char*)malloc(sizeof(char) * (dlugosc + 2));

    if (wynik == NULL) {
        perror("Błąd alokacji pamięci");
        exit(EXIT_FAILURE);
    }

    int indeksWyniku = dlugosc + start;

    if (start)
        wynik[0] = '-';

    for (int i = start; i < dlugosc + start; i++) {
        indeksWyniku--;
        wynik[indeksWyniku] = liczba[i];
    }

    wynik[dlugosc + start] = '\0';

    return wynik;
}


int main() {
    char liczba[100];

    puts("Podaj liczbe do odwrocenia: ");
    scanf("%s", liczba);
    
    char* odwroconaLiczba = odwrocLiczbe(liczba);
    char* odwroconaLiczba2 = odwrocLiczbe2(liczba);

    printf("Oryginalna liczba: %s\n", liczba);
    printf("Odwrocona liczba: %s\n", odwroconaLiczba);
    printf("Odwrocona liczba 2: %s\n", odwroconaLiczba2);
    

    free(odwroconaLiczba);

    return 0;
}
