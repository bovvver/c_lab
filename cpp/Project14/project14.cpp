#include <iostream>

using namespace std;

class Odcinek {
    private:
        float poczatek;
        float koniec;
    public:
        float pobierz_poczatek() const;
        float pobierz_koniec() const;
        void wpisz_poczatek(float nowy_poczatek);
        void wpisz_koniec(float nowy_koniec);
        void pokaz() const;
};

    float Odcinek::pobierz_poczatek() const { return poczatek; }
    float Odcinek::pobierz_koniec() const { return koniec; }
    void Odcinek::wpisz_poczatek(float nowy_poczatek) { poczatek = nowy_poczatek; }
    void Odcinek::wpisz_koniec(float nowy_koniec) { koniec = nowy_koniec; }
    void Odcinek::pokaz() const {
        std::cout << "Odcinek od " << poczatek << " do " << koniec << std::endl << std::endl;
    }


int main(int argc, char** argv) {
	Odcinek nowyOdcinek;
	Odcinek * odcinek_wsk;
	Odcinek & odcinek_ref = nowyOdcinek;

    nowyOdcinek.wpisz_poczatek(1.01);
    nowyOdcinek.wpisz_koniec(2.02);

	cout<<"== Nazwa obiektu =="<<endl;
    nowyOdcinek.pokaz();
    nowyOdcinek.pobierz_poczatek();

    odcinek_ref.wpisz_poczatek(2.02);
    odcinek_ref.wpisz_koniec(3.03); 

    cout<<"== Referencja obiektu =="<<endl;
    odcinek_ref.pokaz();

    odcinek_wsk = &nowyOdcinek;
	odcinek_wsk -> wpisz_poczatek(3.03);
	odcinek_wsk -> wpisz_koniec(4.04);

	cout<<"== Wskaznik obiektu =="<<endl;
	odcinek_wsk -> pokaz();

    return 0;
}