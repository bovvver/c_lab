#include <stdio.h>

float calculateAverage(float array[], int size) {
    float sum = 0.0;

    for (int i = 0; i < size; i++) {
        sum += array[i];
    }

    if (size > 0) {
        return sum / size;
    } else {
        return 0.0;
    }
}

int main() {
    int size;

    printf("Enter the size of the array: ");
    scanf("%d", &size);

    float array[size];

    printf("Enter %d floating-point numbers:\n", size);
    for (int i = 0; i < size; i++) {
        scanf("%f", &array[i]);
    }

    float average = calculateAverage(array, size);
    printf("Average of floating-point numbers: %.2f\n", average);

    return 0;
}
