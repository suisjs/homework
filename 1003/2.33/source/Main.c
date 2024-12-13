#include <stdio.h>
#include <stdlib.h>

int main() {
    
    float totalMiles, costPerGallon, milesPerGallon, parkingFees, tolls;
    float gasCost, totalCost;

    printf("Enter total miles driven per day: ");
    scanf_s("%f", &totalMiles);

    printf("Enter cost per gallon of gasoline: ");
    scanf_s("%f", &costPerGallon);

    printf("Enter average miles per gallon: ");
    scanf_s("%f", &milesPerGallon);

    printf("Enter parking fees per day: ");
    scanf_s("%f", &parkingFees);

    printf("Enter tolls per day: ");
    scanf_s("%f", &tolls);

    gasCost = (totalMiles / milesPerGallon) * costPerGallon;

    totalCost = gasCost + parkingFees + tolls;

    printf("\nDaily Driving Cost Breakdown:\n");
    printf("Gas Cost: $%.2f\n", gasCost);
    printf("Parking Fees: $%.2f\n", parkingFees);
    printf("Tolls: $%.2f\n", tolls);
    printf("Total Daily Driving Cost: $%.2f\n", totalCost);

    return 0;
}