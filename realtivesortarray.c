#include <stdio.h>
#include <stdlib.h>
int compare(const void *a, const void *b) {
    return (*(int *)a - *(int *)b);
}
void relativeSortArray(int arr1[], int n1, int arr2[], int n2) {
    int output[n1], visited[n1], index = 0;
   for (int i = 0; i < n1; i++) {
        visited[i] = 0;
    }
    for (int i = 0; i < n2; i++) {
        for (int j = 0; j < n1; j++) {
            if (!visited[j] && arr1[j] == arr2[i]) {
                output[index++] = arr1[j];
                visited[j] = 1; 
            }
        }
    }
    for (int i = 0; i < n1; i++) {
        if (!visited[i]) {
            output[index++] = arr1[i];
        }
    }
  qsort(output + index - (n1 - index), n1 - index, sizeof(int), compare);
    for (int i = 0; i < n1; i++) {
        arr1[i] = output[i];
    }
}
int main() {
    int n1, n2;
    printf("Enter the size of arr1: ");
    scanf("%d", &n1);
    int arr1[n1];
    printf("Enter the elements of arr1:\n");
    for (int i = 0; i < n1; i++) {
        scanf("%d", &arr1[i]);
    }
    printf("Enter the size of arr2: ");
    scanf("%d", &n2);
    int arr2[n2];
    printf("Enter the elements of arr2:\n");
    for (int i = 0; i < n2; i++) {
        scanf("%d", &arr2[i]);
    }

    relativeSortArray(arr1, n1, arr2, n2);
    printf("The sorted array is:\n");
    for (int i = 0; i < n1; i++) {
        printf("%d ", arr1[i]);
    }
    printf("\n");

    return 0;
}
