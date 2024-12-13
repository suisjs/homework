#include <stdio.h>
#include <stdlib.h>

int main() 
{
    int payCode;
    double weeklyPay;
    char continueInput;

    
        printf("Enter pay code (1: Manager, 2: Hourly Worker, 3: Commission Worker, 4: Pieceworker): ");
        scanf_s("%d", &payCode);

        switch (payCode)
        {
        case 1: 
        {
            double salary;
            printf("Enter the weekly salary: ");
            scanf_s("%lf", &salary);
            weeklyPay = salary;
            break;
        }
        case 2: 
        {
            double hourlyWage;
            int hoursWorked;
            printf("Enter hourly wage: ");
            scanf_s("%lf", &hourlyWage);
            printf("Enter hours worked: ");
            scanf_s("%d", &hoursWorked);

            if (hoursWorked > 40) 
            {
                double overtimeHours = hoursWorked - 40;
            
                    weeklyPay = (hourlyWage * 40) + (overtimeHours * hourlyWage * 1.5);
            }
            else 
            {
                weeklyPay = hourlyWage * hoursWorked;
            }
            break;
        }
        case 3: 
        {
            double grossSales;
            printf("Enter gross weekly sales: ");
            scanf_s("%lf", &grossSales);
            weeklyPay = 250 + (grossSales * 0.057);
            break;
        }
        case 4: 
        {
            double pieceRate;
            int piecesProduced;
            printf("Enter piece rate: ");
            scanf_s("%lf", &pieceRate);
            printf("Enter number of pieces produced: ");
            scanf_s("%d", &piecesProduced);
            weeklyPay = pieceRate * piecesProduced;
            break;
        }
        
        
        printf("Invalid pay code. Please try again.\n");
        
        }
        printf("Weekly Pay: $%.2lf\n", weeklyPay);
    return 0;
}

