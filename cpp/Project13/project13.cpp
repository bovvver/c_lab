#include <iostream>

using namespace std;

class Odcinek {
    public:
        float poczatek;
        float koniec;

    void pokaz() {
        cout<<"Odcinek od "<<poczatek<<" do "<<koniec<<endl<<endl;
    }
};

int main(int argc, char** argv) {
	Odcinek nowyOdcinek;
	Odcinek * odcinek_wsk;
	Odcinek & odcinek_ref = nowyOdcinek;

    nowyOdcinek.poczatek = 1.01;
    nowyOdcinek.koniec = 2.02;

	cout<<"== Nazwa obiektu =="<<endl;
    nowyOdcinek.pokaz();

    odcinek_ref.poczatek = 2.02;
    odcinek_ref.koniec = 3.03; 

    cout<<"== Referencja obiektu =="<<endl;
    odcinek_ref.pokaz();

    odcinek_wsk = &nowyOdcinek;
	odcinek_wsk -> poczatek = 3.03;
	odcinek_wsk -> koniec = 4.04;
	cout<<"== Wskaznik obiektu =="<<endl;
	odcinek_wsk -> pokaz();

    return 0;
}