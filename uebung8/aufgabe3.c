#include <stdio.h>


int getLeadingWhiteSpaceWidth(int maxWidth, int currentWidth) {
    return (maxWidth - currentWidth) / 2;
}

void printChristmasTree(int maxWidth, int stemHeight) {
    int currentWidth = 1;

    // change output text color to green
    printf("\033[0;32m");

    while (currentWidth <= maxWidth) {
        for (int i = 0; i < getLeadingWhiteSpaceWidth(maxWidth, currentWidth); i++) {
            printf(" ");
        }

        for (int counter = 0; counter < currentWidth; counter++) {
            printf("*");
        }
        printf("\n");

        currentWidth += 2;
    }

    int stemOffset = getLeadingWhiteSpaceWidth(maxWidth, 1);

    for (int i = 0; i < stemHeight; i++) {
        for (int offsetCounter = 0; offsetCounter < stemOffset; offsetCounter++) {
            printf(" ");
        }
        // change output color to some kind of brown
        printf("\033[1;33;41m");
        printf("*");
        // reset output color
        printf("\033[0m"); 
        printf("\n");
    }
}

int main() {
    int maxWidth;
    int stemHeight;

    printf("Please type in the christmas tree's maximum width: ");
    scanf(" %d", &maxWidth);

    printf("Please type in the christmas tree's stem height: ");
    scanf(" %d", &stemHeight);

    printChristmasTree(maxWidth, stemHeight);
}