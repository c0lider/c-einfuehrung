#include <stdio.h>

int main() {
    int number;

    printf("Please type in a number: ");
    scanf("%d", &number);

    if (number > 0) {
        printf("%d is a positive integer.\n", number);
    }
    else if (number < 0) {
        printf("%d is a negative integer.\n", number);
    } 
    else {
        printf("%d is zero.\n", number);
    }

    return(0);
}