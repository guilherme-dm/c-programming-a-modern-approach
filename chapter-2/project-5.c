#include <stdio.h>

int main() {

    int x = 0;
    printf("Say a integer number value for X? ");
    scanf("%i", &x);

    printf("%i", 3 * (x * x * x * x * x) + 2 * (x * x * x * x) - 5 * (x * x * x) - (x * x) + (7 * x) - 6);

    return 0;
}