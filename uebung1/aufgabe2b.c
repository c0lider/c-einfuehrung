#include <stdio.h>

int main() {
    int tage = 360;
    // digits after decimal point are being cut off because of implicit in conversion (tage/7)
    printf("%d Tage sind %d Wochen\n", tage, tage/7);
    return 0;
}