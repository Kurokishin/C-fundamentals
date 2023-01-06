#include <stdio.h>

// Converting temperature from Celsius to Fahrenheit
int main()
{
    double tempCelsius, tempFahrenheit;
    printf("The temperature in Celsius: ");
    scanf("%lf", &tempCelsius);

    double conversorToFahr = tempCelsius * 1.8 + 32;
    printf("The temperature in Fahrenheit is: %.2lfºF \n", conversorToFahr);
    return 0;
}