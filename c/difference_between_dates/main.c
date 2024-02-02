#include <stdio.h>
#include <stdlib.h>

int function1(int year, int month) {
    return month <= 2 ? year - 1 : year;
}

int function2(int month) {
    return month <= 2 ? month + 13 : month + 1;
}

int findN(int year, int month, int day) {
    return 1461 * function1(year, month) / 4 + 153 * function2(month) / 5 + day;
}

int main() {
    int day1, month1, year1;
    int day2, month2, year2;

    printf("Enter the first date in the format DD MM YYYY: ");
    scanf("%d %d %d", &day1, &month1, &year1);

    printf("Enter the second date in the format DD MM YYYY: ");
    scanf("%d %d %d", &day2, &month2, &year2);

    int n1 = findN(year1, month1, day1);
    int n2 = findN(year2, month2, day2);

    printf("The number of days between these dates is: %d", abs(n1 - n2));

    return 0;
}
