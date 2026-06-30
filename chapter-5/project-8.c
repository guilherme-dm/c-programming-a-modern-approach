#include <stdio.h>

int main() {

    int hours, minutes;

    printf("Enter a 24-hour time: ");
    scanf("%d:%2d", &hours, &minutes);

    minutes += hours * 60;    // minutes after midnight to simplify later calculations

    printf("Closest departure time is ");

    // TODO remove fixed departure/arrival minute values for a more dynamic and readable solution

    if (minutes < 480) printf("%d:%.2d AM, arriving at %d:%.2d AM", 480 / 60, 480 % 60, 616 / 60, 616 % 60);
    else if (minutes < 583) printf("%d:%.2d AM, arriving at %d:%.2d AM", 583 / 60, 583 % 60, 712 / 60, 712 % 60);
    else if (minutes < 679) printf("%d:%.2d AM, arriving at %d:%.2d PM", 679 / 60, 679 % 60, (811-720) / 60, (811-720) % 60);
    else if (minutes < 767) printf("%d:%.2d PM, arriving at %d:%.2d PM", 767 / 60, 767 % 60, (900-720) / 60, (900-720) % 60);
    else if (minutes < 840) printf("%d:%.2d PM, arriving at %d:%.2d PM", (840-720) / 60, (840-720) % 60, (968-720) / 60, (968-720) % 60);
    else if (minutes < 945) printf("%d:%.2d PM, arriving at %d:%.2d PM", (945-720) / 60, (945-720) % 60, (1075-720) / 60, (1075-720) % 60);
    else if (minutes < 1140) printf("%d:%.2d PM, arriving at %d:%.2d PM", (1140-720) / 60, (1140-720) % 60, (1280-720) / 60, (1280-720) % 60);
    else if (minutes < 1305) printf("%d:%.2d PM, arriving at %d:%.2d PM", (1305-720) / 60, (1305-720) % 60, (1438-720) / 60, (1438-720) % 60);
    else printf("%d:%.2d AM, arriving at %d:%.2d AM", 480 / 60, 480 % 60, 616 / 60, 616 % 60);

    return 0;
}