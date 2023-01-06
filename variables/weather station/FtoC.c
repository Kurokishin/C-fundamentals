#include <stdio.h>

// Converting temperature from Fahrenheit to Celsius
int main()
{
    double tempCelsius, tempFahrenheit;
    printf("The temperature in Fahrenheit: ");
    scanf("%lf", &tempFahrenheit);

    double conversorToCelsius = (tempFahrenheit - 32) / 1.8;
    printf("The temperature in Celsius is: %.2lfºC \n", conversorToCelsius);
    return 0;
}