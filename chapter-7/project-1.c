#include <stdio.h>

int main(void) {

    // Using signed shorts, this program overflows the variables when inputting 182 or more
    // Using signed integers, this program overflows the variables when inputting 46341 or more
    // Using signed longs, this program overflows the variables when inputting a really high number

    // I concluded that on my computer/cpu, short has 16 bits, int and long have 32 bits, and long long has 64 bits
    

    long long int i, n;

    printf("This program prints a table of squares.\n");
    printf("Enter number of entries in table: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        printf("%10lli%30lli\n", i, i * i);
    }

    return 0;
}