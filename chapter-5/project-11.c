#include <stdio.h>

int main() {

    int n;

    printf("Enter a two-digit number: ");
    scanf("%d", &n);

    if (n > 99 || n < 0) {
        printf("That's not a valid number. Try again");
        return 1;
    }

    int dig1 = n / 10, dig2 = n % 10;

    printf("You entered the number ");

    if (dig1 == 0 && dig2 == 0) printf("zero");         // Specific rule for zero
    else if (dig1 == 1) {                               // The spelling from 10-19 is unique, so there's this exception in the logic  
        switch (dig2) {
            case 0: printf("ten");      break;
            case 1: printf("eleven");   break;
            case 2: printf("twelve");   break;
            case 3: printf("thirteen"); break;
            case 4: printf("fourteen"); break;
            case 5: printf("fifteen");  break;
            case 6: printf("sixteen");  break;
            case 7: printf("seventeen");break;
            case 8: printf("eighteen"); break;
            case 9: printf("nineteen"); break;
        }
    }
    else {                                          // For every other scenario, spelling should obey the following 2 digit spelling logic
        switch (dig1) {
            case 0:                     break;      // If the number is smaller than 10 (dig1 is 0) then break and let switch for dig2 run
            case 2: printf("twenty");   break;
            case 3: printf("thirty");   break;
            case 4: printf("forty");    break;
            case 5: printf("fifty");    break;
            case 6: printf("sixty");    break;
            case 7: printf("seventy");  break;
            case 8: printf("eighty");   break;
            case 9: printf("ninety");   break;
        }
        
        if (dig1 >= 2 && dig2 > 0) printf("-");     // Hiphen print rule for numbers above 20.
        
        switch (dig2) {
            case 0:                     break;      // If the number's second digit is 0, print nothing and leave only the previous switch print (e.g: twenty, thirty, etc)
            case 1: printf("one");      break;
            case 2: printf("two");      break;
            case 3: printf("three");    break;
            case 4: printf("four");     break;
            case 5: printf("five");     break;
            case 6: printf("six");      break;
            case 7: printf("seven");    break;
            case 8: printf("eight");    break;
            case 9: printf("nine");     break;
        }
    }

    return 0;
}