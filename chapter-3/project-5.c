#include <stdio.h>

int main() {

    // Trivia -> Choosing numbers: 16 3 2 13 5 10 11 8 9 6 7 12 4 15 14 1 results in 34 on all sums, which is a magic square.
    
    int n[16];   

    printf("Enter the numbers from 1 to 16 in any order:\n");
    scanf("%d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d", 
        &n[0], &n[1], &n[2], &n[3], 
        &n[4], &n[5], &n[6], &n[7], 
        &n[8], &n[9], &n[10], &n[11], 
        &n[12], &n[13], &n[14], &n[15]);

    printf("Row sums: %d %d %d %d\n", 
        (n[0] + n[1] + n[2] + n[3]), 
        (n[4] + n[5] + n[6] + n[7]), 
        (n[8] + n[9] + n[10] + n[11]), 
        (n[12] + n[13] + n[14] + n[15]));

    printf("Column sums: %d %d %d %d\n", 
        (n[0] + n[4] + n[8] + n[12]), 
        (n[1] + n[5] + n[9] + n[13]),
        (n[2] + n[6] + n[10] + n[14]),
        (n[3] + n[7] + n[11] + n[15]));
        
    printf("Diagonal sums: %d %d\n", 
        (n[0] + n[5] + n[10] + n[15]), 
        (n[12] + n[9] + n[6] + n[3]));

    return 0;       
}