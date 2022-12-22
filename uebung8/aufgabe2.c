#include <stdio.h>

double square_root(double x) {
    double y = 1;
    double A = 0;

    while (x - y > 0.000001) {
        A = x * y;
        x = (x + y) / 2;
        y = A / x;
    }

    return x;
}

int main() {
    double y;
    printf("Please type in a number: ");
    scanf(" %lf", &y);

    printf("Quadratwurzel von %lf: %lf\n", y, square_root(y));

    return(0);
}