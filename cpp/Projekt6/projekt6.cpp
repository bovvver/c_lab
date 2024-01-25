// Projekt 6
// Używając funkcji zamiana() z tego projektu, napisać program sortujący tablicę 10 liczb całkowitych.

#include <iostream>

using namespace std;

void zamiana(int *, int *);
void sortuj(int tab[], int size);
void wczytajLiczby(int tab[], int size);
void wyswietlWynikSortowania(int tab[], int size);

int main() {
    const int rozmiar = 10;
    int liczby[rozmiar];

    wczytajLiczby(liczby, rozmiar);
    sortuj(liczby, rozmiar);
    wyswietlWynikSortowania(liczby, rozmiar);

    return 0;
}

void wczytajLiczby(int tab[], int rozmiar) {
    for (int i = 0; i < rozmiar; i++) {
        cout << "Wprowadz " << i + 1 << " liczbe: ";
        cin >> tab[i];
    }
}

void wyswietlWynikSortowania(int tab[], int rozmiar) {
    for (int i = 0; i < rozmiar; i++) {
        cout << "[" << tab[i] << "] ";
    }
    cout << endl;
}

void sortuj(int tab[], int rozmiar) {
    for (int i = 0; i < rozmiar; i++) {
        for (int j = 0; j < rozmiar - i - 1; j++) {
            if (tab[j] > tab[j + 1]) {
                zamiana(&tab[j], &tab[j + 1]);
            }
        }
    }
}



void zamiana ( int *ptr_x, int *ptr_y) {
	int tmp;
	tmp = *ptr_x;
	*ptr_x = *ptr_y;
	*ptr_y = tmp;
}