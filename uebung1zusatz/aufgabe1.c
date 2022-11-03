/*
Bitte Anzahl der Minuten eingeben: 5
Bitte Anzahl der Sekunden eingeben: 30
5 Minuten und 30 Sekunden sind 330 Sekunden.
*/
#include <stdio.h>

int main() {
    int minutes;
    int seconds;

    printf("Please enter amount of minutes: ");
    scanf("%d", &minutes);

    printf("Please enter amount of seconds: ");
    scanf("%d", &seconds);

    printf("%d minutes and %d seconds are %d seconds.\n", minutes, seconds, minutes * 60 + seconds);
    
    return 0;
}