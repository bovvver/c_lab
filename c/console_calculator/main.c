#include <stdio.h>

float addition(float a, float b) {
    return a + b;
}

float subtraction(float a, float b) {
    return a - b;
}

float multiplication(float a, float b) {
    return a * b;
}

float division(float a, float b) {
    if (b == 0) {
        puts("Forbidden operation.");
        return a;
    } else {
        return a / b;
    }
}

float performOperation(float result, float input, char operator) {
    switch (operator) {
        case 'A':
        case 'a':
            return input;
        case '+':
            return addition(result, input);
        case '-':
            return subtraction(result, input);
        case '*':
            return multiplication(result, input);
        case '/':
            return division(result, input);
        default:
            puts("Invalid operator");
            return result;
    }
}

int main() {
    char operator;
    float input, result = 0;

    while (1) {
        fputs("Number: ", stdout);
        scanf("%f", &input);

        fflush(stdin);

        fputs("Operator: ", stdout);
        scanf(" %c", &operator);

        if (operator == 'k' || operator == 'K') break;

        result = performOperation(result, input, operator);

        printf("%f\n", result);
    }

    return 0;
}
