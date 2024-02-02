#include <stdio.h>

int convertedNumber[64];
long int numberToConvert;
int base;
int digit = 0;

void enterNumberBase(void) {
    printf("Enter the number to convert: ");
    scanf("%ld", &numberToConvert);

    if (numberToConvert == 0) return;

    while (1) {
        printf("Enter the base: ");
        scanf("%i", &base);

        if (base < 2 || base > 16) 
            printf("Invalid base - must be between 2 and 16\n");
        else 
            break;
    }
    digit = 0;
}

void convertNumber(void) {
    if (numberToConvert == 0) return;

    int copyToConvert = numberToConvert;
    do {
        convertedNumber[digit] = copyToConvert % base;
        ++digit;
        copyToConvert /= base;
    } while (copyToConvert != 0);
}

void printAfterConversion(void) {
    if (numberToConvert == 0) return;

    const char digits[16] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9', 'A', 'B', 'C', 'D', 'E', 'F'};
    int nextDigit;

    printf("Converted number: ");
    for (--digit; digit >= 0; --digit) {
        nextDigit = convertedNumber[digit];
        printf("%c", digits[nextDigit]);
    }
    printf("\n");
}

int main(int argc, char *argv[]) {
    void enterNumberBase(void);
    void convertNumber(void);
    void printAfterConversion(void);

    do {
        enterNumberBase();
        convertNumber();
        printAfterConversion();
    } while (numberToConvert != 0);

    return 0;
}
