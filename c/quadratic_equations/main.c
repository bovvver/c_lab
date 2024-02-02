#include <stdio.h>
#include <math.h>

double newtonRaphsonMethod(double a, double b, double c, double x0, double epsilon) {
    double x = x0;
    double f, f_derivative;

    do {
        f = a * x * x + b * x + c;
        f_derivative = 2 * a * x + b;

        x = x - f / f_derivative;
    } while (fabs(f) > epsilon);

    return x;
}

int main() {
    double a, b, c;

    printf("Enter coefficients a, b, c (separated by spaces): ");
    scanf("%lf %lf %lf", &a, &b, &c);

    double x0;
    printf("Enter the initial approximation of the root: ");
    scanf("%lf", &x0);

    double epsilon;
    printf("Enter the computation accuracy (epsilon): ");
    scanf("%lf", &epsilon);

    double root = newtonRaphsonMethod(a, b, c, x0, epsilon);

    printf("Root of the quadratic equation: %lf\n", root);

    return 0;
}