#include <stdio.h>

int main() {

    int numGrade;

    printf("Enter numerical grade (0-100): ");
    scanf("%3d", &numGrade);

    if (numGrade >= 0 && numGrade <= 100) {
        switch(numGrade / 10) {
            case 0:
            case 1:
            case 2:
            case 3:
            case 4:
            case 5:  printf("Letter grade: F");  break; 
            case 6:  printf("Letter grade: D");  break; 
            case 7:  printf("Letter grade: C");  break; 
            case 8:  printf("Letter grade: B");  break; 
            case 9: 
            case 10: printf("Letter grade: A");  break;
        }
    }
    else printf("Invalid grade. Must be between 0 and 100. Try again");

    return 0;
}