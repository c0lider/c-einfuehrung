#include <stdio.h>
#include <float.h>

void printMax(double[]);
void printMin(double[]);
void printAvg(double[]);

int main() {
    double enteredNumbers[10];
    double avg = 0;
    double min = DBL_MIN;

    printf("Please enter 10 floating point numbers.\n");

    for (int x = 0; x < 10; x++) {
        printf("Input %d: ", x + 1);
        scanf(" %lf", &enteredNumbers[x]);
    }

    printf("\n");
    printMax(enteredNumbers);
    printMin(enteredNumbers);
    printAvg(enteredNumbers);
}

void printMax(double numberArray[]) {
    double max = DBL_MIN;

    for (int x = 0; x < 10; x++) {
        if (numberArray[x] > max) {
            max = numberArray[x];
        }
    }

    printf("The biggest number is: %.2f\n", max);
} 

void printMin(double numberArray[]) {
    double min = DBL_MAX;

    for (int x = 0; x < 10; x++) {
        if (numberArray[x] < min) {
            min = numberArray[x];
        }
    }

    printf("The smallest number is: %.2f\n", min);
}

void printAvg(double numberArray[]) {
    double avg = 0;

    for (int x = 0; x < 10; x++) {
        avg += numberArray[x];
    }

    avg /= 10;

    printf("The average is: %.2f\n", avg);
}