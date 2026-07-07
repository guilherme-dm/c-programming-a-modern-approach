#include <stdio.h>

int main() {

    int num;
    printf("Enter a positive integer: ");
    scanf("%d", &num);

    for (int i = num - 1; i > 0; i--) {
        num *= i;
    }

    printf("Factorial result: %d", num);

    return 0;
}

// Responses for follow-up questions in the book:

// a) The largest input value that still prints a non-overflowed value for a short is 7.
// b) The largest input value that still prints a non-overflowed value for a int is 13.
// c) The largest input value that still prints a non-overflowed value for a long is 13.
// d) The largest input value that still prints a non-overflowed value for a long long is 20.
// e) The largest input value that still prints a somewhat precise value for a float is 19.
// f) The largest input value that still prints a somewhat precise value for a double is 19.
// g) Couldn't properly use long doubles with my system/compiler