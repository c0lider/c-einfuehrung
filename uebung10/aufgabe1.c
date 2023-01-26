#include <stdio.h>
#include <stdlib.h>

int main() {
    int vectorDimensions;
    int* firstVec;
    int* secondVec;

    printf("Please type in the vectors' dimension: ");
    scanf(" %d", &vectorDimensions);

    firstVec = (int*) malloc(vectorDimensions * sizeof(int));
    secondVec = (int*) malloc(vectorDimensions * sizeof(int));

    double currentInput;

    printf("Please type in the first vector's components: \n");
    for (int x = 0; x < vectorDimensions; x++) {
        printf("vector component %d: ", x + 1);
        scanf(" %lf", &currentInput);
        firstVec[x] = currentInput;
    }

    printf("Please type in the second vector's components: \n");
    for (int x = 0; x < vectorDimensions; x++) {
        printf("vector component %d: ", x + 1);
        scanf(" %lf", &currentInput);
        secondVec[x] = currentInput;
    }

    double sum = 0;

    for (int x = 0; x < vectorDimensions; x++) {
        sum += firstVec[x] * secondVec[x];
    }

    printf("The vectors' dot product is: %lf\n", sum);

    free(firstVec);
    free(secondVec);

    firstVec = NULL;
    secondVec = NULL;
}