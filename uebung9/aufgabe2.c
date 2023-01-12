#include <stdio.h>
#include <math.h>
#include <complex.h>

int main() {
    double a;
    double b;
    double c;
    double d;

    printf("This is your zero point calculator! \n");

    printf("Please type in parameter 'a': ");
    scanf(" %lf", &a);

    printf("Please type in parameter 'b': ");
    scanf(" %lf", &b);

    printf("Please type in parameter 'c': ");
    scanf(" %lf", &c);

    printf("Calculating zero points for: f(x) = (%.2lf)x^2 + (%.2lf)x + (%.2lf)\n", a, b, c);

    b = b / a;
    c = c / a;
 
    d = ((b * b) / 4) - c;

    if (d > 0) {
        printf(" %lf and ", -(b/2) + sqrt(d));
        printf(" %lf are the solutions.\n", - (b/2) - sqrt(d));
    }
    else if (d == 0) {
        printf("%.2lf is the only solution.\n", -b/2);
    }
    else {
        double complex x1 = -(b/2) + sqrt(-d) * I;
        double complex x2 = -(b/2) - sqrt(-d) * I;

        printf("The complex solutions to your function are: \n\tx1=%.2lf+%.2lfi\n\tx2=%.2lf+%.2lfi\n", creal(x1), cimag(x1), creal(x2), cimag(x2));
    }

}

