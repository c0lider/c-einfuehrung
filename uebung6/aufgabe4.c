#include <stdio.h>
#include <string.h>

int getStrLength(char[]);

int main() {
    char enteredString[255];
    char reversedString[255];

    // get string
    printf("Please enter a string: ");
    scanf("%s", enteredString);

    // reverse string
    int strLength = getStrLength(enteredString);

    for (int x = 0; x < strLength; x++) {
        reversedString[strLength - x - 1] = enteredString[x];
    }

    reversedString[strLength] = '\0';

    printf("The reversed string is: %s\n", reversedString);

    int result = strcmp(enteredString, reversedString);

    if (!result) {
        printf("The string is a palindrome.\n");
    }
    else {
        printf("The string is NOT a palindrome.\n");
    }
}

int getStrLength(char enteredString[]) {
    int count;

    for (count = 0; enteredString[count] != '\0'; ++count);

    return count;
}