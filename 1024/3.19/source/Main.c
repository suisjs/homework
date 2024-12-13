#include <stdio.h>
#include <stdlib.h>

int main() {

    float loanPrincipal, interestRate, loaninday;
    float interestcharge;

    printf("Enter loan principal(-1 to end): ");
    scanf_s("%f", &loanPrincipal);
    if (loanPrincipal == -1) 
    {
        return 0;
    }
    printf("Enter interest rate: ");
    scanf_s("%f", &interestRate);

    printf("Enter term of the loan in day: ");
    scanf_s("%f", &loaninday);

    interestcharge = loanPrincipal* interestRate*loaninday/365;

    printf("\nThe interest charge is: $%.2f\n", interestcharge);

    return 0;
}