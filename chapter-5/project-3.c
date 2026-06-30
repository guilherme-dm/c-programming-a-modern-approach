#include <stdio.h>

int main() {

    int shareCount;
    float sharePrice;

    printf("How many shares you want to buy? ");
    scanf("%d", &shareCount);
    printf("Price per share: ");
    scanf("%f", &sharePrice);

    float tradeTotal = sharePrice * shareCount;

    printf("\nBroker Comission: $");

    if (30 + tradeTotal * 0.017 < 39) printf("39.00");  // if the calculated minimum commision is lower than minimum charge, then just print minimum charge 
    else if (tradeTotal <= 2500) printf("%.2f", 30 + tradeTotal * 0.017);
    else if (tradeTotal <= 6250) printf("%.2f", 56 + tradeTotal * 0.0066);
    else if (tradeTotal <= 20000) printf("%.2f", 76 + tradeTotal * 0.0034);
    else if (tradeTotal <= 50000) printf("%.2f", 100 + tradeTotal * 0.0022);
    else if (tradeTotal <= 500000) printf("%.2f", 56 + tradeTotal * 0.0011);
    else if (tradeTotal > 500000) printf("%.2f", 255 + tradeTotal * 0.0009);

    printf("\nRival broker Comission: $");

    if (shareCount < 2000) printf("%.2f", 33 + (0.03 * shareCount));
    else if (shareCount >= 2000) printf("%.2f", 33 + (0.02 * shareCount));

    return 0;
}