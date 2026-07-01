#include <stdio.h>

int main() {

    float n, largestNum = 0;

    while(1) {
        printf("Enter a number: ");
        scanf("%f", &n);

        if (n == 0) break;
        else if (n > largestNum) largestNum = n;
    }

    printf("\nThe largest number entered was %.2f", largestNum);

    return 0;
}