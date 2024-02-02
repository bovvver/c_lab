#include <stdio.h>
#include <string.h>

void zmienNaRzymska(int liczba) {
    int arabskie[] = {1,4,5,9,10,40,50,90,100,400,500,900,1000};
    char *rzymskie[] = {"I","IV","V","IX","X","XL","L","XC","C","CD","D","CM","M"};

    int licznik = 12;
    while(liczba > 0) {
        int liczbaWykonan = liczba / arabskie[licznik];
        liczba = liczba % arabskie[licznik];

        while(liczbaWykonan--) {
            printf("%s", rzymskie[licznik]);
        }
        licznik--;
    }
    printf("\n");
}

void zmienNaArabska(char* rzymskaLiczba) {
    int dlugosc = strlen(rzymskaLiczba);
    int liczba = 0;
    int poprzedniaLiczba = 0;
    int wynik = 0;

    for (int i = dlugosc - 1; i >= 0; i--) {
        switch (rzymskaLiczba[i]) {
            case 'I':
                liczba = 1;
                break;
            case 'V':
                liczba = 5;
                break;
            case 'X':
                liczba = 10;
                break;
            case 'L':
                liczba = 50;
                break;
            case 'C':
                liczba = 100;
                break;
            case 'D':
                liczba = 500;
                break;
            case 'M':
                liczba = 1000;
                break;
        }

        if (liczba < poprzedniaLiczba) {
            wynik -= liczba;
        } else {
            wynik += liczba;
        }

        poprzedniaLiczba = liczba;
    }

    printf("%d", wynik);
}

int main() {
    int liczba;
    char rzymskaLiczba[100];

    printf("Podaj liczbe arabska: ");
    scanf("%d", &liczba);
    zmienNaRzymska(liczba);

    printf("Podaj liczbe rzymska: ");
    scanf("%s", rzymskaLiczba);
    zmienNaArabska(rzymskaLiczba);

    return 0;
}
