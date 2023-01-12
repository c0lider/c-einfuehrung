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
    int startingYear = 2000;
    int finishingYear = 2400;

    int currentYear = startingYear;

    while (currentYear <= finishingYear)
    {
        if (isLeapYear(currentYear)) {
            // add to list
            printf("%d, ", currentYear);
        }
        currentYear++;
    }    
    printf("\n");
}