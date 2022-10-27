#include <stdio.h>

int main() {
    // a)
    // 0
    printf("%d\n", (8/5)/2);

    // b)
    // 0.000000
    printf("%f\n", (8/5)/2);

    // c)
    // 4
    printf("%i\n", 8/(5/2));

    return 0;
}