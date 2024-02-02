#include <stdio.h>
#include <math.h>

double metodaNewtonaRaphsona(double a, double b, double c, double x0, double epsilon) {
    double x = x0;
    double f, f_pochodna;

    do {
        f = a * x * x + b * x + c;
        f_pochodna = 2 * a * x + b;

        x = x - f / f_pochodna;
    } while (fabs(f) > epsilon);

    return x;
}

int main() {
    double a, b, c;

    printf("Podaj wspolczynniki a, b, c (oddzielone spacjami): ");
    scanf("%lf %lf %lf", &a, &b, &c);

    double x0;
    printf("Podaj poczatkowe przyblizenie pierwiastka: ");
    scanf("%lf", &x0);

    double epsilon;
    printf("Podaj dokladnosc obliczen (epsilon): ");
    scanf("%lf", &epsilon);

    double pierwiastek = metodaNewtonaRaphsona(a, b, c, x0, epsilon);

    printf("Pierwiastek rownania kwadratowego: %lf\n", pierwiastek);

    return 0;
}
