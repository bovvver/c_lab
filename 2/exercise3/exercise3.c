#include <stdio.h>

int silnia(int podstawa) {
    if (podstawa == 1) return 1;
    return podstawa * silnia(podstawa - 1);
}

int main() {
    for(int i=1; i<=10; i++) 
        printf("%d! = %d\n", i, silnia(i));
    
    return 0;
}