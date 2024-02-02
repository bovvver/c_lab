#include <stdio.h>

int factorial(int base) {
    if (base == 1) return 1;
    return base * factorial(base - 1);
}

int main() {
    for (int i = 1; i <= 10; i++) 
        printf("%d! = %d\n", i, factorial(i));
    
    return 0;
}