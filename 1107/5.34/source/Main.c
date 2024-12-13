#include <stdio.h> 

int power(int base, int exponent) {
    
    if (exponent == 1) {
        return base;
    }
    else {
        return base * power(base, exponent - 1);
    }
}
int main() 
{
    int base, exponent;
    printf("Enter base and exponent: ");
    scanf_s("%d %d", &base, &exponent);
    printf("%d^%d = %d\n", base, exponent, power(base, exponent));

    return 0;
}