#include <stdio.h>

int countOccurences(char[], char);
int getStrLength(char[]);

int main() {
    char enteredString[255] = "";
    char charToCount;

    printf("Please enter a string: ");
    scanf("%s", enteredString);
    printf("Please enter the character to count: ");
    scanf(" %c", &charToCount);

    printf("The character '%c' occurs '%d' times.\n", charToCount, countOccurences(enteredString, charToCount));
}

int countOccurences(char enteredString[], char charToCount) {
    int occurences = 0;
    int strLength = getStrLength(enteredString);

    for (int x = 0; x < strLength; x++) {
        if (enteredString[x] == charToCount) {
            occurences++;
        }
    }

    return occurences;
}

int getStrLength(char enteredString[]) {
    int count;

    for (count = 0; enteredString[count] != '\0'; ++count);

    return count;
}

