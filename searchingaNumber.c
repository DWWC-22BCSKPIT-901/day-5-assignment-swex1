//searching a number
#include <stdio.h>

int searchNumber(int arr[], int size, int k) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == k) {
            return i;  
        }
    }
    return -1; 
}

int main() {
    int n, k;
    printf("Enter the size of the array: ");
    scanf("%d", &n);
   int arr[n];
   printf("Enter the elements of the array:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
  printf("Enter the number to search: ");
    scanf("%d", &k);
   int position = searchNumber(arr, n, k);

    if (position != -1) {
        printf("The first occurrence of %d is at position: %d\n", k, position);
    } else {
        printf("Element %d is not present in the array.\n", k);
    }

    return 0;
}
