#include <stdio.h>

// Calculate and print the total monthly salary of an employee
int main()
{
    double salaryHour, totalMonthlyHours;

    printf("Your hourly salary: ");
    scanf("%lf", &salaryHour);

    printf("The total amount of hours worked in a month: ");
    scanf("%lf", &totalMonthlyHours);

    double totalSalaryMonth = salaryHour * totalMonthlyHours;

    printf("Your salary per month is: $%.2lf\n", totalSalaryMonth);
    return 0 ;
}