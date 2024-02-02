#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Version -123 = 321-
char* reverseNumber(const char* number) {
    int length = strlen(number);

    char* result = (char*)malloc(sizeof(char) * (length + 1));

    if (result == NULL) {
        perror("Memory allocation error");
        exit(EXIT_FAILURE);
    }

    int resultIndex = length;

    for (int i = 0; i < length; i++) {
        resultIndex--;
        result[resultIndex] = number[i];
    }

    result[length] = '\0';

    return result;
}

// Version -123 = -321
char* reverseNumber2(const char* number) {
    int length = strlen(number);
    int start = 0;

    if (number[0] == '-') {
        start = 1;
        length--;
    }

    char* result = (char*)malloc(sizeof(char) * (length + 2));

    if (result == NULL) {
        perror("Memory allocation error");
        exit(EXIT_FAILURE);
    }

    int resultIndex = length + start;

    if (start)
        result[0] = '-';

    for (int i = start; i < length + start; i++) {
        resultIndex--;
        result[resultIndex] = number[i];
    }

    result[length + start] = '\0';

    return result;
}

int main() {
    char number[100];

    puts("Enter a number to reverse: ");
    scanf("%s", number);

    char* reversedNumber = reverseNumber(number);
    char* reversedNumber2 = reverseNumber2(number);

    printf("Original number: %s\n", number);
    printf("Reversed number: %s\n", reversedNumber);
    printf("Reversed number 2: %s\n", reversedNumber2);

    free(reversedNumber);

    return 0;
}