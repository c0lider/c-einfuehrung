#include <stdio.h>

int main(){
    int matrixAHeight;
    int matrixAWidth;
    int matrixBHeight;
    int matrixBWidth;

    while (1) {
        // get first matrix height
        printf("Please type in the height of the first matrix: ");
        scanf(" %d", &matrixAHeight);

        // get first matrix width
        printf("Please type in the width of the first matrix: ");
        scanf(" %d", &matrixAWidth);

        // get second matrix height
        printf("Please type in the height of the second matrix: ");
        scanf(" %d", &matrixBHeight);

        // get second matrix width
        printf("Please type in the width of the second matrix: ");
        scanf(" %d", &matrixBWidth);

        if (matrixAWidth == matrixBHeight) {
            break;
        }

        printf("Multiplication is not possible for %dx%d and %dx%d matrices.\n", matrixAHeight, matrixAWidth, matrixBHeight, matrixBWidth);
        printf("Please try again.\n");
    }

    int matrixA[matrixAHeight][matrixAWidth];
    int matrixB[matrixBHeight][matrixBWidth];

    for (int y = 0; y < matrixAHeight; y++) {
        for (int x = 0; x < matrixAWidth; x++) {
            printf("Please type in the value for the first matrix @ x=%d, y=%d: ", x, y);
            scanf(" %d", &matrixA[y][x]);
        }

    }

    for (int y = 0; y < matrixBHeight; y++) {
        for (int x = 0; x < matrixBWidth; x++) {
            printf("Please type in the value for the second matrix @ x=%d, y=%d: ", x, y);
            scanf(" %d", &matrixB[y][x]);
        }
    }
    
    int matrixResult[matrixAHeight][matrixBWidth];

    for (int y = 0; y < matrixAHeight; y++) {
        for (int x = 0; x < matrixBWidth; x++) {
            matrixResult[y][x] = 0;
        }
    }

    for (int resultRow = 0; resultRow < matrixAHeight; resultRow++) {
        for (int resultCol = 0; resultCol < matrixBWidth; resultCol++) {
            for (int matrixACol = 0; matrixACol < matrixAWidth; matrixACol++) {
                matrixResult[resultRow][resultCol] += (matrixA[resultRow][matrixACol] * matrixB[matrixACol][resultCol]);
            }
        }
    }

    for (int y = 0; y < matrixAHeight; y++) {
        for (int x = 0; x < matrixBWidth; x++) {
            printf("%d, ", matrixResult[y][x]);
        }
        printf("\n");
    }

    return 0;
} 