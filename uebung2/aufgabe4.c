#include <stdio.h>


int main() {
    // Was passiert wenn Sie “K” als das erste und “@” als das zweite Zeichen eingeben?
    // output: "In der ASCII-Tabelle kommt @ vor K."

    char firstChar, secondChar;
    
    // use blank before format specifier to ignore leading whitespaces
    printf("Please type in the first char: ");
    scanf(" %c", &firstChar);
    
    // use this to consume new line character
    // getchar();
    
    printf("Please type in the second char: ");
    scanf(" %c", &secondChar);
    

    if (firstChar < secondChar) {
        printf("In der ASCII-Tabelle kommt %c vor %c.\n", firstChar, secondChar);
    }
    else {
        printf("In der ASCII-Tabelle kommt %c nach %c.\n", firstChar, secondChar);
    }
    
    return(0);
}
