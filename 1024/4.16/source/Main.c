#include <stdio.h>
#include <stdlib.h>

int main() {
    printf("(A)\n");
    int i, j;

    for (i = 1; i <= 10; i++) 
    { 
        for (j = 1; j <= i; j++)
        { 
            printf("*"); 
        }
        printf("\n"); 
    }

    printf("(B)\n");
    for (i = 10; i >= 1; i--) 
    { 
        for (j = 1; j <= i; j++)
        { 
            printf("*"); 
        }
        printf("\n"); 
    }

    printf("(C)\n");
    for (i = 10; i >= 1; i--)
    { 
        for (j = 1; j <= 10 - i; j++)
        { 
            printf(" "); 
        }
        for (j = 1; j <= i; j++) 
        { 
            printf("*"); 
        }
        printf("\n"); 
    }

    printf("(D)\n");
    for (i = 1; i <= 10; i++) 
    { 
        for (j = 1; j <= 10 - i; j++) 
        { 
            printf(" "); 
        }
        for (j = 1; j <= i; j++) 
        { 
            printf("*"); 
        }
        printf("\n"); 
    }

    return 0;
}
 