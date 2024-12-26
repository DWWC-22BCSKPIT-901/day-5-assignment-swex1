//search insert position 
#include <stdio.h>
int searchInsertPosition(int arr[], int size, int target) {
    int left = 0, right = size - 1;

    while (left <= right) {
        int mid = left + (right - left) / 2;

        if (arr[mid] == target) {
            return mid; 
        } else if (arr[mid] < target) {
            left = mid + 1; 
        } else {
            right = mid - 1; 
        }
    }
return left; 
}

int main() {
    int n, target;
   printf("Enter the size of the array: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the sorted array elements:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    printf("Enter the target value: ");
    scanf("%d", &target);
   int position = searchInsertPosition(arr, n, target);
    printf("The target would be inserted at index: %d\n", position);
    return 0;
}
