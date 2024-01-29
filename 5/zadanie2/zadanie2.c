#include <stdio.h>

float modul(float);
float pierwiastek_kwadratowy (float x, const float epsilon) {
	if (x < 0) {
		printf("Przekazano parametr mniejszy od 0 do funkcji!\n");
		return -1;
	}

	float pierwiastek = 1.0;

	while (modul((pierwiastek*pierwiastek - x) / x) >= epsilon) {
		pierwiastek = (x / pierwiastek + pierwiastek) / 2.0;
        printf("Pierwiastek w petli while: %f\n", pierwiastek);
    }

	return pierwiastek;
}

int main(int argc, char *argv[]) {
	printf("pierwiastek z 2.0 = %f\n\n", pierwiastek_kwadratowy(-2.0, 0.000001));
	printf("pierwiastek z 2.0 = %f\n\n", pierwiastek_kwadratowy(2.0, 0.000002));
	printf("pierwiastek z 2.0 = %f\n\n", pierwiastek_kwadratowy(2.0, 0.003000));
	printf("pierwiastek z 2.0 = %f\n\n", pierwiastek_kwadratowy(2.0, 0.100000));
	
	return 0;
}

float modul(float x) {
	if (x < 0)
		x = -x;
	return x;
}
