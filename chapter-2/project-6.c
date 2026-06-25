#include <stdio.h>

int main() {

    int x = 0;
    printf("Say a integer number value for X? ");
    scanf("%i", &x);

    printf("%i", ((((3 * x + 2) * x - 5) * x - 1) * x + 7) * x - 6 );

    return 0;
}