#include <stdio.h>

int main() {
    long days;
    long weeks;

    printf("Please type in any amount of days: ");
    scanf("%ld", &days);
    printf("%ld days contain %ld weeks and %ld days. \n", days, days / 7, days % 7);

    return 0;
}