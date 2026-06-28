#include <stdio.h>

int main() {

    int d, i1, i2, i3, i4, i5, i6, j1, j2, j3, j4, j5;

    printf("Enter the first 12 digits of an EAN: ");
    scanf("%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d", &d, &i1, &i2, &i3, &i4, &i5, &i6, &j1, &j2, &j3, &j4, &j5);

    int sum1 = i1 + i3 + i5 + j1 + j3 + j5;
    int sum2 = d + i2 + i4 + i6 + j2 + j4;
    sum2 += sum1 * 3; 

    printf("Check digit: %d", 9 - ((sum2 - 1) % 10));

    return 0;
}