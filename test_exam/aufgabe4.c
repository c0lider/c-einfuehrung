#include <stdio.h>
#include <stdlib.h>

int main() {
    int dimensions;

    printf("Bitte die Dimensionen der Vektoren eingeben: ");
    scanf("%d", &dimensions);

    double *firstVec = (double*) malloc(dimensions * sizeof(double));
    double *secondVec = (double*) malloc(dimensions * sizeof(double));
    double *resultVec = (double*) malloc(dimensions * sizeof(double));

    // REMEMBER
    if (firstVec == NULL || secondVec == NULL || resultVec == NULL) {
        printf("Array initialisierung fehlgeschlagen.");
        exit(1);
    }

    int arrayCounter = 0;
    int currentInput;

    printf("Die Komponenten des 1. Vektors eingeben\n");

    while (arrayCounter < dimensions) {
        printf("Komponente %d: ", arrayCounter + 1);
        scanf(" %d", &currentInput);
        firstVec[arrayCounter] = currentInput;

        arrayCounter++;    
    }

    arrayCounter = 0;

    printf("Die Komponenten des 2. Vektors eingeben\n");

    while (arrayCounter < dimensions) {
        printf("Komponente %d: ", arrayCounter + 1);
        scanf(" %d", &currentInput);
        secondVec[arrayCounter] = currentInput;
        
        arrayCounter++;    
    }

    for (int i = 0; i < dimensions; i++) {
        resultVec[i] = firstVec[i] + secondVec[i];
    }

    printf("Das Ergebnis der Vektoraddition ist: [");

    for (int i = 0; i < dimensions; i++) {
        printf("%.2f", resultVec[i]);
    }

    printf("]\n");

    // IMPORTANT
    free(firstVec);
    free(secondVec);
    free(resultVec);
}