#include <stdio.h>

int main()
{
    /*int currentYear;
    int age;

    printf("Enter the current year: ");
    scanf("%d", &currentYear);

    printf("Enter your age: ");
    scanf("%d", &age);

    printf("You were born in %d\n", currentYear - age);*/

    /*double rectangleHeight, rectangleWidth;

    printf("Enter the height: ");
    scanf("%lf", &rectangleHeight);

    printf("Enter the width: ");
    scanf("%lf", &rectangleWidth);

    printf("The area of the triangle is %lf \n", rectangleHeight * rectangleWidth);*/


    float height, width;

    printf("Enter the height of the rectangle: ");
    scanf("%f", &height);

    printf("Enter the width of the rectangle: ");
    scanf("%f", &width);

    float perimeter = 2 * (height + width);
    printf("The perimeter of the rectangle is: %.2f\n", perimeter);

    return 0;
}