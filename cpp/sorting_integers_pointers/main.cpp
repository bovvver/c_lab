#include <iostream>

using namespace std;

void swap(int *ptr_x, int *ptr_y);
void sort(int arr[], int size);
void inputNumbers(int arr[], int size);
void displaySortedResult(int arr[], int size);

int main() {
    const int size = 10;
    int numbers[size];

    inputNumbers(numbers, size);
    sort(numbers, size);
    displaySortedResult(numbers, size);

    return 0;
}

void inputNumbers(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        cout << "Enter number " << i + 1 << ": ";
        cin >> arr[i];
    }
}

void displaySortedResult(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        cout << "[" << arr[i] << "] ";
    }
    cout << endl;
}

void sort(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                swap(&arr[j], &arr[j + 1]);
            }
        }
    }
}

void swap(int *ptr_x, int *ptr_y) {
    int tmp = *ptr_x;
    *ptr_x = *ptr_y;
    *ptr_y = tmp;
}
