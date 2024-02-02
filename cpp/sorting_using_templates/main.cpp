#include <iostream>

using namespace std;

template <typename T>
void swap(T &a, T &b) {
    T tmp = a;
    a = b;
    b = tmp;
}

template <typename T>
void sort(T arr[], int size) {
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                swap(arr[j], arr[j + 1]);
            }
        }
    }
}

template <typename T>
void inputAndSort(const string type) {
    const int size = 10;
    cout << type << ":\n";
    T data[size];
    for (int i = 0; i < size; i++) {
        cout << "Enter data[" << i << "]: ";
        cin >> data[i];
    }
    sort(data, size);
    for (int i = 0; i < size; i++) {
        cout << "[" << data[i] << "] ";
    }
    cout << endl << endl;
}

int main() {
    inputAndSort<int>("Integers");
    inputAndSort<double>("Real numbers");
    inputAndSort<string>("Text");

    return 0;
}
