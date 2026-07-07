#include <stdio.h>
#include <ctype.h>

int main() {

    int hours, minutes;
    char ampm;

    printf("Enter a 12-hour time (Eg: 01:00 AM): ");
    scanf("%d:%d %c", &hours, &minutes, &ampm);

    if (toupper(ampm) == 'A' || hours == 12) printf("Equivalent 24-hour time: %.2d:%.2d\n", hours, minutes);
    else if (toupper(ampm) == 'P') printf("Equivalent 24-hour time: %.2d:%.2d\n", hours + 12, minutes);

    return 0;
}