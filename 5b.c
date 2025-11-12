#include <stdio.h>

int binarySearch(int arr[], int n, int key) {
    int start = 0;
    int end = n - 1;

    while (start <= end) {
        int mid = (start + end) / 2;

        if (arr[mid] == key)
            return mid; // found
        else if (arr[mid] < key)
            start = mid + 1; 
        else
            end = mid - 1; 
    }

    return -1; 
}

int main() {
    int arr[] = {10, 20, 30, 40, 50, 60, 70};
    int n = sizeof(arr) / sizeof(arr[0]);
    int key = 50;

    int result = binarySearch(arr, n, key);
    if (result == -1)
        printf("Element not found\n");
    else
        printf("Element found at index %d\n", result);

    return 0;
}
