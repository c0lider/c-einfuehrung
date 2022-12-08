#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int isLetter(char);

int main() {
    char *input = (char*) malloc(301 * sizeof(char));
    char inputChar;
    int currentIndex = 0;

    while ((inputChar = getchar()) != EOF) {
        input[currentIndex] = inputChar;
        currentIndex++;
    }
    
    int counter = 0;
    char lastChar = ' ';
    char currentChar;

    for (int i = 0; input[i] != '\0'; i++) {
        currentChar = input[i];

        if (isLetter(currentChar) && !isLetter(lastChar)) {
            counter++;  
        }
        lastChar = currentChar;
    }

    printf("\nYour input consists of %d words.\n", counter);

    free(input);
}

int isLetter(char character) {
    return (character >= 'a' && character <= 'z') 
            || (character >= 'A' && character <= 'Z')
            || (character >='0' && character <= '9');
}