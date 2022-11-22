#include <stdio.h>

void printSuccessors(char);

int main() {
    char input;
    int validInput = 0;
    
    while (!validInput) {
        printf("Please type in a capital letter: ");
        scanf(" %c", &input);

        switch (input) {
            case 'A' ... 'Z':
                // print the following capital letters
                validInput = 1;
                printSuccessors(input);
                break;
            
            default:
                printf("%c is not a capial letter.\n", input);
                break;
        }
    }

    return(0);
}

void printSuccessors(char character) {
    printf("The successors of %c are: ", character);
    while (character++ < 'Z') {
        printf("%c ", character);
    }
    printf("\n");
}