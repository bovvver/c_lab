#include <iostream>

using namespace std;

inline int square(int side) {
    return side * side;
}

inline int cube(int side) {
    return side * side * side;
}

int main() {
    char choice;
    int side, area, volume;

    do {
        cout << "\nEnter side length: ";
        cin >> side;

        area = square(side);
        volume = cube(side);

        cout << "\nSquare area: " << area << endl;
        cout << "Cube volume: " << volume << endl;

        cout << "\nDo you want to continue? (y/n): ";
        cin >> choice;
    } while (choice == 'y' || choice == 'Y');

    return 0;
}
