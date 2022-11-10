#include <math.h>
#include <stdio.h>

float getCircleDiameter(float circleArea);

int main() {
    float circleArea;

    printf("Please type in the circle area: ");
    scanf("%f", &circleArea);

    float circleDiameter = getCircleDiameter(circleArea);
    printf("The circle's diameter is %f\n", circleDiameter);
}

float getCircleDiameter(float circleArea) {
    return 2*sqrt(circleArea/M_PI);
}