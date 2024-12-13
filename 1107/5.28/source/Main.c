#include <stdio.h>  

char changeCase(char c)  
{
    if (c >= 'A' && c <= 'Z')  
    {
        return c + ('a' - 'A');  
    }
    else if (c >= 'a' && c <= 'z')  
    {
        return c - ('a' - 'A');  
    }
    return c;  
}

int main() 
{
    char inputChar;  

    printf("Enter an alphabet: ");  
    scanf_s("%c", &inputChar, 1);  

    char result = changeCase(inputChar);  
    printf("Changed case: %c\n", result);  

    return 0;  
}