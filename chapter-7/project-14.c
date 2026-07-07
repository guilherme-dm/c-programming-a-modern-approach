#include <stdio.h>

int main() {

    double x, y = 1.0;
    printf("Enter a positive number: ");
    scanf("%lf", &x);

    for (int i = 0; i < 10; i++) {
        y = ((x / y) + y) / 2;
    }
    
    printf("Square root: %lf", y);

    return 0;
}