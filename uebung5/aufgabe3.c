#include <stdio.h>

int getLeadingAndTrailingSpaceWidth(int, int);

int main() {
    int maxWidth;
    int currentWidth = 1;
    int currentWhiteSpaceWidth;

    printf("Please type in the max width of the triangle: ");
    scanf(" %d", &maxWidth);

    while (currentWidth <= maxWidth) {
        currentWhiteSpaceWidth = getLeadingAndTrailingSpaceWidth(maxWidth, currentWidth);
        for (int i = 0; i < currentWhiteSpaceWidth; i++) {
            printf(" ");
        }
        for (int j = 0; j < currentWidth; j++) {
            printf("*");
        }
        for (int k = 0; k < currentWhiteSpaceWidth; k++) {
            printf(" ");
        }
        printf("\n");
        currentWidth += 2;
    }
}

int getLeadingAndTrailingSpaceWidth(int maxWidth, int currentWidth) {
    return (maxWidth - currentWidth) / 2;
}
