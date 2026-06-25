#include <stdio.h>

int main() {

    const double pi = 3.141592653589793; 
    int radius = 0;

    printf("Sphere radius: ");
    scanf("%i", &radius);

    printf("Sphere volume: %.2f", ((4.0 / 3.0) * pi) * (radius * radius * radius));

    return 0;
}