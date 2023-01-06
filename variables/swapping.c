// Your task is to implement the swap functionality between 2 Floating Point variables holding 2 floating point values. Print the values of both variables BEFORE and AFTER the swapping functionality.
#include <stdio.h>

int main()
{
    int a = 10, b= 4;
    printf("a = %d\n", a);
    printf("b = %d\n", b);
    int temp = b;
    b = a;
    a = temp;
    printf("After swapping...\n");
    printf("a = %d\n", a);
    printf("b = %d\n", b);
}