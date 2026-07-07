#include <stdio.h>

int main() {

    int num1, den1, num2, den2;
    char op;

    printf("Enter two fractions separated by a operator sign (+, -, * or /): ");
    scanf("%d/%d %c %d/%d", &num1, &den1, &op, &num2, &den2);

    if (op == '+') printf("The result is %d/%d\n", (num1 * den2) + (num2 * den1), den1 * den2);
    else if (op == '-') printf("The result is %d/%d\n", (num1 * den2) - (num2 * den1), den1 * den2);
    else if (op == '*') printf("The result is %d/%d\n", (num1 * num2), (den1 * den2));
    else if (op == '/') printf("The result it %d/%d\n", (num1 * den2), (num2 * den1));

    return 0;
}