#include <stdio.h>

int licz_liczba_trojkatna(int n) {
	int i, liczba_trojkatna = 0;

	for (i=1; i<=n; ++i)
		liczba_trojkatna += i;

    return liczba_trojkatna;
	printf("%i-ta liczba trójkątna to %i\n", n, liczba_trojkatna);
}

int main(int argc, char *argv[]) {
    int liczba = 50;
	printf("%i-ta liczba trójkątna to %i\n",liczba, licz_liczba_trojkatna(liczba));
	return 0;
}