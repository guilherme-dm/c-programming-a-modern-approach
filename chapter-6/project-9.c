#include <stdio.h>

int main() {

    float loan = 0;
    float interest = 0;
    float monthlyPayment = 0;
    int payments = 0;

    printf("Enter amount of loan: ");
    scanf("%f", &loan);
    printf("Enter annual interest rate: ");
    scanf("%f", &interest);
    printf("Enter monthly payment: ");
    scanf("%f", &monthlyPayment);
    printf("How many months ahead you want to see: ");
    scanf("%d", &payments);

    interest /= 12;          // Dividing the annual interest by 12 to become monthly interest

    for (int i = 0; i < payments; i++) {
        loan += loan * (interest / 100);        // Monthly interest gest added first
        loan -= monthlyPayment;                 // Monthly payment is done right after
        printf("Balance remaining after first payment: $%.2f\n", loan);
    }

    return 0;
}