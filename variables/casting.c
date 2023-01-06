#include <stdio.h>

int main()
{
    int grade1, grade2, grade3;
    printf("Type 3 grades: ");
    scanf("%d %d %d", &grade1, &grade2, &grade3);
    // Integer numbers divided by a double will generate a double result
    double average = ((double)grade1 + grade2 + grade3)/3;
    printf("Your average is: %.2lf \n", average);
    return 0;
}