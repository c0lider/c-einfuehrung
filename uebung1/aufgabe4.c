#include <stdio.h>
#include <math.h>

int main() {
    double height;
    double radius;

    // get height
    printf("Please type in the cylinder's height:");
    scanf("%lf", &height);

    // radius
    printf("Please type in the cylinder's radius:");
    scanf("%lf", &radius);

    // print result
    printf("The cylinder's volume is: %.3f\n", M_PI * pow(radius, 2) * height);

    return 0;
}