#include <stdio.h>

int liczba_konwertowana[64];
long int liczba_do_konwersji;
int podstawa;
int cyfra = 0;

void podaj_liczba_podstawa (void) {
	printf("Jaka liczba do konwersji:");
	scanf("%ld", &liczba_do_konwersji);	

    if(liczba_do_konwersji == 0) return;

    while(1) {
	    printf("Jaka podstawa:");
	    scanf("%i", &podstawa);

	    if (podstawa < 2 || podstawa > 16) printf("Nieprawidłowa podstawa - od 2 do 16\n");
	    else break;
    }
    cyfra = 0;
}

void konwertowanie_liczby(void) {
    if(liczba_do_konwersji == 0) return;

    int kopia_do_konwersji = liczba_do_konwersji;
    do {
	    liczba_konwertowana[cyfra] = kopia_do_konwersji % podstawa;
		++cyfra;
		kopia_do_konwersji /= podstawa;
	} while ( kopia_do_konwersji != 0);	
}

void druk_po_konwersji(void) {
    if(liczba_do_konwersji == 0) return;

	const char cyfry[16] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9', 'A', 'B', 'C', 'D', 'E', 'F'};
	int kolejna_cyfra;
	
    printf("Przekonwertowana liczba: ");
	for( --cyfra; cyfra >= 0; --cyfra) {
		kolejna_cyfra = liczba_konwertowana[cyfra];
		printf("%c", cyfry[kolejna_cyfra]);
	}
	printf("\n");	
}

int main(int argc, char *argv[]) {
    void podaj_liczba_podstawa (void);
    void konwertowanie_liczby(void);
    void druk_po_konwersji(void);
	
    do {
        podaj_liczba_podstawa ();
        konwertowanie_liczby();
        druk_po_konwersji();
    } while(liczba_do_konwersji != 0);

    return 0;
}
