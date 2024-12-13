#include <stdio.h>
#include <stdlib.h>
#include <math.h>
     
    int main() {
    float principal = 5000.0; 
    int years = 15;            
    float interestRate; 
    float amount;

    printf("Year\t");
    printf("10.0%%\t\t");
    printf("10.5%%\t\t");
    printf("11.0%%\t\t");
    printf("11.5%%\t\t");
    printf("12.0%%\n");

    
    for (int year = 1; year <= years; year++) 
    {
        printf("%d\t", year);  
        for (interestRate = 10.0; interestRate <= 12.0; interestRate += 0.5)
        {
            amount = principal * pow((1 + interestRate / 100), year);
            printf("$%.2f\t", amount);  
        }
        printf("\n");
    }  
        return 0;
}