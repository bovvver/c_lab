#include <stdio.h>

int main() {
    int liczba1, liczba2;

    puts("Podaj pierwsza liczbe: ");
    scanf("%d", &liczba1);
    puts("Podaj druga liczbe: ");
    scanf("%d", &liczba2);

    if(liczba2 == 0) puts("Nie mozna dzielic przez 0.");
    else if(liczba1 % liczba2 == 0) puts("Pierwsza liczba jest podzielna przez druga.");
    else puts("Pierwsza liczba nie jest podzielna przez druga.");
    
    return 0;
}