#include <stdio.h>

int main() {

    const float tax = 0.05; 
    float dollars = 0;
    
    printf("Enter a dollar amount to be taxed: ");
    scanf("%f", &dollars);
    printf("%.2f", dollars + (dollars * tax));

    return 0;
}