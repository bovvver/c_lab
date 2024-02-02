#include <iostream>

using namespace std;

inline int kwadrat(int b);
inline int szescian(int b); 

int main() {
    char wybor;
    int bok, pole, objetosc;
    
    do {
        cout << "\nPodaj bok: ";
        cin >> bok;

        pole = kwadrat(bok);
        objetosc = szescian(bok);

        cout << "\nPole kwadratu wynosi: " << pole << endl;
        cout << "Objetosc szescianu wynosi: " << objetosc << endl;

        cout << "\nCzy chcesz kontynuowac? (t/n): ";
        cin >> wybor;
    } while (wybor == 't' || wybor == 'T');

    return 0;
}

inline int kwadrat(int b) {
    return b * b;
}

inline int szescian(int b) {
    return b * b * b;
}