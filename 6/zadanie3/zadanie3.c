#include <stdio.h>
#include <stdlib.h>

int funkcja1(int rok, int miesiac) {
    return miesiac <= 2 ? rok - 1 : rok;
}

int funkcja2(int miesiac) {
    return miesiac <= 2 ? miesiac + 13 : miesiac + 1;
}

int znajdzN(int rok, int miesiac, int dzien_miesiaca) {
    return 1461 * funkcja1(rok,miesiac) / 4 + 153 * funkcja2(miesiac) / 5 + dzien_miesiaca;
}

int dostanNumerDniaTygodnia(int rok, int miesiac, int dzien_miesiaca) {
    return (znajdzN(rok, miesiac, dzien_miesiaca) - 621049) % 7;
}

void zwrocDzienTygodnia(int numerDnia) {
    switch (numerDnia) {
    case 1:
        printf("Poniedzialek");
        break;
    case 2:
        printf("Wtorek");
        break;
    case 3:
        printf("Sroda");
        break;
    case 4:
        printf("Czwartek");
        break;
    case 5:
        printf("Piatek");
        break;
    case 6:
        printf("Sobota");
        break;
    case 7:
        printf("Niedziela");
        break;
    default:
        printf("Zly numer dnia");
        break;
    }
}

int main() {
    int dzien, miesiac, rok;

    printf("Wprowadz date w formacie DD MM YYYY: ");
    scanf("%d %d %d", &dzien, &miesiac, &rok);

    zwrocDzienTygodnia(dostanNumerDniaTygodnia(rok, miesiac, dzien));

    return 0;
}