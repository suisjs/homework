#include <stdio.h>

int recursiveMaximum(const int arr[], int size);

int main() {
    int array[] = { 3, 5, 7, 2, 8, 6, 4, 10, 1 };
    int size = sizeof(array) / sizeof(array[0]);
    int max = recursiveMaximum(array, size);
    printf("The maximum value in the array is: %d\n", max);
    return 0;
}

int recursiveMaximum(const int arr[], int size) {
    if (size == 1) {
        return arr[0];
    }

    int maxOfRest = recursiveMaximum(arr + 1, size - 1);
    return (arr[0] > maxOfRest) ? arr[0] : maxOfRest;
}
