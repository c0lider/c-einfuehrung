/*Berechnung der Fl¨ache eines Trapezes
Bitte Oberseite eingeben: 3
Bitte Unterseite eingeben: 6
Bitte H¨ohe eingeben: 5
Der Fl¨acheninhalt des Trapezes betr¨agt 22.50.*/

#include <stdio.h>

int main() {
    double height;
    double topSide;
    double bottomSide;

    printf("Calculate trapeze area\n");

    printf("Please tyoe in the top side length: ");
    scanf("%lf", &topSide);

    printf("Please type in the bottom side length: ");
    scanf("%lf", &bottomSide);

    printf("Please type in the height: ");
    scanf("%lf", &height);

    printf("The area is: %.2f\n", ((topSide + bottomSide) / 2.0) * height);

    return 0;
}