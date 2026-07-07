#include <stdio.h>
#include <ctype.h>

int main() {

    char str[30];
    int score = 0;
    printf("Enter a word: ");
    scanf("%s", &str);

    for (int i = 0; str[i] != '\0'; i++) {

        switch(toupper(str[i])) {
            case 'A':  
            case 'E':  
            case 'I':  
            case 'L':  
            case 'N':  
            case 'O':  
            case 'R':  
            case 'S':  
            case 'T':  
            case 'U': score += 1; break;
            case 'D':
            case 'G': score += 2; break;
            case 'B':
            case 'C':
            case 'M':
            case 'P': score += 3; break;
            case 'F': 
            case 'H': 
            case 'V': 
            case 'W': 
            case 'Y': score += 4; break;
            case 'K': score += 5; break;
            case 'J':
            case 'X': score += 8; break;
            case 'Q':
            case 'Z': score += 10; break;
        }
    }
        
    printf("Scrabble value: %d", score);

    return 0;
}