#include <stdio.h>
#include <stdlib.h>

int main() {
    float hoursworked, hourlyrate;
    float salary;

    printf("Enter # of hours worked(-1 to end): ");
    scanf_s("%f", &hoursworked);
    if (hoursworked == -1) {
        return 0;
    }

    printf("Enter hourly rate of the worker($00.00): ");
    scanf_s("%f", &hourlyrate);

    if (hoursworked <= 40) {
        salary = hoursworked * hourlyrate;
    }
    else {
        salary = (40 * hourlyrate) + ((hoursworked - 40) * hourlyrate * 1.5);
    }

    printf("\nSalary is: $%.2f\n", salary);

    return 0;
}