#include <stdio.h>

float poteguj(float liczba, int potega) {
    float wynik = liczba;
    for(int i=1; i<potega; i++)
        wynik *= liczba;

    return wynik;
}

int main() {
	printf("%.2f", poteguj(8,9));
	return 0;
}

