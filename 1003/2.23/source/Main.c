#include<stdio.h>
#include<stdlib.h>

int main() {
    int num1, num2, num3;

    printf("Enter three integers: ");
    scanf("%d %d %d", &num1, &num2, &num3);

    int largest = num1;
    int smallest = num1;

    if (num2 > largest) {
        largest = num2;
    }
    if (num3 > largest) {
        largest = num3;
    }

    if (num2 < smallest) {
        smallest = num2;
    }
    if (num3 < smallest) {
        smallest = num3;
    }

    printf("The largest integer is: %d\n", largest);
    printf("The smallest integer is: %d\n", smallest);

    return 0;
}