#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int fibonacci(int a) {
    if (a == 0) return 0;
    if (a == 1) return 1;
    int fib[1000];
    fib[0] = 0;
    fib[1] = 1;

    for (int i = 2; i <= a; i++) {
        fib[i] = fib[i - 1] + fib[i - 2];
    }
    return fib[a];
}
int main() {
    int n;
    printf("Enter the position n for Fibonacci sequence: ");
    scanf_s("%d", &n);
    printf("Fibonacci of %d is: %d\n", n, fibonacci(n));

    return 0;
}