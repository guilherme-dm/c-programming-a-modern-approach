#include <stdio.h>

int main() {

    int i;

    printf("Enter a two-digit number: ");
    scanf("%2d", &i);
    printf("The reversal is: %d%d", i % 10, i / 10);

    return 0;
}