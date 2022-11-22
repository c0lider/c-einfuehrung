#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void printCartesianProduct(char[], char[]);

char * getLetterArray();
char * getNumberArray();

char getStartingLetter();
char getEndingLetter();
char getStartingNumber();
char getEndingNumber();

int isDigit(char);
int isLowerCaseLetter(char);

int isValidStartingEndingChars(char, char);

int main() {
    char *firstArray = getLetterArray();
    char *secondArray = getNumberArray();

    printCartesianProduct(firstArray, secondArray);
}

void printCartesianProduct(char firstArray[], char secondArray[]) {
    /**
     * Takes in two char arrays and prints its cartesian product as 
     * 
     * (a0, b0) (a0, b1) ... (a0, bn)
     * (a1, b0) (a1, b1) ... (a1, bn)
     * ...
     * (an, b0) (an, b1) ... (an, bn)
    */
    int firstArrayIndex = 0;
    int secondArrayIndex = 0;
    
    while (firstArray[firstArrayIndex] != '\0') {
        while (secondArray[secondArrayIndex] != '\0') {
            printf("(%c, %c) ", firstArray[firstArrayIndex], secondArray[secondArrayIndex]);
            secondArrayIndex++;
        }
        secondArrayIndex = 0;
        firstArrayIndex++;
        printf("\n");
    }
}

char * getLetterArray() {
    /**
     * Gets a valid starting and ending letter from the user input and creates a char array
     * ranging from the starting letter to (inclusively) the ending letter
    */
    char startingLetter;
    char endingLetter;
    
    while (1) {
        // get starting letter
        startingLetter = getStartingLetter();
        endingLetter = getEndingLetter();
        
        if (isValidStartingEndingChars(startingLetter, endingLetter)) {
            break;
        }
    }

    char currentLetter = startingLetter;
    int currentIndex = 0;

    int arraySize = endingLetter - startingLetter + 1;
    char *letterArray = malloc(arraySize);

    while (currentLetter <= endingLetter) {
        // add to array
        letterArray[currentIndex] = currentLetter;
        currentLetter++;
        currentIndex++;
    }

    letterArray[currentIndex] = '\0';

    return letterArray;
}

char getStartingLetter() {
    /**
     * Gets a lower case letter from the user input which is supposed to be the starting letter.
    */
    char input;

    while (1) {
        printf("Please type in the starting letter: ");
        scanf(" %c", &input);
        if (isLowerCaseLetter(input)) {
            break;
        }
        printf("%c is not a valid letter.\n", input);
    }
    return input;
}

char getEndingLetter() {
    /**
     * Gets a lower case letter from the user input which is supposed to be the ending letter.
    */
    char input;

    while (1) {
        printf("Now please type in the ending letter: ");
        scanf(" %c", &input);
        if (isLowerCaseLetter(input)) {
            break;
        }
        printf("%c is not a valid letter.\n", input);
    }
    return input;
}

char getStartingNumber() {
    /**
     * Gets an integer from the user input which is supposed to be the starting number.
    */
    char input;

    while (1) {
        printf("Please type in the starting number: ");
        scanf(" %c", &input);
        if (isDigit(input)) {
            break;
        }
        printf("%c is not a valid number.\n", input);
    }
    return input;
}

char getEndingNumber() {
    /**
     * Gets an integer from the user input which is supposed to be the ending number.
    */
    char input;

    while (1) {
        printf("Please type in the ending number: ");
        scanf(" %c", &input);
        if (isDigit(input)) {
            break;
        }
        printf("%c is not a valid number.\n", input);
    }
    return input;
}


char * getNumberArray() {
    /**
     * Gets a valid starting and ending number from the user input and creates a char array
     * ranging from the starting number to (inclusively) the ending number
    */
    char startingNumber;
    char endingNumber;
    
    while (1) {
        startingNumber = getStartingNumber();
        endingNumber = getEndingNumber();
        if (isValidStartingEndingChars(startingNumber, endingNumber)) {
            break;
        }
    }

    int arraySize = endingNumber - startingNumber + 1;
    char *numberArray = malloc(arraySize);

    char currentChar = startingNumber;
    int currentIndex = 0;

    while (currentChar <= endingNumber) {
        // add number to array
        numberArray[currentIndex] = currentChar;
        currentChar++;
        currentIndex++;
    }

    numberArray[currentIndex] = '\0';

    return numberArray;
}

int isLowerCaseLetter(char potentialLetter) {
    /**
     * Checks whether a char is a lower case letter.
    */
    switch (potentialLetter)
    {
        case 'a' ... 'z':
            return 1;
            break;
        
        default:
            return 0;
            break;
    }
}

int isDigit(char potentialNumber) {
    /**
     * Checks whether a char is a digit.
    */
    switch (potentialNumber)
    {
        case '0' ... '9':
            return 1;
            break;
        default:
            return 0;
            break;
    }
}

int isValidStartingEndingChars(char startingChar, char endingChar) {
    /**
     * Checks whether the ending char's value is bigger than the starting char's.
    */
    if (startingChar <= endingChar) {
        return 1;
    }
    printf("%c to %c is not a valid range.\n", startingChar, endingChar);

    return 0;
}
