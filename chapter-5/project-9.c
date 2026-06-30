#include <stdio.h>

int main() {

    int month1, day1, year1;
    int month2, day2, year2;

    printf("Enter first date (mm/dd/yy): ");
    scanf("%2d/%2d/%2d", &month1, &day1, &year1);
    printf("Enter second date (mm/dd/yy): ");
    scanf("%2d/%2d/%2d", &month2, &day2, &year2);

    if (year1 == year2) {
        if (month1 == month2) {
            if (day1 == day2) printf("Dates are the same");
            else if (day1 < day2) printf("\n%.2d/%.2d/%2d is earlier than %.2d/%.2d/%.2d", month1, day1, year1, month2, day2, year2);
            else printf("\n%.2d/%.2d/%.2d is earlier than %.2d/%.2d/%.2d", month2, day2, year2, month1, day1, year1);
        }
        else if (month1 < month2) printf("\n%.2d/%.2d/%2d is earlier than %.2d/%.2d/%.2d", month1, day1, year1, month2, day2, year2);
        else printf("\n%.2d/%.2d/%.2d is earlier than %.2d/%.2d/%.2d", month2, day2, year2, month1, day1, year1);
    }
    else if (year1 < year2) printf("\n%.2d/%.2d/%2d is earlier than %.2d/%.2d/%.2d", month1, day1, year1, month2, day2, year2);
    else printf("\n%.2d/%.2d/%.2d is earlier than %.2d/%.2d/%.2d", month2, day2, year2, month1, day1, year1);

    return 0;
}