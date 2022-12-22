#include <stdio.h>

int count_occurrence(char text[], char c) {
    int counter = 0;
    int i = 0;

    while (text[i] != '\0') {
        if (text[i] == c) {
            counter++;
        }
        i++;
    }
    
    return counter;
}

int main() {
    char message[] = "hellooo woooorld!";
    char letter = 'o';

    printf("Anzahl des Vorkommens: %d\n", count_occurrence(message, letter));
    
    return(0);
}