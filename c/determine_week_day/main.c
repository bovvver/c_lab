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

int getDayOfWeekNumber(int year, int month, int day) {
    return (findN(year, month, day) - 621049) % 7;
}

void returnDayOfWeek(int dayNumber) {
    switch (dayNumber) {
    case 1:
        printf("Monday");
        break;
    case 2:
        printf("Tuesday");
        break;
    case 3:
        printf("Wednesday");
        break;
    case 4:
        printf("Thursday");
        break;
    case 5:
        printf("Friday");
        break;
    case 6:
        printf("Saturday");
        break;
    case 7:
        printf("Sunday");
        break;
    default:
        printf("Invalid day number");
        break;
    }
}

int main() {
    int day, month, year;

    printf("Enter the date in the format DD MM YYYY: ");
    scanf("%d %d %d", &day, &month, &year);

    returnDayOfWeek(getDayOfWeekNumber(year, month, day));

    return 0;
}
