#include <stdio.h>

int main() {

    int month, day, year;
    int smMonth = 12, smDay = 31, smYear = 99;

    do {
        printf("Enter a date (mm/dd/yy): ");
        scanf("%2d/%2d/%2d", &month, &day, &year);

        if (month == 0) break;              // If the user inputs 0, or a date starting with 0, the loop breaks

        if (year == smYear) {               // If the year inputted is the same, then we have to check month, and maybe day
            if (month == smMonth) {
                if (day == smDay) {
                    ;                       // If date is the same by the day, do nothing, because it is the earliest date
                }
                else if (day < smDay) {
                    smYear = year;
                    smMonth = month;
                    smDay = day; 
                }
            }
            else if (month < smMonth) {
                smYear = year;
                smMonth = month;
                smDay = day;
            }
        }
        else if (year < smYear) {           // If the year inputted is lower than smallest year, automatically all the date is earlier;
            smYear = year;
            smMonth = month;
            smDay = day;
        }

    } while (month != 0);

    printf("%.2d/%.2d/%.2d is the earliest date", smMonth, smDay, smYear);

    return 0;
}