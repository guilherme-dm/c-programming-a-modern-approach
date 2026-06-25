#include <stdio.h>

int main() {

    int area, office, line;

    printf("Enter phone number [(xxx) xxx-xxxx]: ");
    scanf("(%d) %d-%d", &area, &office, &line);

    printf("You entered: %d.%d.%d", area, office, line);

    return 0;
}