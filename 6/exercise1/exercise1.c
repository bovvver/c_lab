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

int main() {
    int dzien1, miesiac1, rok1;
    int dzien2, miesiac2, rok2;

    printf("Wprowadz pierwsza date w formacie DD MM YYYY: ");
    scanf("%d %d %d", &dzien1, &miesiac1, &rok1);

    printf("Wprowadz druga date w formacie DD MM YYYY: ");
    scanf("%d %d %d", &dzien2, &miesiac2, &rok2);

    int n1 = znajdzN(rok1, miesiac1, dzien1);
    int n2 = znajdzN(rok2, miesiac2, dzien2);

    printf("Ilosc dni miedzy tymi datami to: %d", abs(n1-n2));

    return 0;
}