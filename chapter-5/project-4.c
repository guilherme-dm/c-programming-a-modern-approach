#include <stdio.h>

int main() {

    float windSpeed;

    printf("Enter a wind speed in knots: ");
    scanf("%f", &windSpeed);

    // Beaufort wind scale
    if (windSpeed < 1)        printf("Calm");
    else if (windSpeed <= 3)  printf("Light air");
    else if (windSpeed <= 27) printf("Breeze");
    else if (windSpeed <= 47) printf("Gale");
    else if (windSpeed <= 63) printf("Storm");
    else if (windSpeed > 63)  printf("Hurricane");

    return 0;
}