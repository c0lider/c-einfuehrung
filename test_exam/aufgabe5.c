#include <stdio.h>

int quersumme(int number) {
    int modul = 10;
    int quersumme = 0;
    int remainder;

    while (number > 0) {
        remainder = number % modul;
        quersumme += remainder;
        number = (number - remainder) / modul;
    }

    return quersumme;
}

int main() {
    int userInput;

    printf("Bitte eine mehrstellige Zahl eingeben: ");

    scanf("%d", &userInput);

    printf("%d ", userInput);

    while (userInput > 9) {
        userInput = quersumme(userInput);
        printf("-> %d ", userInput);
    }
    
    printf("\n");
}