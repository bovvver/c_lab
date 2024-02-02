#include <stdio.h>
#include <stdbool.h>

bool isPrime(int number) {
    if (number <= 1)
        return false;

    for (int i = 2; i * i <= number; i++)
        if (number % i == 0) return false;

    return true;
}

int main() {
    int number;

    printf("Enter a number to check: ");
    scanf("%d", &number);

    if (isPrime(number)) 
        printf("%d is a prime number.", number);
    else 
        printf("%d is a composite number.", number);
    
    return 0;
}
