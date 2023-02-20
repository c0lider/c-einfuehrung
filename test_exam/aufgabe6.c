#include <stdio.h>

int collatz(int number) {
    if (number % 2 == 0) {
        // even
        return number / 2;
    }    
    // odd
    return 3 * number + 1;
}

int main() {
    int userInput = -1;

    while (userInput < 1) {
        printf("Bitte eine Zahl größer 1 eingeben: ");
        scanf("%d", &userInput);
    }

    printf("%d ", userInput);

    while (userInput > 1) {
        userInput = collatz(userInput);
        printf("-> %d ", userInput);
    }

    printf("\n");
}