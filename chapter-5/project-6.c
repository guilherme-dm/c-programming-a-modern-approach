#include <stdio.h>

int main(){

    int d, i1, i2, i3, i4, i5, j1, j2, j3, j4, j5, cd;

    printf("Enter a UPC code (only numbers): ");
    scanf("%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d", &d, &i1, &i2, &i3, &i4, &i5, &j1, &j2, &j3, &j4, &j5, &cd);
    
    int sum1 = d + i2 + i4 + j1 + j3 + j5;
    int sum2 = i1 + i3 + i5 + j2 + j4;
    sum2 += sum1 * 3; 

    if (9 - ((sum2 - 1) % 10) == cd) printf("VALID");
    else if (9 - ((sum2 - 1) % 10) != cd) printf("INVALID");

    return 0;
}