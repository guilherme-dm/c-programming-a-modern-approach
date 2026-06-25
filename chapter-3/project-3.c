#include <stdio.h>

int main() {

    // Orig. ISBN standard (10 digits)
    // 2007+ ISBN standard (13 digits) = 000-0-000-00000-0

    // First 3 numbers are the GS1 prefix, being 978 or 979
    // The following single number specifies the language or country of origin
    // The following 3 numbers are the publisher code
    // The following 5 numbers are the item number (a.k.a: book number)
    // The last number is a check digit for verifying accuracy of the preceding digits

    int gs1, group, publisher, book, check; 

    printf("Enter ISBN: ");
    scanf("%d-%d-%d-%d-%d", &gs1, &group, &publisher, &book, &check);
    
    printf("GS1 prefix: %d\n", gs1);
    printf("Group identifier: %d\n", group);
    printf("Publisher code: %d\n", publisher);
    printf("Item number: %d\n", book);
    printf("Check digit: %d\n", check);

    return 0;
}