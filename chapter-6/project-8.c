#include <stdio.h>

int main() {

    int day, weekDay;

    printf("Enter number of days in month: ");
    scanf("%d", &day);
    printf("Enter starting day of the week (1=Sun, 7=Sat): ");
    scanf("%d", &weekDay);

    for (int i = 1 ; i < weekDay; i++) {            // Prints "empty days" on the calendar, if necessary
        printf("   ");
    }

    for (int i = 1; i <= day; i++, weekDay++) {     // Prints the actual days, properly aligned.
        printf("%3d", i);
        if (weekDay % 7 == 0) printf("\n");
    }

    return 0;
}