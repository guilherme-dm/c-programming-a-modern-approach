#include <stdio.h>
#include <ctype.h>

int main() {

    char string[100];
    float average = 0;
    int letterCount = 0, words = 0;

    printf("Enter a sentence: ");
    scanf("%[^\n]", string);

    for (int i = 0; string[i] != '\0'; i++) {

        if (isalpha(string[i]) || ispunct(string[i])) letterCount++;
        // Tries looking one char ahead for end of word/string, to void escaping loop without calculating last word 
        if (string[i+1] == '\0' || string[i+1] == ' ') {
            words++;
            average += (letterCount - average) / words;
            letterCount = 0;
        }
    }

    printf("Average word length: %.1f", average);

    return 0;
}