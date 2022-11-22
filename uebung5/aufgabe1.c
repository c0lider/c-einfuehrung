#include <stdio.h>

int getInteger();
void printOddNumbers(int);
void printEvenNumbers(int);

int main() {
    int input = getInteger();

    printOddNumbers(input);
    printEvenNumbers(input);

    return 0;
}

int getInteger() {
    int userNumber;

    while (1){
        printf("Please type in a positive integer: ");
        scanf(" %d", &userNumber);
        if (userNumber > 0) {
            return userNumber;
        }

        printf("'%d' is not a positive integer. ", userNumber);
    } 
}

void printOddNumbers(int number) {
    printf("Odd numbers: ");
    int loopCounter = 0;

    while (loopCounter <= number) {
        if (loopCounter% 2 == 1) {
            printf("%d ", loopCounter);
        }
        loopCounter++;
    }
    printf("\n");
}

void printEvenNumbers(int number) {
    printf("Even numbers: ");

    while (number >= 0) {
        if (number % 2 == 0) {
            printf("%d ", number);
        }
        number--;
    }
    printf("\n");
}