#include <stdio.h>

void roznica_czasu(int g1, int m1, int s1, int g2, int m2, int s2, int *roznica_g, int *roznica_m, int *roznica_s) {
    int roznica_s_calkowita, roznica_m_calkowita;

    roznica_s_calkowita = s2 - s1;
    if (roznica_s_calkowita < 0) {
        roznica_s_calkowita += 60;
        m2--;
    }

    roznica_m_calkowita = m2 - m1;
    if (roznica_m_calkowita < 0) {
        roznica_m_calkowita += 60;
        g2--;
    }

    *roznica_g = g2 - g1;
    *roznica_m = roznica_m_calkowita;
    *roznica_s = roznica_s_calkowita;

    if (*roznica_g < 0) {
        *roznica_g += 24;
    }
}

void wyswietl_roznice(int roznica_g, int roznica_m, int roznica_s) {
    printf("Roznica czasu: %02d:%02d:%02d\n", roznica_g, roznica_m, roznica_s);
}

int main() {
    int godziny1, minuty1, sekundy1;
    int godziny2, minuty2, sekundy2;

    printf("Podaj pierwszy punkt w czasie (godziny minuty sekundy): ");
    scanf("%d %d %d", &godziny1, &minuty1, &sekundy1);

    printf("Podaj drugi punkt w czasie (godziny minuty sekundy): ");
    scanf("%d %d %d", &godziny2, &minuty2, &sekundy2);

    int roznica_g, roznica_m, roznica_s;

    roznica_czasu(godziny1, minuty1, sekundy1, godziny2, minuty2, sekundy2, &roznica_g, &roznica_m, &roznica_s);

    wyswietl_roznice(roznica_g, roznica_m, roznica_s);

    return 0;
}
