#include <stdio.h>
#include <ctype.h>

int main() {

    char string[50];
    int counter = 0;
    printf("Enter a sentence: ");
    scanf("%[^\n]", &string);

    for(int i = 0; string[i] != '\0'; i++) {

        switch (toupper(string[i])) {
            case 'A': 
            case 'E':
            case 'I':
            case 'O':
            case 'U': counter++; break;
        }
    }

    printf("Your sentence contains %d vowels\n", counter);

    return 0;
}