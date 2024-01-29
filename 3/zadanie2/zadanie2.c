#include <stdio.h>

int main() {
    int liczba1, liczba2;

    puts("Podaj pierwsza liczbe: ");
    scanf("%d", &liczba1);
    puts("Podaj druga liczbe: ");
    scanf("%d", &liczba2);

    if(liczba2 == 0) puts("Nie mozna dzielic przez 0.");
    else {
        float wynik = (float)liczba1 / liczba2;
        printf("liczba1 / liczba2 = %.4f", wynik);
    }
    
    return 0;
}