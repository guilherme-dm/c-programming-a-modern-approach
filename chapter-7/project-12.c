#include <stdio.h>

int main(void) {
    float num, sum = 0.0f;
    char opt = '+';

    printf("Enter an expression: ");

    while (scanf("%f", &num) == 1) {
        
        switch (opt) {
            case '+': sum += num; break;
            case '-': sum -= num; break;
            case '*': sum *= num; break;
            case '/': sum /= num; break;
        }

        opt = getchar();
        
        while (opt == ' ') {
            opt = getchar();
        }

        if (opt == '\n') {
            break;
        }
    }

    printf("Value of expression: %.2f\n", sum);

    return 0;
}