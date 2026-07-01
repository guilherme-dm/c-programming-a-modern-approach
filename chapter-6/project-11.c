#include <stdio.h>

int main() {

    int steps;
    double e = 0;
    long long fact;

    printf("In how many calculations you want to compute the value of \"e\" (5 to 34): ");
    scanf("%d", &steps);

    for (int i = 1; i <= steps; i++) {        // Does the calculation in n steps that the user chose
        fact = 1;                                   // Resets the factorial so that the calculation is done correctly
        for (int j = 1; j < i; j++) {               // Calculates the factorial
            fact *= j;
        }

        e += 1.0 / fact;                            // Adds 1 divided by factorial of the current step to e
        printf("%.17lf\n", e);
    }
    
    return 0;
}