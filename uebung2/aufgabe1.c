#include <stdio.h>

int main() {
    //a)
    // 2.500000
    printf("%f\n", (float) 5/2);
    
    // b)
    // 2.000000
    printf("%f\n", (float) (5/2));
    
    //c)
    // 73896
    printf("%d\n", (8/5.)/2);
    
    // d)
    // 0.500000
    printf("%lf\n", (8/5)/2.);
    
    // e)
    // 0
    printf("%d\n", (50/4)%2);
    
    // f)
    // 1
    printf("%d\n", (50%4)/2);

    // g)
    // 0
    printf("%d\n", 50%(4/2));
}
