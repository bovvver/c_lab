#include <stdio.h>
#include <stdbool.h>

int main(int argc, char *argv[]) {
	bool czy_pierwsza;
    printf("2  ");

	for (int i = 3; i <= 50; i+=2) {
		czy_pierwsza = true;
		for (int j = 3; j < i; j+=2) {
			if(i % j == 0) {
                czy_pierwsza = false;
                break;
            }
		}
		if( czy_pierwsza == true ) printf( "%i  ", i);
	}
	printf("\n");

	return 0;
}