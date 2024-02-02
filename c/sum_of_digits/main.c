#include <stdio.h>

int digitSum(int number) {
    int sum = 0;

    while (number != 0) {
        sum += number % 10;
        number /= 10;
    }

    return sum;
}

int main() {
    int number;

    printf("Enter an integer: ");
    scanf("%d", &number);

    int result = digitSum(number);

    printf("The sum of digits in the number %d is: %d\n", number, result);

    return 0;
}