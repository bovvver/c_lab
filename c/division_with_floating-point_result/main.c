#include <stdio.h>

int main() {
    int number1, number2;

    puts("Enter the first number: ");
    scanf("%d", &number1);
    puts("Enter the second number: ");
    scanf("%d", &number2);

    if (number2 == 0)
        puts("Cannot divide by 0.");
    else {
        float result = (float)number1 / number2;
        printf("number1 / number2 = %.4f", result);
    }

    return 0;
}