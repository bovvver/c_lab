// Projekt 12
// Przepisz program mnożący macierze w stylu C++, używając alokacji i dealokacji pamięci operatorami new i delete. Wejście wyjście zrealizuj w języku C++. 

#include <iostream>

int **alokujMacierz(int, int);
void delokujMacierz(int**, int);
void wyswietlMacierz(int**, int, int);
void mnozMacierze(int**, int**, int**, int, int, int);
void uzupelnijMacierz(int**, int, int);

int main() {
    const int rzedyA = 2, kolumnyA = 3;
    const int rzedyB = 3, kolumnyB = 2;

    int** macierzA = alokujMacierz(rzedyA, kolumnyA);
    int** macierzB = alokujMacierz(rzedyB, kolumnyB);
    int** macierzWynik = alokujMacierz(rzedyA, kolumnyB);

    std::cout << "Wprowadz dane do macierzy A (" << rzedyA << "x" << kolumnyA << "):\n";
    uzupelnijMacierz(macierzA, rzedyA, kolumnyA);
    std::cout << "Wprowadz dane do macierzy B (" << rzedyB << "x" << kolumnyB << "):\n";
    uzupelnijMacierz(macierzB, rzedyB, kolumnyB);

    mnozMacierze(macierzA, macierzB, macierzWynik, rzedyA, rzedyB, kolumnyB);

    std::cout << "Macierz wynikowa:\n";
    wyswietlMacierz(macierzWynik, rzedyA, kolumnyB);

    delokujMacierz(macierzA, rzedyA);
    delokujMacierz(macierzB, rzedyB);
    delokujMacierz(macierzWynik, rzedyA);

    return 0;
}

void uzupelnijMacierz(int** macierz, int rzedy, int kolumny) {
    for (int i = 0; i < rzedy; i++) {
        for (int j = 0; j < kolumny; j++) {
            std::cout << "[" << i + 1 << "][" << j + 1 << "]: ";
            std::cin >> macierz[i][j];
        }
    }
}

int** alokujMacierz(int rzedy, int kolumny) {
    int** macierz = new int*[rzedy];
    for (int i = 0; i < rzedy; i++) {
        macierz[i] = new int[kolumny];
    }

    if (macierz == nullptr) {
        std::cerr << "Blad przydzialu pamieci, koniec" << std::endl;
        exit(EXIT_FAILURE);
    }

    return macierz;
}

void delokujMacierz(int** macierz, int rzedy) {
    for (int i = 0; i < rzedy; i++) {
        delete[] macierz[i];
    }
    delete[] macierz;
}

void wyswietlMacierz(int** macierz, int rzedy, int kolumny) {
    for (int i = 0; i < rzedy; i++) {
        for (int j = 0; j < kolumny; j++) {
            std::cout << macierz[i][j] << " ";
        }
        std::cout << std::endl;
    }
}

void mnozMacierze(int** macierzA, int** macierzB, int** macierzWynik, int rzedyA, int kolumnyA, int kolumnyB) {
    for (int i = 0; i < rzedyA; i++) {
        for (int j = 0; j < kolumnyB; j++) {
            macierzWynik[i][j] = 0;
            for (int k = 0; k < kolumnyA; k++) {
                macierzWynik[i][j] += macierzA[i][k] * macierzB[k][j];
            }
        }
    }
}