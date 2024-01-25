// Projekt 9
// Zastosować zmienną uogólnioną dla programu sortującego tablicę, przetestować program dla różnych typów.


#include <iostream>

using namespace std;

template <typename T>
void zamiana(T &a, T &b) {
    T tmp = a;
    a = b;
    b = tmp;
}

template <typename T>
void sortuj(T tab[], int rozmiar) {
    for (int i = 0; i < rozmiar; i++) {
        for (int j = 0; j < rozmiar - i - 1; j++) {
            if (tab[j] > tab[j + 1]) {
                zamiana(tab[j], tab[j + 1]);
            }
        }
    }
}

template <typename T>
void wczytajDaneWejsciowe(T tab[], int rozmiar) {
    for (int i = 0; i < rozmiar; i++) {
        cout << "Wprowadz tablica[" << i << "]: ";
        cin >> tab[i];
    }
}

template <typename T>
void wyswietlWynikSortowania(T tab[], int rozmiar) {
    for (int i = 0; i < rozmiar; i++) {
        cout << "[" << tab[i] << "] ";
    }
    cout << endl;
}

template <typename T>
void testujSortowanie(const string typ) {
    const int rozmiar = 10;

    cout << typ << ":\n";
    T dane[rozmiar];
    wczytajDaneWejsciowe(dane, rozmiar);
    sortuj(dane, rozmiar);
    wyswietlWynikSortowania(dane, rozmiar);
    cout << endl;
}

int main() {
    testujSortowanie<int>("Calkowite");
    testujSortowanie<double>("Rzeczywiste");
    testujSortowanie<string>("Tekst");

    return 0;
}