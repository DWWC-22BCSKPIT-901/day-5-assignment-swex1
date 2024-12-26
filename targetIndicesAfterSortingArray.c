//find target indice after sorting array ;
#include <stdio.h>
#include <stdlib.h>
int compare(const void *a, const void *b) {
    return (*(int *)a - *(int *)b);
}
void findTargetIndices(int nums[], int size, int target) {
   
    qsort(nums, size, sizeof(int), compare);
    int found = 0; 
    printf("Target indices: ");
    for (int i = 0; i < size; i++) {
        if (nums[i] == target) {
            printf("%d ", i);
            found = 1;
        }
    }
   if (!found) {
        printf("No target indices found.");
    }

    printf("\n");
}

int main() {
    int n, target;
   printf("Enter the size of the array: ");
    scanf("%d", &n);

    int nums[n];
    printf("Enter the elements of the array:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &nums[i]);
    }
    printf("Enter the target element: ");
    scanf("%d", &target);
    findTargetIndices(nums, n, target);

    return 0;
}
