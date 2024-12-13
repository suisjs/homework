#include <stdio.h>
#include <stdlib.h>


int main() {
    
    printf("Number\tSquare\tCube\n");

    for (int i = 0; i <= 10; i++) {
        printf("%d\t%d\t%d\n", i, i * i, i * i * i);
    }

    return 0;
}