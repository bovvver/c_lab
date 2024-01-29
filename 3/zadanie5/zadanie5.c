#include <stdio.h>

float dodawanie(float a, float b) {
    return a + b;
}

float odejmowanie(float a, float b) {
    return a - b;
}

float mnozenie(float a, float b) {
    return a * b;
}

float dzielenie(float a, float b) {
    if (b == 0) {
        puts("Zakazana operacja.");
        return a;
    } else {
        return a / b;
    }
}

float wykonajOperacje(float wynik, float wejscie, char operator) {
    switch (operator) {
        case 'A':
        case 'a':
            return wejscie;
        case '+':
            return dodawanie(wynik, wejscie);
        case '-':
            return odejmowanie(wynik, wejscie);
        case '*':
            return mnozenie(wynik, wejscie);
        case '/':
            return dzielenie(wynik, wejscie);
        default:
            puts("Zły operator");
            return wynik;
    }
}

int main() {
    char operator;
    float wejscie, wynik = 0;

    while (1) {
        fputs("Liczba: ", stdout);
        scanf("%f", &wejscie);

        fflush(stdin);

        fputs("Operator: ", stdout);
        scanf(" %c", &operator);

        if (operator == 'k' || operator == 'K') break;

        wynik = wykonajOperacje(wynik, wejscie, operator);

        printf("%f\n", wynik);
    }

    return 0;
}
