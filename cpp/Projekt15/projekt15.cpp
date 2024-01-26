// Projekt 15
// Wzorując się na projekcie napisz program dla kuli jednostkowej, którą z pozycji startowej można przesuwać do wskazanej z klawiatury pozycji.

#include <iostream>

using namespace std;

class Punkt {
public:
    Punkt(double ux = 0.0, double uy = 0.0, double k = 1.0);
    void przesun(char kierunek);
    void pokaz() const;

private:
    double x, y;
    const double skok;
};

Punkt::Punkt(double ux, double uy, double k) : skok(k) {
    x = ux;
    y = uy;
}

void Punkt::przesun(char kierunek) {
    switch (tolower(kierunek)) {
        case 'g':
            y += skok;
            break;
        case 'd':
            y -= skok;
            break;
        case 'p':
            x += skok;
            break;
        case 'l':
            x -= skok;
            break;
        default:
            cout << "Nieprawidłowy kierunek. Dopuszczalne wartości to 'g', 'd', 'l' lub 'p'." << endl;
    }
}

void Punkt::pokaz() const {
    cout << "Skok = " << skok << " x = " << x << " y = " << y << endl;
}

int main() {
    double startowyX, startowyY, skok;
    
    cout << "Podaj wspolrzedna x startowa: ";
    cin >> startowyX;

    cout << "Podaj wspolrzedna y startowa: ";
    cin >> startowyY;

    cout << "Podaj skok: ";
    cin >> skok;

    Punkt nowyPunkt(startowyX, startowyY, skok);

    cout << "Dane startowe " << endl;
    nowyPunkt.pokaz();

    char kierunek;

    while (true) {
        cout<<"g - gora, d - dol, l - lewo, p - prawo"<<endl;
        cout << "W którą stronę chcesz się przemieścić? Wprowadź 'g', 'd', 'l' lub 'p'. Wpisz 'q' aby zakończyć: ";
        cin >> kierunek;

        if (kierunek == 'q') {
            break;
        }

        nowyPunkt.przesun(kierunek);

        cout << "Nowe położenie " << endl;
        nowyPunkt.pokaz();
    }

    return 0;
}
