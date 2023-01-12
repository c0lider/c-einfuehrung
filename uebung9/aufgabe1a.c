#include <stdio.h>


char isLeapYear(int year) {
    if (year % 4 != 0) {
        return 0;
    }
    if (year % 100 != 0) {
        return 1;
    }
    if (year % 400 == 0) {
        return 1;
    }
    return 0;
}

int main() {
    int year;
    printf("Please input a year: ");
    scanf(" %d", &year);
    printf("%d\n", isLeapYear(year));
}