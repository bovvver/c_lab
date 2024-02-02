#include <stdio.h>

int main() {
    int number1, number2;

    puts("Enter the first number: ");
    scanf("%d", &number1);
    puts("Enter the second number: ");
    scanf("%d", &number2);

    if (number2 == 0)
        puts("Cannot divide by 0.");
    else if (number1 % number2 == 0)
        puts("The first number is divisible by the second.");
    else
        puts("The first number is not divisible by the second.");

    return 0;
}