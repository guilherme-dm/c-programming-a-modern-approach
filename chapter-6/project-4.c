#include <stdio.h>

int main() {

    int tradeTotal = 0;

    do {
        printf("\nEnter value of trade: $");
        scanf("%d", &tradeTotal);

        if (tradeTotal == 0) break;
        printf("Comission: $");

        if (30 + tradeTotal * 0.017 < 39) printf("39.00\n");  // if the calculated minimum commision is lower than minimum charge, then just print minimum charge 
        else if (tradeTotal <= 2500) printf("%.2f\n", 30 + tradeTotal * 0.017);
        else if (tradeTotal <= 6250) printf("%.2f\n", 56 + tradeTotal * 0.0066);
        else if (tradeTotal <= 20000) printf("%.2f\n", 76 + tradeTotal * 0.0034);
        else if (tradeTotal <= 50000) printf("%.2f\n", 100 + tradeTotal * 0.0022);
        else if (tradeTotal <= 500000) printf("%.2f\n", 56 + tradeTotal * 0.0011);
        else if (tradeTotal > 500000) printf("%.2f\n", 255 + tradeTotal * 0.0009);  
    }
    while(tradeTotal != 0);
        
    return 0;
}