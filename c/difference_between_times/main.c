#include <stdio.h>

void timeDifference(int h1, int m1, int s1, int h2, int m2, int s2, int *diff_h, int *diff_m, int *diff_s) {
    int total_diff_s, total_diff_m;

    total_diff_s = s2 - s1;
    if (total_diff_s < 0) {
        total_diff_s += 60;
        m2--;
    }

    total_diff_m = m2 - m1;
    if (total_diff_m < 0) {
        total_diff_m += 60;
        h2--;
    }

    *diff_h = h2 - h1;
    *diff_m = total_diff_m;
    *diff_s = total_diff_s;

    if (*diff_h < 0) {
        *diff_h += 24;
    }
}

void displayDifference(int diff_h, int diff_m, int diff_s) {
    printf("Time difference: %02d:%02d:%02d\n", diff_h, diff_m, diff_s);
}

int main() {
    int hours1, minutes1, seconds1;
    int hours2, minutes2, seconds2;

    printf("Enter the first time point (hours minutes seconds): ");
    scanf("%d %d %d", &hours1, &minutes1, &seconds1);

    printf("Enter the second time point (hours minutes seconds): ");
    scanf("%d %d %d", &hours2, &minutes2, &seconds2);

    int diff_h, diff_m, diff_s;

    timeDifference(hours1, minutes1, seconds1, hours2, minutes2, seconds2, &diff_h, &diff_m, &diff_s);

    displayDifference(diff_h, diff_m, diff_s);

    return 0;
}
