#include <stdio.h>

int fibonacci(int number) {
    if (number == 1 || number == 2) {
        return 1;
    }
    return fibonacci(number - 1) + fibonacci(number -2);
}

int main() {
    int userInput = 0;

    while (userInput < 3 || userInput > 40) {
        printf("Bitte eine Ganzzahl n eingeben (3 <= n <= 40: ");
        scanf(" %d", &userInput);
    }

    int counter = 1;
    while (counter <= userInput) {
        printf("%d ", fibonacci(counter));
        counter++;
    }
    printf("\n");
}