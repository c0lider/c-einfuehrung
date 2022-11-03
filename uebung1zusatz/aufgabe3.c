/*Berechnung des gr¨oßten gemeinsamen Teilers zweier Zahlen
Bitte geben Sie die erste Zahl ein: 36
Bitte geben Sie die zweite Zahl ein: 117
Der gr¨oßte gemeinsame Teiler von 36 und 117 ist 9
*/
#include <stdio.h>

int greatestCommonDivisor(int first, int second); 

int main() {
    int firstNumber;
    int secondNumber;

    printf("Calculate greatest common divisor\n");
    printf("Please enter the first number: ");
    scanf("%d", &firstNumber);

    printf("Please enter the second number: ");
    scanf("%d", &secondNumber);

    int result = greatestCommonDivisor(firstNumber, secondNumber);
    printf("The greatest common diviso of %d and %d is %d\n", firstNumber, secondNumber, result);

}

int greatestCommonDivisor(int first, int second) {
    int biggerNumber = (first > second) ? first : second;
    int greatestDivisor = 1;

    for (int i = 1; i < (biggerNumber / 2) + 1; i++) {
        if (first % i == 0 && second % i == 0) {
            greatestDivisor = i;
        }
    }

    return greatestDivisor;
}
