#include <stdio.h>   

int LCM(int num1, int num2)
{
    int smaller, larger, i; 
    
    if (num1 >= num2)  
    {
        larger = num1; 
        smaller = num2;  
    }
    else  
    {
        larger = num2;  
        smaller = num1;  
    }
    i = larger; 
    while (1)
    {
        if (i % smaller == 0)  
        {
            return i; 
        }
        i = i + larger;  
    }
}
int main()  
{
    int n1, n2;  
    printf("Enter two integer numbers to find lcm : ");  
    scanf_s("%d%d", &n1, &n2);  
    printf("LCM of %d and %d is %d", n1, n2, LCM(n1, n2));  
    return 0;  
}