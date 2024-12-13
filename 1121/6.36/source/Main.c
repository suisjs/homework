#include <stdio.h>

void stringReverse(const char* str);

int main() {
    const char* str = "Hello, World!";
    printf("Original string: %s\n", str);
    printf("Reversed string: ");
    stringReverse(str);
    printf("\n");
    return 0;
}

void stringReverse(const char* str) {
    if (*str == '\0') {
        return;
    }
    stringReverse(str + 1); 
    putchar(*str); 
}