#include <stdio.h>

// Calculate the nth term of an Arithmetic Sequence
int main() 
{
    float firstNumber, nDistance;
    int nElements;

    printf("---Arithmetic Sequence---\n");
    printf("What's the first number? ");
    scanf("%f", &firstNumber);

    printf("The amount of elements: ");
    scanf("%d", &nElements);

    printf("The distance between the elements: ");
    scanf("%f", &nDistance);

    float nthElement = firstNumber + (nElements - 1) * nDistance;

    printf("The nth element is: %.1f \n\n", nthElement);

    // Sum of all the elements in a given sequence
    float sumElements = (firstNumber + nthElement) * nElements/2;

    printf("The sum of the arithmetic sequence is: %.1f\n", sumElements);


    return 0;
}