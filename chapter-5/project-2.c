#include <stdio.h>

int main() {

    int hours, minutes;

    printf("Enter a 24-hour time: ");
    scanf("%d:%d", &hours, &minutes);

    if (hours < 12) printf("Equivalent 12-hour time: %.2d:%.2d AM", hours, minutes);
    else printf("Equivalent 12-hour time: %.2d:%.2d PM", hours == 12 ? 12 : (hours - 12), minutes);

    return 0;
}