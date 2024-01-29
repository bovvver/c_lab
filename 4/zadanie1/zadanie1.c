#include <stdio.h>

int main(int argc, char *argv[]) {
	int liczniki_ocen[11], i, ocena;

	for ( i = 1; i < 11; ++i)
		liczniki_ocen[ i ] = 0;	

	printf ( "Podaj ocenę od 1 do 10;\n");

	while(1) {
		scanf ( "%i", &ocena);

		if(ocena == 999) break;

		if ( ocena < 1 || ocena > 10)
			printf ( "Zła odpowiedź; %i\n", ocena);
		else
			++liczniki_ocen[ ocena ];
	}

	printf ( "\n\nOcena			Ile odpowiedzi\n");
	for ( i = 1; i < 11; ++i)
		printf ( "%4i%14i\n", i, liczniki_ocen[ i ]);
	return 0;
}
