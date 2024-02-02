#include <stdio.h>
#include <stdlib.h>

int **alokujMacierz(int, int);
void delokujMacierz(int**, int);
void wyswietlMacierz(int**, int, int);
void mnozMacierze(int**, int**, int**, int, int, int);
void uzupelnijMacierz(int**, int, int);

int main() {
    const int rzedyA = 2, kolumnyA = 3;
    const int rzedyB = 3, kolumnyB = 2;

    int **macierzA = alokujMacierz(rzedyA, kolumnyA);
    int **macierzB = alokujMacierz(rzedyB, kolumnyB);
    int **macierzWynik = alokujMacierz(rzedyA, kolumnyB);

    printf("Wprowadz dane do macierzy A (%dx%d):\n", rzedyA, kolumnyA);
    uzupelnijMacierz(macierzA, rzedyA, kolumnyA);
    printf("Wprowadz dane do macierzy B (%dx%d):\n", rzedyB, kolumnyB);
    uzupelnijMacierz(macierzB, rzedyB, kolumnyB);

    mnozMacierze(macierzA, macierzB, macierzWynik, rzedyA, rzedyB, kolumnyB);

    printf("Macierz wynikowa:\n");
    wyswietlMacierz(macierzWynik, rzedyA, kolumnyB);

    delokujMacierz(macierzA, rzedyA);
    delokujMacierz(macierzB, rzedyB);
    delokujMacierz(macierzWynik, rzedyA);
}

void uzupelnijMacierz(int** macierz, int rzedy, int kolumny) {
    for(int i = 0; i < rzedy; i++){
        for(int j = 0; j < kolumny; j++) {
            printf("[%d][%d]: ", i+1, j+1);
            scanf("%d", &macierz[i][j]);
        }
    }
}

int **alokujMacierz(int rzedy, int kolumny) {
    int **macierz = (int **)malloc(rzedy * sizeof(int *));
    for (int i = 0; i < rzedy; i++) {
        macierz[i] = (int *)malloc(kolumny * sizeof(int));
    }

    if (macierz == NULL) {
		puts ("Blad przydzialu pamieci, koniec");
		exit(EXIT_FAILURE);
	}

    return macierz;
}

void delokujMacierz(int** macierz, int rzedy) {
    for(int i = 0; i < rzedy; i++){
        free(macierz[i]);
    }
    free(macierz);
}

void wyswietlMacierz(int **macierz, int rzedy, int kolumny) {
    for (int i = 0; i < rzedy; i++) {
        for (int j = 0; j < kolumny; j++) 
            printf("%d ", macierz[i][j]);
        printf("\n");
    }
}

void mnozMacierze(int **macierzA, int **macierzB, int **macierzWynik, int rzedyA, int kolumnyA, int kolumnyB) {
    for (int i = 0; i < rzedyA; i++) {
        for (int j = 0; j < kolumnyB; j++) {
            macierzWynik[i][j] = 0;
            for (int k = 0; k < kolumnyA; k++) {
                macierzWynik[i][j] += macierzA[i][k] * macierzB[k][j];
            }
        }
    }
}