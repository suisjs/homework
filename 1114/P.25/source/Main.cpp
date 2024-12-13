#include <stdio.h>
#include <stdlib.h>

int addbyone(int* pxref);  

int main()  
{
    int x = 100;
    int y = addbyone(&x); 
    printf("x = %d\n", x);  
    system("pause");
}

int addbyone(int* pxref)
{
    (*pxref)++;  
    printf("xref = %d\n", *pxref); 
    return *pxref;
}