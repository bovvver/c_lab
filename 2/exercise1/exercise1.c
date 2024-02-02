#include <stdio.h>

void wstawPodzial() {
    puts("|-----|-----|");
}

void wstawNaglowek() {
    wstawPodzial();
    printf("|%5s|%5s|\n", "n", "n^2");
    wstawPodzial();
}

int main() {
    wstawNaglowek();

    for(int i=1; i<=10; i++){
        printf("|%5d|%5d|\n", i, i*i);
    }

    wstawPodzial();

    return 0;
}