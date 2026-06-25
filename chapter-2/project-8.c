#include <stdio.h>

int main() {

    float loan = 0;
    float interest = 0;
    float monthlyPayment = 0;

    printf("Enter amount of loan: ");
    scanf("%f", &loan);
    printf("Enter annual interest rate: ");
    scanf("%f", &interest);
    interest /= 12;          // Dividing the annual interest to become monthly interest
    printf("Enter monthly payment: ");
    scanf("%f", &monthlyPayment);

    loan = (loan + (loan * (interest / 100))) - monthlyPayment;       // Loan interest addition, then first monthly payment subtraction
    printf("Balance remaining after first payment: $%.2f\n", loan);
    loan = (loan + (loan * (interest / 100))) - monthlyPayment;       // Loan interest addition, then second monthly payment subtraction
    printf("Balance remaining after second payment: $%.2f\n", loan);
    loan = (loan + (loan * (interest / 100))) - monthlyPayment;       // Loan interest addition, then third monthly payment subtraction
    printf("Balance remaining after third payment: $%.2f\n", loan);

    return 0;
}