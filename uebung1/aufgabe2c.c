#include <stdio.h>

int main() {
    double zahl;

    printf("Bitte eine Fliesskommazahl eingeben: ");
    scanf("%lf", &zahl);

    printf("Ihre Zahl lautet %f\n", zahl);
    return 0;
}