#include <stdio.h>

int main() {

    double n;
    double e = 0;
    long long fact = 1;

    printf("How small should the factorial result be to stop calculating \"e\": ");
    scanf("%lf", &n);

    for (int i = 1; 1.0 / fact > n; i++) {      // Does the calculation in n steps that the user chose
        fact = 1;                               // Resets the factorial so that the calculation is done correctly
        for (int j = 1; j < i; j++) {           // Calculates the factorial
            fact *= j;
        }

        e += 1.0 / fact;                        // Adds 1 divided by factorial of the current step to e
        printf("%.10lf\n", e);
    }
    
    return 0;
}