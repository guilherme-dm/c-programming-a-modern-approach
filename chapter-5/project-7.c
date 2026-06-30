#include <stdio.h>

int main() {

    int i, j, k, l;

    printf("Enter four integers: ");
    scanf("%d %d %d %d", &i, &j, &k, &l);

    int max1, min1, max2, min2;

    if(i < j) {max1 = j; min1 = i;}
    else {max1 = i; min1 = j;}

    if(k < l) {max2 = l; min2 = k;}
    else {min2 = k; min2 = l;}

    if(max1 < max2) printf("Largest: %d\n", max2);
    else printf("Largest: %d\n", max1);

    if(min1 < min2) printf("Smallest: %d\n", min1);
    else printf("Smallest: %d\n", min2);

    return 0;
}