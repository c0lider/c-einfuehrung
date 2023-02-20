#include <stdio.h>

void printArray(int *array, int length) {
    for (int i = 0; i < length; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");
}

int getArraySum(int *array, int length) {
    int sum = 0;
    for (int i = 0; i < length; i++) {
        sum += array[i];
    }
    return sum;
}

char* getDescribingString(int firstNumber, int secondNumber) {
    if (firstNumber > secondNumber) {
        return "groesser als";
    }
    if (firstNumber < secondNumber) {
        return "kleiner als";
    }
    return "genauso gross wie";
}


int main() {
    int odds[10];
    int evens[10];
    int oddsCounter = 0;
    int evensCounter = 0;

    int loopCounter = 0;
    int currentInput;

    printf("Bitte geben Sie 10 Ganzzahlen ein:\n");

    while (loopCounter < 10) {
        printf("Zahl %d: ", loopCounter + 1);

        scanf("%d", &currentInput);

        if (currentInput % 2 == 0) {
            // even
            evens[evensCounter] = currentInput;
            evensCounter++;
        }
        else {
            // odd
            odds[oddsCounter] = currentInput;
            oddsCounter++;
        }
        loopCounter++;
    }

    printf("Ungerade Zahlen: ");
    printArray(odds, oddsCounter);

    printf("Gerade Zahlen: ");
    printArray(evens, evensCounter);

    int evensSum = getArraySum(evens, evensCounter);
    int oddsSum = getArraySum(odds, oddsCounter);
    char *comparisonStr = getDescribingString(evensSum, oddsSum);


    printf("Die Summe der geraden Zahlen (%d) ist %s die Summe der ungeraden Zahlen (%d).\n", evensSum, comparisonStr, oddsSum);
}

