#include <stdio.h>

int main() {
    char firstArray[] = {'a', 'b', 'c', 'd'};
    char secondArray[] = {'1', '2', '3', '4', '5'} ;

    int firstArraySize = (int)(sizeof(firstArray) / sizeof(firstArray[0]));
    int secondArraySize = (int)(sizeof(secondArray) / sizeof(secondArray[0]));

    for (int i = 0; i < firstArraySize; i++) {
        for (int j = 0; j < secondArraySize; j++) {
            printf("(%c, %c) ", firstArray[i], secondArray[j]);
        }
        printf("\n");
    }
}