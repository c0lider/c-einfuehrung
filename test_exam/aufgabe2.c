#include <stdio.h>
#include <string.h>

int string_compare(char *s1, char *s2) {
    if (strlen(s1) != strlen(s2)) {
        return 0;
    }

    for (int i = 0; i < strlen(s1); i++) {
        if (s1[i] != s2[i] && s1[i] - s2[i] != 32 && s2[i] - s1[i] != 32) {
            return 0;
        }
    }

    return 1;
}

int main() {
    char firstString[255];
    char secondString[255];

    printf("Zeichenkette 1: ");  
    fgets(firstString, sizeof(firstString), stdin);
    
    printf("Zeichenkette 2: ");  
    fgets(secondString, sizeof(secondString), stdin);

    if (string_compare(firstString, secondString)) {
        printf("Die Zeichenketten sind bis auf Gross-/Kleinschreibung identisch.\n");
    }
    else {
        printf("Die Zeichenketten sind nicht identisch.\n");
    }
}