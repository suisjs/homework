#include <stdio.h>
#include <stdlib.h>


int main() {
    float weight, height, bmi;

    // Input for weight and height
    printf("Enter your weight in kilograms: ");
    scanf("%f", &weight);
    printf("Enter your height in meters: ");
    scanf("%f", &height);

    // Calculate BMI using the Metric formula
    bmi = weight / (height * height);

    // Display the calculated BMI
    printf("\nYour BMI is: %.2f\n", bmi);

    // Display BMI category based on BMI value
    printf("\nBMI VALUES:\n");
    printf("Underweight: less than 18.5\n");
    printf("Normal: between 18.5 and 24.9\n");
    printf("Overweight: between 25 and 29.9\n");
    printf("Obese: 30 or greater\n");

    // Determine the user's BMI category
    if (bmi < 18.5) {
        printf("\nYou are underweight.\n");
    }
    else if (bmi >= 18.5 && bmi < 24.9) {
        printf("\nYou have a normal weight.\n");
    }
    else if (bmi >= 25 && bmi < 29.9) {
        printf("\nYou are overweight.\n");
    }
    else {
        printf("\nYou are obese.\n");
    }

    return 0;
}