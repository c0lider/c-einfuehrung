/*
*** Getraenke Automat *******
* W) Wasser (0.5 Euro) *
* B) Bionade (1 Euro) *
* O) Orangensaft (2 Euro) *
*****************************
*/

#include <stdio.h>

const double WATER_PRICE = 0.5;
const double BIONADE_PRICE = 1;
const double ORANGE_JUICE_PRICE = 2;

void processWater();
void processBionade();
void processOrangejuice();

int main() {
    char choice;
    float amountPaid;
    int validChoice = 0;

    printf("*** Getraenke Automat *******\n");
    printf("* W) Wasser (0.5 Euro) *\n");
    printf("* B) Bionade (1 Euro) *\n");
    printf("* O) Orangensaft (2 Euro) *\n");
    printf("*****************************\n");

    printf("Ihre Wahl: ");

    while (!validChoice) {
        
        scanf(" %c", &choice);

        switch (choice) {
        case 'W':
            processWater();
            validChoice = 1;
            break;
        case 'B':
            processBionade();
            validChoice = 1;
            break;
        case 'O':
            processOrangejuice();
            validChoice = 1;
            break;
        default:
            printf("Ungueltige Eingabe. Bitte versuchen Sie es erneut: ");
            break;
        }
        
    }
}


void processWater() {
    double insertedAmount;

    printf("Bitte werfen Sie %.1f Euro ein: ", WATER_PRICE);

    scanf("%lf", &insertedAmount);
    
    while (insertedAmount != WATER_PRICE) {
        printf("Bitte passend bezahlen.\n");
        printf("Bitte werfen Sie %.1f Euro ein: ", WATER_PRICE);

        scanf("%lf", &insertedAmount);
    }
    
    printf("Bitte entnehmen Sie Ihr Getränk.\n");
}

void processBionade() {
    double insertedAmount;
    
    printf("Bitte werfen Sie %.1f Euro ein: ", BIONADE_PRICE);
    scanf("%lf", &insertedAmount);

    while (insertedAmount != BIONADE_PRICE) {
        printf("Bitte passend bezahlen.\n");
        printf("Bitte werfen Sie %.1lf Euro ein: ", BIONADE_PRICE);
        
        scanf("%lf", &insertedAmount);
    }
    
    printf("Bitte entnehmen Sie Ihr Getränk.\n");

}

void processOrangejuice() {
    double insertedAmount;
    
    printf("Bitte werfen Sie %.1f Euro ein: ", ORANGE_JUICE_PRICE);
    scanf("%lf", &insertedAmount);

    while (insertedAmount != ORANGE_JUICE_PRICE) {
        printf("Bitte passend bezahlen.\n");
        printf("Bitte werfen Sie %.1f Euro ein: ", ORANGE_JUICE_PRICE);
        
        scanf("%lf", &insertedAmount);
    }
    
    printf("Bitte entnehmen Sie Ihr Getränk.\n");

}