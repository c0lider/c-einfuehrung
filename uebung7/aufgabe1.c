#include <stdio.h>

#define matrixAWidth 5
#define matrixAHeight 3

#define matrixBWidth 2
#define matrixBHeight 5

#define matrixResultHeight 3
#define matrixResultWidth 2

int main(){
    int matrixA[matrixAHeight][matrixAWidth] = {2, -1, 5, 7, 12, 0, 9, 7, 6, 5, -3, 0, 1, -1, 0};
    int matrixB[matrixBHeight][matrixBWidth] = {1, -2, 2, 0, 3, 1, 1, 0, -1, 1};

    int matrixResult[matrixResultHeight][matrixResultWidth] = {0, 0, 0, 0, 0, 0};

    for (int resultRow = 0; resultRow < matrixResultHeight; resultRow++) {
        for (int resultCol = 0; resultCol < matrixResultWidth; resultCol++) {
            for (int matrixACol = 0; matrixACol < matrixAWidth; matrixACol++) {
                matrixResult[resultRow][resultCol] += (matrixA[resultRow][matrixACol] * matrixB[matrixACol][resultCol]);
            }
        }
    }

    for (int y = 0; y < matrixResultHeight; y++) {
        for (int x = 0; x < matrixResultWidth; x++) {
            printf("%d, ", matrixResult[y][x]);
        }
        printf("\n");
    }

    return 0;
} 