#include <stdio.h>
#include <stdlib.h>

int main() {

    float perWeek = 200;
    float salary,saleDollars;

    printf("Enter sales in dollars(-1 to end): ");
    scanf_s("%f", &saleDollars);
    if (saleDollars == -1)
    {
        return 0;
    }
    salary = saleDollars * 0.09 + perWeek;

    printf("\nSalary is: $%.2f\n", salary);
    
    return 0;
}