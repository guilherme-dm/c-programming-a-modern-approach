#include <stdio.h>

int main() {

    long long int i, divider = 1;

    printf("Enter a big number (up to 18 digits): ");
    scanf("%lli", &i);
    printf("The reversal is: ");

    while(i / divider != 0) {
        printf("%lli", (i / divider) % 10);
        divider *= 10;
    }

    return 0;
}