#include <stdio.h>
#include <stdlib.h>


int get_int_from_input(int groesserNull) {
    int result;
    int number;

    while (1) {
        result = scanf("%d", &number);
        
        // necessary for whatever reason
        getchar();

        if (result != 1) {
            printf("Ihre Eingabe ist keine Zahl.\n");
            printf("Bitte geben sie eine Zahl ein: ");
            continue;
        }

        if (groesserNull && number <= 0) {
            printf("Die Zahl muss > 0 sein.\n");
            printf("Bitte geben sie eine Zahl ein: ");
            continue;
        }

        return number;
    }
}

int *folge_einlesen(int laenge) {
    int * numberArray = malloc(laenge * sizeof(int));

    if (numberArray == NULL) {
        printf("Array initialisierung fehlgeschlagen.");
        exit(1);
    }
    
    for (int i = 0; i < laenge; i++) {
        printf("Bitte geben Sie die %d. Zahl ein: ", i + 1);
        numberArray[i] = get_int_from_input(0);
    }

    return numberArray;
}

int main() {
    int laenge;
    int gesamtLaenge;

    printf("Laenge der einzugebenden Zahlenfolgen eingeben: ");
    laenge = get_int_from_input(1);
    gesamtLaenge = 2 * laenge;

    printf("Bitte geben Sie die Zahlen der ersten Folge ein: \n");
    int * erstesArray = folge_einlesen(laenge);

    printf("Bitte geben Sie die Zahlen der zweiten Folge ein: \n");
    int * zweitesArray = folge_einlesen(laenge);

    int * gesamtArray = malloc(gesamtLaenge * sizeof(int));
    int gesamtArrayCounter = 0;

    for (int i = 0; i < laenge; i++) {
        gesamtArray[gesamtArrayCounter] = erstesArray[i];
        gesamtArrayCounter++;
        
        gesamtArray[gesamtArrayCounter] = zweitesArray[i];
        gesamtArrayCounter++;
    }

    printf("Gemischtes Array ist:");
    for (int i = 0; i < gesamtLaenge; i++) {
        printf(" %d", gesamtArray[i]);
    }
    printf("\n");

    free(erstesArray);
    free(zweitesArray);
    free(gesamtArray);

    erstesArray = NULL;
    zweitesArray = NULL;
    gesamtArray = NULL;

    return 0;
}
