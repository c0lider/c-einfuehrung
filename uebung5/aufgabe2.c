#include <stdio.h>

int isPalindrome(int);

int main() {
    int userNumber;
    int remainder;
    int tempNumber;

    while (1) {
        printf("Please type in a number: ");
        if (!scanf(" %d", &userNumber)) {
            printf("Goodbye!\n");
            break;
        }
        if (isPalindrome(userNumber)) {
            printf("'%d' is a number palindrome.\n", userNumber);
            continue;
        }
        printf("'%d' is not a number palindrome.\n", userNumber);
    }
}

int isPalindrome(int number) {
    int remainder;
    int sum = 0;
    int temp = number;

    while (number > 0) {
        remainder = number % 10;
        sum = (sum * 10) + remainder;
        number = number / 10;
    }
    
    return temp == sum;
}