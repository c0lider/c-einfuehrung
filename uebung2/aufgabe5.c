#include <stdio.h>

int main() {
    int firstNo, secondNo;

    printf("Please type in the first number: ");
    scanf("%d", &firstNo);

    printf("Please type in the second number: ");
    scanf("%d", &secondNo);

    if (secondNo % firstNo == 0) {
        printf("%d is a divisor of %d.\n", firstNo, secondNo);
    }
    else {
        printf("%d does not divide %d\n", firstNo, secondNo);
    }

    return(0);
}