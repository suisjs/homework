#include <stdio.h>
#include <stdlib.h>

int main() {

    float accountNumber, begunnungBalance, totalCharges, totalCredits, creditLimit;
    float newBalance;

    printf("Enter account number(-1 to end): ");
    scanf_s("%f", &accountNumber);
    if (accountNumber == -1)
    {
        return 0;
    }
    printf("Enter begunnung balance: ");
    scanf_s("%f", &begunnungBalance);

    printf("Enter total charges: ");
    scanf_s("%f", &totalCharges);

    printf("Enter total credits: ");
    scanf_s("%f", &totalCredits);

    printf("Enter credit limit: ");
    scanf_s("%f", &creditLimit);

    newBalance = begunnungBalance + totalCharges - totalCredits;

    if (creditLimit < newBalance)
    {
        printf("\nAccount: %.2f\n", accountNumber);
        printf("Credit limit: %.2f\n", creditLimit);
        printf("Balance: %.2f\n", newBalance);
        printf("Credit Limit Exceedeed\n");
    }
    else if (creditLimit > newBalance)
        printf("\n");
    else
        printf("\n");
    return 0;
}