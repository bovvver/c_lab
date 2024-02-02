#include <stdio.h>
#include <string.h>

void convertToRoman(int number) {
    int arabic[] = {1, 4, 5, 9, 10, 40, 50, 90, 100, 400, 500, 900, 1000};
    char *roman[] = {"I", "IV", "V", "IX", "X", "XL", "L", "XC", "C", "CD", "D", "CM", "M"};

    int counter = 12;
    while (number > 0) {
        int timesExecuted = number / arabic[counter];
        number = number % arabic[counter];

        while (timesExecuted--) {
            printf("%s", roman[counter]);
        }
        counter--;
    }
    printf("\n");
}

void convertToArabic(char* romanNumber) {
    int length = strlen(romanNumber);
    int number = 0;
    int previousNumber = 0;
    int result = 0;

    for (int i = length - 1; i >= 0; i--) {
        switch (romanNumber[i]) {
            case 'I':
                number = 1;
                break;
            case 'V':
                number = 5;
                break;
            case 'X':
                number = 10;
                break;
            case 'L':
                number = 50;
                break;
            case 'C':
                number = 100;
                break;
            case 'D':
                number = 500;
                break;
            case 'M':
                number = 1000;
                break;
        }

        if (number < previousNumber) {
            result -= number;
        } else {
            result += number;
        }

        previousNumber = number;
    }

    printf("%d", result);
}

int main() {
    int number;
    char romanNumber[100];

    printf("Enter an Arabic number: ");
    scanf("%d", &number);
    convertToRoman(number);

    printf("Enter a Roman number: ");
    scanf("%s", romanNumber);
    convertToArabic(romanNumber);

    return 0;
}
