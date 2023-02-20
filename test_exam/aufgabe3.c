#include <stdio.h>
#include <string.h>


int main() {
    char userInput[255];

    int digits = 0;
    int capitalLetters = 0;
    int smallLetters = 0;
    int otherChars = 0;

    printf("Eingabe: ");
    //REMEMBER
    fgets(userInput, sizeof(userInput), stdin);

    // REMEMBER
    for (int i = 0; i < strlen(userInput) - 1; i++) {
        switch (userInput[i])
        {
        case '0' ... '9':
            digits++;
            break;
        case 'a' ... 'z':
            smallLetters++;
            break;
        case 'A' ... 'Z':
            capitalLetters++;
            break;
        default:
            otherChars++;
            break;
        }
    }

    printf("Kleinbuchstaben: %d\n", smallLetters);
    printf("Grossbuchstaben: %d\n", capitalLetters);
    printf("Ziffern: %d\n", digits);
    printf("Sonstige: %d\n", otherChars);
}