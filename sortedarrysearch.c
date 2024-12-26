//sorted array search 
#include <stdio.h>
#include <stdbool.h>
bool binarySearch(int arr[], int size, int k) {
    int left = 0, right = size - 1;

    while (left <= right) {
        int mid = left + (right - left) / 2;

        if (arr[mid] == k) {
            return true; 
        }
        if (arr[mid] < k) {
            left = mid + 1; 
        } else {
            right = mid - 1; 
        }
    }
    return false; 
}

int main() {
    int n, k;
    printf("Enter the size of the array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter the elements of the sorted array:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    printf("Enter the number to search: ");
    scanf("%d", &k);
    if (binarySearch(arr, n, k)) {
        printf("Element %d is present in the array.\n", k);
    } else {
        printf("Element %d is not present in the array.\n", k);
    }

    return 0;
}
