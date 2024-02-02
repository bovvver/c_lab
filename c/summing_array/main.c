#include <stdio.h>

int arraySum(int array[], int size) {
    int result = 0;

    for (int i = 0; i < size; i++)
        result += array[i];

    return result;
}

int main() {
    int array[] = {1, 2, 3, 4, 5};
    int size = sizeof(array) / sizeof(array[0]);

    int sum = arraySum(array, size);

    printf("Sum of array elements: %d\n", sum);

    return 0;
}
