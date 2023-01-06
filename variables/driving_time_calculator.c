#include <stdio.h>

// Calculate the time to drive between to spots
int main()
{
    double distance, speed;
    printf("What's the distance to get to your destiny (kilometers)? ");
    scanf("%lf", &distance);

    printf("The average speed (km/h): ");
    scanf("%lf", &speed);

    double time = distance/speed;
    int hour = (int)time;
    int minute = (time - hour) * 60;

    printf("The journey will take you %.d hours and %.d minutes\n", hour, minute);
    return 0;
}