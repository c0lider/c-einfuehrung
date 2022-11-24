#include <stdio.h>

void reverseString(char[]);
int getStrLength(char[]);

int main() {
    char enteredString[255];

    printf("Please enter a string: ");
    scanf("%s", enteredString);

    reverseString(enteredString);
}

void reverseString(char enteredString[]) {
    int strLength = getStrLength(enteredString);
    char reversedString[255];

    for (int x = 0; x < strLength; x++) {
        reversedString[strLength - x] = enteredString[x];
    }

    printf("The reversed string is: %s\n", reversedString);
}

int getStrLength(char enteredString[]) {
    int count;

    for (count = 0; enteredString[count] != '\0'; ++count);

    return count;
}