#include <stdio.h>

int main() {

    int dollars = 0;
    printf("Dollar amount (integer): ");
    scanf("%i", &dollars);

    printf("$20 bills: %i\n", dollars / 20);   // Seeing if the change can be paid with 20 dollar bills, and if so, how many.
    dollars -= (dollars / 20) * 20;            // Dividing dollars as int for truncation, and then multiplying by the $20 bill to deduct the right amount from dollars.

    printf("$10 bills: %i\n", dollars / 10);
    dollars -= (dollars / 10) * 10;        

    printf("$5 bills: %i\n", dollars / 5);
    dollars -= (dollars / 5) * 5; 

    printf("$1 bills: %i\n", dollars / 1);
    dollars -= (dollars / 1) * 1; 

    return 0;
}