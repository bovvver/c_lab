#include <stdio.h>
#include <stdbool.h>

bool pierwsza(int liczba) {
    if (liczba <= 1)
        return 0;

    for (int i = 2; i * i <= liczba; i++)
        if (liczba % i == 0) return 0;

    return 1;
}

int main() {
    int liczba;

    printf("Podaj liczbe do sprawdzenia: ");
    scanf("%d", &liczba);

    if (pierwsza(liczba)) printf("%d jest liczba pierwsza.", liczba);
    else printf("%d jest liczba zlozona.", liczba);
    
    return 0;
}