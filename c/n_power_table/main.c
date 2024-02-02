#include <stdio.h>

void insertDivider() {
    puts("|-----|-----|");
}

void insertHeader() {
    insertDivider();
    printf("|%5s|%5s|\n", "n", "n^2");
    insertDivider();
}

int main() {
    insertHeader();

    for (int i = 1; i <= 10; i++) {
        printf("|%5d|%5d|\n", i, i * i);
    }

    insertDivider();

    return 0;
}