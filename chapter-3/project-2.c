#include <stdio.h>

int main() {

    int itemNumber;
    float itemPrice;
    int month, day, year;


    printf("Enter item number: ");
    scanf("%d", &itemNumber);

    do {
        printf("Enter unit price: ");
        scanf("%f", &itemPrice);
        if(itemPrice < 1.0 || itemPrice >= 9999.99) printf("O preco precisa ser maior que U$1,00 e menor que U$ 9999,99\n");
    } while(itemPrice < 1.0 || itemPrice >= 9999.99);

    printf("Enter purchase date (mm/dd/yyyy): ");
    scanf("%d/%d/%d", &month, &day, &year);

    printf("");

    printf("Item\t\tUnit\t\tPurchase\n");
    printf("\t\tPrice\t\tDate\n");
    printf("%d\t\t$%8.2f\t%.2d/%.2d/%.4d\n", itemNumber, itemPrice, month, day, year);

    return 0;
}