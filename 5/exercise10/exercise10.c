#include <stdio.h>

void macierz_transpozycja(int wiersze, int kolumny, int macierz[wiersze][kolumny]) {
    int transponowana[kolumny][wiersze];

    printf("Macierz po transpozycji:\n");
    for (int i = 0; i < kolumny; i++) {
        for (int j = 0; j < wiersze; j++) {
            transponowana[i][j] = macierz[j][i];
            printf("%d ", transponowana[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int wiersze, kolumny;

    printf("Podaj ilość wierszy: ");
    scanf("%d", &wiersze);

    printf("Podaj ilość kolumn: ");
    scanf("%d", &kolumny);

    int macierz[wiersze][kolumny];

    printf("Podaj elementy macierzy (%d x %d):\n", wiersze, kolumny);
    for (int i = 0; i < wiersze; i++) {
        for (int j = 0; j < kolumny; j++) {
            scanf("%d", &macierz[i][j]);
        }
    }

    printf("Tablica przed transpozycja:\n");
    for (int i = 0; i < wiersze; i++) {
        for (int j = 0; j < kolumny; j++) {
            printf("%d ", macierz[i][j]);
        }
        printf("\n");
    }

    macierz_transpozycja(wiersze, kolumny, macierz);

    return 0;
}
