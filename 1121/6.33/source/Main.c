#include <stdio.h>

int binarySearch(int arr[], int low, int high, int key);

int main() {
    int array[] = { 2, 4, 6, 8, 10, 12, 14, 16, 18, 20 };
    int size = sizeof(array) / sizeof(array[0]);
    int key = 10;
    int result = binarySearch(array, 0, size - 1, key);

    if (result != -1) {
        printf("Element found at index %d\n", result);
    }
    else {
        printf("Element not found in the array.\n");
    }

    return 0;
}

int binarySearch(int arr[], int low, int high, int key) {
    if (low > high) {
        return -1; 
    }

    int mid = (low + high) / 2;

    if (arr[mid] == key) {
        return mid; 
    }
    else if (arr[mid] > key) {
        return binarySearch(arr, low, mid - 1, key); 
    }
    else {
        return binarySearch(arr, mid + 1, high, key); 
    }
}