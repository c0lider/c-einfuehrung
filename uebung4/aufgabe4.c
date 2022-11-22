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

void printInfo();

int processWater();
int processBionade();
int processOrangejuice();

int main() {
    char choice;
    float amountPaid;
    int completedTransaction = 0;

    while (!completedTransaction) {
        printInfo();
        
        scanf(" %c", &choice);

        switch (choice) {
            case 'W':
            case 'w':
                completedTransaction = processWater();
                break;
            case 'B':
            case 'b':
                completedTransaction = processBionade();
                break;
            case 'O':
            case 'o':
                completedTransaction = processOrangejuice();
                break;
            case 'X':
            case 'x':
                printf("Transaktion abgebrochen.\n");
                return 0;
            default:
                printf("Ungueltige Eingabe. Bitte versuchen Sie es erneut.\n\n");
                break;
            }
    }
}

void printInfo() {
    printf("*** Getraenke Automat *******\n");
    printf("* W) Wasser (0.5 Euro) *\n");
    printf("* B) Bionade (1 Euro) *\n");
    printf("* O) Orangensaft (2 Euro) *\n");
    printf("*****************************\n");

    printf("Ihre Wahl: ");
}

int processWater() {
    double insertedAmount;

    printf("Bitte werfen Sie %.1f Euro ein: ", WATER_PRICE);

    scanf("%lf", &insertedAmount);

    while (insertedAmount != WATER_PRICE) {
        if (insertedAmount == 0) {
            // incomplete
            printf("Bezahlvorgang abgebrochen.\n");
            return 0;
        }

        printf("Bitte passend bezahlen.\n");
        printf("Bitte werfen Sie %.1f Euro ein: ", WATER_PRICE);

        scanf("%lf", &insertedAmount);
    }
    
    printf("Bitte entnehmen Sie Ihr Getränk.\n");
    return 1;
}

int processBionade() {
    double insertedAmount;
    
    printf("Bitte werfen Sie %.1f Euro ein: ", BIONADE_PRICE);
    scanf("%lf", &insertedAmount);

    while (insertedAmount != BIONADE_PRICE) {
        if (insertedAmount == 0) {
            // incomplete
            printf("Bezahlvorgang abgebrochen.\n");
            return 0;
        }

        printf("Bitte passend bezahlen.\n");
        printf("Bitte werfen Sie %.1lf Euro ein: ", BIONADE_PRICE);
        
        scanf("%lf", &insertedAmount);
    }
    
    printf("Bitte entnehmen Sie Ihr Getränk.\n");
    return 1;
}

int processOrangejuice() {
    double insertedAmount;
    
    printf("Bitte werfen Sie %.1f Euro ein: ", ORANGE_JUICE_PRICE);
    scanf("%lf", &insertedAmount);

    while (insertedAmount != ORANGE_JUICE_PRICE) {
        if (insertedAmount == 0) {
            // incomplete
            printf("Bezahlvorgang abgebrochen.\n");
            return 0;
        }

        printf("Bitte passend bezahlen.\n");
        printf("Bitte werfen Sie %.1f Euro ein: ", ORANGE_JUICE_PRICE);
        
        scanf("%lf", &insertedAmount);
    }
    
    printf("Bitte entnehmen Sie Ihr Getränk.\n");
    return 1;
}