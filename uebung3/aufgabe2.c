#include <stdio.h>

int withIf(char);
int withSwitch(char);


int main() {
    char character;

    printf("Please type in a character: ");
    scanf("%c", &character);

    // withIf(character);
    withSwitch(character);

    return(0);
}

int withIf(char character) {
    if (character <= 90 && character >= 65) {
        // capital letter
        printf("%c is a capital letter.\n", character);
    }
    else if (character <= 122 && character >= 97) {
        // small letter
        printf("%c is a small letter.\n", character);
    }
    else if (character <= 75 && character >= 48) {
        // digit
        printf("%c is a digit.\n", character);
    }
    else {
        // symbol
        printf("%c is a symbol.\n", character);
    }

    return(0);
}

int withSwitch(char character) {
    switch (character) {
        case 'A' ... 'Z':
            printf("%c is a capital letter.\n", character);
            break;
        case 'a' ... 'z':
            printf("%c is a small letter.\n", character);
            break;
        case '1' ... '9':
            printf("%c is a digit.\n", character);
            break;
        default: 
            printf("%c is a symbol.\n", character);
    }
    return(0);
}