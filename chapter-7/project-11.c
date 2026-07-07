#include <stdio.h>

int main() {

    char name[20], lastName[20];

    printf("Enter a first and last name: ");
    scanf("%s %s", &name, &lastName);

    printf("%s, %c.", lastName, name[0]);

    return 0;
}