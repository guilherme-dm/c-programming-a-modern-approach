#include <stdio.h>
#include <ctype.h>

int main() {

    char num[15];
    printf("Enter phone number: ");
    scanf("%s", &num);

    for (int i = 0; num[i] != '\0'; i++) {
        if (isalpha(num[i])) {

            switch(num[i]) {
                case 'A': 
                case 'B':
                case 'C': printf("2"); break;
                case 'D':
                case 'E':
                case 'F': printf("3"); break;
                case 'G':
                case 'H':
                case 'I': printf("4"); break;
                case 'J':
                case 'K':
                case 'L': printf("5"); break;
                case 'M':
                case 'N':
                case 'O': printf("6"); break;
                case 'P':
                case 'R':   
                case 'S': printf("7"); break;
                case 'T':
                case 'U':
                case 'V': printf("8"); break;
                case 'W':
                case 'X':
                case 'Y': printf("9"); break;
            }
            
        }
        else {
            printf("%c", num[i]);
        }
    }

    return 0;
}