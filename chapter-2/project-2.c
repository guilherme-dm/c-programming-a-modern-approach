#include <stdio.h>

int main() {

    int radius = 10;
    const double pi = 3.141592653589793; 

    printf("Sphere volume: %.2f", ((4.0 / 3.0) * pi) * (radius * radius * radius));

    return 0;
}